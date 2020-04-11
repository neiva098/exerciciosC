#include <stdio.h>
#include <stdlib.h>
#include<string.h>
FILE *fout;
main()
{
	char nome[30];
	gets(nome);
	fout=fopen("nome.txt","w");
	fprintf(fout,"%s",nome);
}
