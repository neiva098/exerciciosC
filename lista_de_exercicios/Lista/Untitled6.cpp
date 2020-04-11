#include<stdio.h>
primo(int a)
{
		int d=1;
		while (d<=a)
		{
		if(a%d==0&&(d!=1&&d!=a))
		{
		break;
		}
		d++;
		}	return (a%d==0&&(d!=1&&d!=a)) ;
}
main()
{	while(1)
	{
	
	int a;
	scanf("%d",&a);
	if (primo(a)!=0||a==1||a==0)
	{
		printf("nao primo\n");
	}else puts("Numero primo\n");
	}
}
