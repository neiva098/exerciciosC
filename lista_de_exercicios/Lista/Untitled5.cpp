#include<stdio.h>
bissexto(int a)
{
	if((a%100!=0&&a%4==0)||(a%100==0&&a%400==0))
	{
		return 1;
	}else return 0;
}
	contadordias(int d,int m, int a)
{	
	int s=0;
	if(bissexto(a)==1&&m>2)
	{
		s++;
	}
	s=31*m + d;
	return s;	
}	

main()
{
	int d,m,a;
	printf("Digite dia/mes/ano\n");
	scanf("%d/%d/%d",&d,&m,&a);
	bissexto(a);
	contadordias(d,m,a);
	printf("Soma de dias = %d \nE bissexto? %d\n",contadordias(d,m,a),bissexto(a));
	
}
