#include <stdio.h>
#include <stdlib.h>
#define tam 2
int l;
typedef struct 
{
	char nome[60];
	char ano[4];
	int sts;
}f;
FILE *film;
int menu()
{
	printf("1-Gravar Filme\n2-Buscar Filme\n3-Apagar Filme\n4-Mostrar Filme\n5-Alterar Status\n6-Sair\n");
	int d;
	scanf("%d",&d);
	return d;
}
void gravar(int *l)
{
	film=fopen("filmes.bin","wb");
	f filme;
	gets(filme.nome);
	gets(filme.ano);
	scanf("%d",&filme.sts);
	fwrite (filme, sizeof(f),1, film);
	fclose(film);
	*l++;
}
void buscar(int *l,int j)
{
	film=fopen("filmes.bin","rb");
	char name[60];
	f b;
	gets(name);
	f v[*l];
	int i;
	fread (&v[0], sizeof(f),tam, film);
	for( i=0;i<*l;i++)
	{
		if(v[i].nome==name||v[i].ano==name)
		{
			printf("%s\n",v[i].nome);
			printf("%s\n",v[i].ano);
			printf("d\n",v[i].sts);
		}break;
	}
	fclose(film);
	if(j==3)
	{
	for(int k=0;k<*l;k++)
	{
		if(k>=i)
		{
			v[k]=v[k+1];
			*l--;
		}
	}
		film=fopen("filmes.bin","wb");
		fwrite (&v[0], sizeof(f),*l, film);
	}	
}
void mostrar(int *l)
{
	film=fopen("filmes.bin","rb");
	f v[*l];
	fread (&v[0], sizeof(f),*l, film);
	for( int i=0;i<*l;i++)
	{
			printf("%s\n",v[i].nome);
			printf("%s\n",v[i].ano);
			printf("d\n",v[i].sts);
	}	
}
void alterar(int *l)
{
	film=fopen("filmes.bin","rb");
	char name[60];
	f b;
	gets(name);
	f v[*l];
	int i;
	fread (&v[0], sizeof(f),tam, film);
	for( i=0;i<*l;i++)
	{
		if(v[i].nome==name||v[i].ano==name)
		{
			printf("%s\n",v[i].nome);
			printf("%s\n",v[i].ano);
			printf("d\n",v[i].sts);
		}break;
	}
	fclose(film);
	scanf("%d",&v[i].sts);
	film=fopen("filmes.bin","wb");
	fwrite (&v[0], sizeof(f),*l, film);
}
main()
{	
	int l=1,b=0;
	while(b!=6)
	{	b=menu();
		switch(b)
	{
		case 1 : gravar(&l);
		case 2 : buscar(&l,0);
		case 3 : buscar(&l,3);
		case 4 : mostrar(&l);
		case 5 : alterar(&l);
	}
	}
}
