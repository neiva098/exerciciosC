#include<stdio.h>
int mmc(int a,int b)
{	int cntrl=0;
	int m=1;
	int d=2;
	while(a!=1||b!=1)
	{	
	if(a%d==0||b%d==0)
	{	cntrl=1;
		m=m*d;
		if(a%d==0)
		{
			a=a/d;
		}else b=b/d;
		
	printf("%d , %d  %d\n",a,b,d);
	}
	if(cntrl!=1)
	{
		d++;
	}
	}
	return m;
}
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("    mmc = %d",mmc(a,b));
	
}


