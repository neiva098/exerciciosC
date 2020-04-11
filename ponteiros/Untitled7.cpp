#include<stdio.h>
#include<stdlib.h>
int tamanho(char *s)
{	int i;
	for(i=0;s[i]!='\0';i++);
	return i;
	
}
char *concatenar(char *o,char *d)
{	
	char *ptr=d;
	int j;
	int i;
	for(i=tamanho(o),j=0;d[j]!=0;j++,i++)
	{
		o[i]=d[j];
	}
	o[i]='\0';
	return ptr;
}
main()
{
	char o[200];
	char d[200];
	gets(o);
	gets(d);
	concatenar(o,d);
	printf("%s",o);
}
