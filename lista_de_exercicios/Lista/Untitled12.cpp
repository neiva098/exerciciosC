#include<stdio.h>
float potencia(float a,int b)
{	
	int k=1;
	while (b!=0)
	{
		k=k*a;
		b--;
	}	
	return k;
}
float fatorial(int a)
{	
	float k=1;	
	while(a!=1)
	{
		k=a*k;
		a--;
	}return k;
}
float soma(int n)
{	
	int a=3;
	float s=0;
	while (a<=n)
	{		
		
		s=(fatorial(a)/potencia(a,a))+s;
		printf("%f\n%f\n%f\n",fatorial(a),potencia(a,a),s);
		a++;	
	}
	return s;
}
main()
{
	int n;
	scanf("%d",&n);
	soma(n);
	printf("%f",soma(n));
}
