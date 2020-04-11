#include<stdio.h>
int main()
{
	int l=1;
	int s=1;
	int k;
	while(1)
	{
	
	scanf("\n%d",&k);
	
	
	
	while (l<=k)
	{
	while(s!=0)
	{
		printf("*");
		s--;
	}
	l++;
	printf("\n");
	s=l;	
	}
	s=1;
	l=1;
	}
}
