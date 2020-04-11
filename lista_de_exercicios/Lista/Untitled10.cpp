#include<stdio.h>
int potencia(int a,int b)
{	
	int k=1;
	while (b!=0)
	{
		k=k*a;
		b--;
	}	
	return k;
}
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	potencia(a,b);
	printf("%d",potencia(a,b));
}
