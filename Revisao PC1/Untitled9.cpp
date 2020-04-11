#include<stdio.h>
int main()
{
	printf("Digite um numero\n");
	int n;
	int x=0;
	scanf("%d",&n);
	for(int i=3;i<=n;i++)
		{
			x=5*i+2+x;
		}printf("%d",x);
}
