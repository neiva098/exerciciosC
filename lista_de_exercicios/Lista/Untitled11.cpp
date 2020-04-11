#include<stdio.h>
float potencia(float a,float b)
{	
	int k=1;
	while (b!=0)
	{
		k=k*a;
		b--;
	}	
	return k;
}
float val(float x,int n,float t)
{	
	float s=0;
	int b=1;
	float a=1+t;
	while (b<=n)
	{
		potencia(a,b);
		s=x/(potencia(a,b))+s;	
		b++;
	}
	return s;
}
main()
{
	float x,t;
	int n;
	scanf("%f%d%f",&x,&n,&t);
	printf("%f",val(x,n,t));
}
