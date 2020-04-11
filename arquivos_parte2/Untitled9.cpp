#include <stdio.h>
#include <stdlib.h>
#define tam 2
typedef struct 
{
	char nome[100];
	char id[2];
	char m[5];
	char ende[100];
	char tel[15];
	char lvl[2];
}p;
FILE *arqv,*arqv1;
main()
{
	arqv=fopen("arqv.txt","w");
	arqv1=fopen("arqv1.bin","wb");
	p v[tam];
	p v1[tam];
	for(int i=0;i<tam;i++)
	{
		gets(v[i].nome);
		fprintf(arqv,"%s",v[i].nome);
		gets(v[i].id);
		fprintf(arqv,"%s",v[i].id);
		gets(v[i].m);
		fprintf(arqv,"%s",v[i].m);
		gets(v[i].ende);
		fprintf(arqv,"%s",v[i].ende);
		gets(v[i].tel);
		fprintf(arqv,"%s",v[i].tel);
		gets(v[i].lvl);
		fprintf(arqv,"%s",v[i].lvl);
	}
	fwrite (&v[0], sizeof(p), tam, arqv1);
	fclose(arqv1);	
	arqv1=fopen("arqv1.bin","rb");
	fread (&v1[0], sizeof(p), tam, arqv1);
	for(int i=0;i<tam;i++)
	{
		printf("\n%s\n",v1[i].nome);
		printf("%s\n",v1[i].id);
		printf("%s\n",v1[i].m);
		printf("%s\n",v1[i].ende);
		printf("%s\n",v1[i].tel);
		printf("%s\n",v1[i].lvl);
	}
}
