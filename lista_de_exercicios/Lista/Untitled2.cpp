#include<stdio.h>
somaimpares(int n1,int n2)
{
	int s=0;
	for(n1;n1<=n2;n1++)
	{
		if(n1%2!=0)
		{
			s=n1+s;
		}
	}
	return s;
}
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	int tmp;
	if(n1>n2)
	{
		tmp=n2;
		n2=n1;
		n1=tmp;
	}
	somaimpares(n1,n2);
	printf("%d",somaimpares(n1,n2));
}

