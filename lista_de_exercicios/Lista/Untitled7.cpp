#include<stdio.h>
int primo(int a)
{
	int d=1;
	while(d<a)
	{
	if(a%d==0&&(d!=1&&d!=a))
	{
		break;
	}
	d++;
	}
	return (a%d==0&&(d!=1&&d!=a));
}
int somaprimos(int a)
{	int s=0;
	while (a!=1)
	{
		if(primo (a)==0)
		{
			s=s+a;	
		}
	a--;
	}
	return s;
}
main()
{
	int a;
	scanf("%d",&a);
	somaprimos(a);
	printf("%d",somaprimos(a));
}
