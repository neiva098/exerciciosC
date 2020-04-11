#include <stdio.h>
int mult2(int n)
{
int k=1;
int a;
int cntrl;
while(1)
{ 
  a = n*k;
 cntrl=1;

while(a>0)
{
 if(a%10>2)
 {
 	cntrl=0;
 }
 a=a/10;
}
if(cntrl!=0)
{
	return n*k;
	break;
}
else
{
	k++;
}
}
}

main()
{
	int n;
	scanf("%d",&n);
	printf("%d",mult2(n));
}
