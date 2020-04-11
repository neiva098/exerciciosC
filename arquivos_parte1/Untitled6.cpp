#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
main(int argc,char *argv[])
{
	FILE *fp;
	int ch;
	fp=fopen(argv[1],"r");
	
	while((ch=fgetc(fp))!=EOF)
	{
		putchar(toupper(ch));
	
	}
}
