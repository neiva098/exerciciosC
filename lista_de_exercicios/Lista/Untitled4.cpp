#include<stdio.h>
bissexto(int a)
{
	if((a%100!=0&&a%4==0)||(a%100==0&&a%400==0))
	{
		return 1;
	}
	return 0;
}
main()
{
	int a;
	scanf("%d",&a);
	bissexto(a);
	printf("%d",bissexto(a));
}
