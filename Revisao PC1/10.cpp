#include<stdio.h>
int main()
{
	int k=1;
	int s3=0;
	int s5=0;
	int s15=0;
	while (k*3<=1000)
	{
		s3=k*3 + s3;
		printf("%d\n",k*3);
		k++;
	}
	k=1;
	while (k*5<=1000)
	{
		s5=k*5+s5;
		
		k++;
		
	}
	k=1;
	while (k*15<=1000)
	{
		s15=k*15+s15;
		
		k++;
		
	}
	printf("%d\n",s3+s5-s15);
}
