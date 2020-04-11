#include<stdio.h>
int main()
{
	int k;
	int a=0;
	int p=0;
	printf("Digite um numero\n");
	scanf("%d",&k);
	if(k%2==0&&k!=2)
	{
		printf("Numero nao e primo\n");	
	}else{
	
	while(a<=k/2)
	{
		a++;
		if(k%a==0&&a!=k&&a!=1)
		{
			p++;break;
		}
	}
	if(p==1)
	{
		printf("Numero nao e primo\n");
	}else printf("Numero e primo\n");
	
	}
}
