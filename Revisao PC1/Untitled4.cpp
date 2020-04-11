#include<stdio.h>
int main()
{
	printf("Digite dois numeros\n");
	int n1,n2;
	int s=0;
	int tmp;
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	{
		tmp=n1;
		n1=n2;
		n2=tmp;
	}
	while (n1<=n2)
	{
		if(n1%2!=0)
		{
			s=n1+s;
		}
	n1++;
	}printf("A soma e %d",s);
}
