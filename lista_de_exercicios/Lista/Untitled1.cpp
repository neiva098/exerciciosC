#include<stdio.h>
multiplicacao(int a, int b)
{	
	int s=0;
	
	for(int cont=0;cont<b;cont++)
	{
		s=s+a;
	}
	return s;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	multiplicacao(a,b);
	printf("%d",multiplicacao(a,b));
}
