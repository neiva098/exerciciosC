#include<stdio.h>
int primo(int a)
{
	int d=1;
	if(a==2)
	{
		return 1;
	}
	while(d<a)
	{
	
	if(a%d==0&&(d!=1&&d!=a))
	{
	return 0;
	break;
	}
	d++;
	}
	return 1;
}
void proximonum(int a)
{	
	while(1)
	{	
		if(primo(a)!=0)
		{
			printf("%d",a);
			break;
		}
	a++;
	}
}
main()
{
	int a;
	scanf("%d",&a);
	proximonum(a);
}
