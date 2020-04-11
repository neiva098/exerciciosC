#include <stdio.h>
#include <stdlib.h>
#include<string.h>
FILE *fout;
main()
{
	char nome[90];
	gets(nome);
	fout=fopen("nome.bin","wb");
	fwrite(&nome[0],sizeof(char),strlen(nome),fout);
	fclose(fout);
	fout=fopen("nome.bin","rb");
	char v[50];
	fread (&v[0], sizeof(char),strlen(nome), fout);int cont=0;
	for(int i=0;v[i]!='\0';i++)
	{
		if(v[i]=='a')
		{
			cont++;
		}
	}
	printf("%d",cont);
}
