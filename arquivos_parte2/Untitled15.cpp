#include <stdio.h>
#include <stdlib.h>
#include<string.h>
FILE *fout;
main()
{	char s[29];
	gets(s);
	fout=fopen(s,"rb");
	fseek(fout,0,SEEK_END);
	printf("%d",ftell(fout)+1);	
}
