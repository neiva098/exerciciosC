#include<stdio.h>
#include<string.h>
FILE *arqv;
main()
{	
	arqv = fopen("arqv.txt","r+");
	if(arqv==NULL)
	{
		return 0;
	}
	char s[100];
	gets(s);
	fprintf(arqv,"%s",s);
	fprintf(arqv,"  ",s);
	for(int i=strlen(s)-1;i>=0;i--)
	{
		fprintf(arqv,"%c",s[i]);
	}
}
	
