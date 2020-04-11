#include<stdio.h>
int numcommaisdivisores(void)
{
	int a=1;
	int tmp=0;
	int tempa;
	int cont=0;
	while (a<=10000)
	{
		int b=a;
		cont=0;
		while(b>=1)
		{
			if(a%b==0)
			{
				cont++;
			}
			b--;
		}
		if(cont>tmp)
		{
			tmp=cont;
			tempa=a;
		}
		a++;	
	}
	printf("%d\n",tempa);
	return tmp;
}
main()
{
	printf("%d",numcommaisdivisores());	
}
