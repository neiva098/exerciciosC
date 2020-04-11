#include<stdio.h>
soma(int n)
{
	int s=0;
	for(int i=3;i<=n;i++)
	{
		s=5*i+2+s;
	}
	return s;
}
int main()
{
	int n;
	scanf("%d",&n);
	soma(n);
	printf("%d",soma(n));
}
