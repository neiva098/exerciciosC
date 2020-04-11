#include<stdio.h>
int main()
{
	printf("Digite dois numeros a serem multiplicados\n");
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	int cont;
	int p=0;
	while (cont<n2)
	{
		p=n1+p;
		cont++;
	}printf("Pruduto igual a %d\n",p);	
}
