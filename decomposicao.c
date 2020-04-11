#include <stdio.h>
#include <stdlib.h>
void mostrar(int vt[], int x)//printa o vetor, se for ultimo estado nao quebra linha
{   int i=0;
	for (; i < x-1; i++)
	printf("%d + ",vt[i]);
	if(vt[0]==1)
	printf("%d",vt[i]);
	else printf("%d\n",vt[i]);
}
void decompor(int x)
{
	int vt[x];//vetor da fase de decomposiçao
	vt[0] = x;//primeira fase recebe o proprio numero
    int k = 0;//inicia na posiçao 0
	while (1)
	{
		mostrar(vt, k+1);
		int atual = 0;//valor a ser duplicado
		while (k>=0&&vt[k]==1)//enquanto houver numeros ja decompostos
		{
			atual+=vt[k];//soma o total
			k--;
		}
		if (k < 0) return;//se o ultimo foi decomposto retorna
		vt[k]--;//tira se do ulimo nao decomposto e soma ao resto
		atual++;
		while (atual>vt[k])//se o resto for maior q o valor da posicao atual
		{
			vt[k+1] = vt[k];//passase este  para a proxima posiçao
			atual = atual - vt[k];//subtraise do resto a posiçao
			k++;
		}
		vt[k+1]=atual;//ultima posiçao e o resto
		k++;
	}
}
int main()
{
    printf("Digite um numero inteiro: ");
    int x;
    scanf("%d",&x);
    printf("Decomposicao:\n");
    decompor(x);
}
