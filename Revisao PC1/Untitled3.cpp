#include<stdio.h>
int main ()
{
	printf("Digite o numero ao qual deseja obter o fatorial\n");
	int x;
	scanf("%d",&x);
	int f=1;
	int cont;
	while(x!=1)
	{
		f=f*x;
		x--;
	}
	printf("%d\n",f);	
}
