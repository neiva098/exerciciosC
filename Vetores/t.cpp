#include<stdio.h>
#include<stdlib.h>

int main()
{
	int tamanho;
	scanf("%d",&tamanho);
	int s=0;
	int *salario;
	salario=(int*)malloc(tamanho);
		
		for(int i=0;i<tamanho;i++)
	{
		scanf("%d",&salario[i]);
		s=salario[i]+s;
		
	}
	printf("media %d\n",s/3);
	for(int i=0;i<tamanho;i++)
	{
		printf ("%d\n",salario[i]);
	}
}
