#include<stdio.h>
int fatorial(int a)
{	
	if(a<0)
	{
		return -1;
	}
	int k=1;
	if(a==0)
		{
		return 1;
		}	
	while(a!=1)
	{
		k=a*k;
		a--;
	}return k;
}
int main()
{
	int a;
	scanf("%d",&a);
	fatorial(a);
	if(fatorial(a)==-1)
	{
		printf("Valor invalido\n");
	}else
	printf("%d",fatorial(a));
}
