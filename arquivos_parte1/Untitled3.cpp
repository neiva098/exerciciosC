#include<stdio.h>
#include<stdlib.h>
main()
	{
		FILE *fout;
		int ch;
		char s[100];
		gets(s);
		fout=fopen(s,"wb");
		gets(s);
		int i;
   		for( i=0; s[i]; i++) 
		fputc(s[i],fout);
		
	}
