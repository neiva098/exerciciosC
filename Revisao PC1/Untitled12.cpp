#include<stdio.h>
int main()
{	float  n=1;
	int x=1;
	float denm=1;
	float s=0;
	while(x<=10)
	{
		s=(n/denm) + s;
		x++;
		if(x%2==0)
		{
			n=-x;
		}else{
		n=x;
		}
		denm=n*n;
		printf("%f\n",s);
		
	}
	
}
