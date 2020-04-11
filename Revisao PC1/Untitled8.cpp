#include<stdio.h>
int main()
{
	float s=0;
	int a=1;
	float b=1;
	while(a<=99&&b<=50)
	{
		s=(a/b) + s;
		a=a+2;
		b++;
		
	}printf("%f\n",s);
	
	
	
	
}
