#include<stdio.h>
#include<stdlib.h>
main(int argc,char*argv[])
{
	FILE *fp=stdin;
	fp=fopen(argv[1],"r");
	char s[81];
	int i=0;
	int l=2;
	while(fgets(s,81,fp)!=NULL&&i++<l)
	{
		printf(s);
	}
}
