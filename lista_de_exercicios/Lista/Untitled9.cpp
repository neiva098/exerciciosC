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
int somafatorial(int n)
{	
	int a=3;
	int s=0;
	while(n>=a)
	{
		s=s+fatorial(a);
		a++;
	}
	return s;
}

main()
{
	int n;
	scanf("%d",&n);
	somafatorial(n);
	printf("%d",somafatorial(n));	
}

