#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr;
	int a=20;
	ptr=&a;
	*ptr=15;
	printf("%d\n%p\n%d\n%p",*ptr,&a,a,ptr);
}
