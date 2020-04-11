#include<stdio.h>
int main()
{
	printf("Digite um numero entre 13 e 18\n");
	int x;
	int a=6;
	int b=6;
	int c=6;
	int h=6;
	scanf("%d",&x);
	while(a>1)
	{
	a--;
	while (b>1)
	{
		b--;
		while(h>1)
		{
			h--;
			if(a+b+h==x)
	{
		printf("%d\n %d \n%d",a,b,h);
	}
		}
	}
	
	printf("%d\n%d\n%d",a,b,h);
	}
}
