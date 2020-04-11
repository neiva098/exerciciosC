#include <stdio.h>
#include <stdlib.h>
#include<string.h>
FILE *fout;
main()
{
	char nome[30];
	fout=fopen("nome.txt","r");
	fscanf(fout,"%s",nome);
	int cont=0;
	for(int i=0;nome[i]!='\0';i++)
	{
		if(nome[i]=='a')
		{
			cont++;
		}
	}
	printf("%d",cont);
}
