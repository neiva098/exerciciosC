#include<stdio.h>
int main()
{
	int l=1;
	int s=1;
	int k;
	scanf("%d",&k);
	while(1)
	{
	
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
	}
}
