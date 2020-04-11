#include<stdio.h>
FILE *arqv;
main()
{	arqv = fopen("arqv.txt","w");
	if(arqv==NULL)
	{
		return 0;
	}
	char ch;
	int i=0;
	char s[100];
	gets(s);
	while(s[i]!='\0')
	{	ch=s[i];
		if(ch=='/')
		{
			fprintf(arqv,"\n");
		}
		else
		{
			fprintf(arqv,"%c",s[i]);
		}
		i++;
	}
	
}

