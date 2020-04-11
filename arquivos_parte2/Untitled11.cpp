#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define tam 2
typedef struct 
{
	char nome[60];
	char ano[5];
	int sts;
}f;
FILE *film;
int menu()
{
	printf("1-Gravar Filme\n2-Buscar Filme\n3-Apagar Filme\n4-Mostrar Filme\n5-Alterar Status\n6-Sair\n");
	int d;
	scanf("%d",&d);
	fflush(stdin);
	return d;
}
int qtsf()
{
	film=fopen("filmes.bin","rb");
	fseek(film,0,SEEK_END);
	int d=(ftell(film))/sizeof(f);
	fclose(film);
	return d;
}
void copia(f v[],int *l)
{
	film=fopen("filmes.bin","rb");
	fread (&v[0], sizeof(f),*l, film);
	fclose(film);
}
void gravar(f v[],int *l)
{	
	film=fopen("filmes.bin","wb");
	gets(v[*l].nome);
	fflush(stdin);
	gets(v[*l].ano);
	fflush(stdin);
	scanf("%d",&v[*l].sts);
	fflush(stdin);
	fwrite (&v[0], sizeof(f),*l+1, film);
	fclose(film);
	*l=*l+1;
}
void buscar(f v[],int *l,int j)
{	char name[100];
	fflush(stdin);
	gets(name);
	fflush(stdin);int i;
	for( i=0;i<*l;i++)
	{	
		if(strcmp(v[i].nome,name)==0)
		{
			printf("%s\n",v[i].nome);
			printf("%s\n",v[i].ano);
			printf("%d\n",v[i].sts);
			if(j==3)
			{
			*l=*l-1;
			for(int k=0;k<*l;k++)
			{	
				if(k>=i)
				{
					v[k]=v[k+1];
				}
			}
			film=fopen("filmes.bin","wb");
			fwrite (&v[0],sizeof(f),*l, film);
			fclose(film);
			}
			break;
		}
	}		
}
void mostra(f v[],int *l)
{
	for(int i=0;i<*l;i++)
	{
		printf("%s\n",v[i].nome);
		printf("%s\n",v[i].ano);
		printf("%d\n",v[i].sts);
	}
}
void alterar(f v[],int *l)
{	
	char name[100];
	gets(name);
	for( int i=0;i<*l;i++)
	{
		if(strcmp(v[i].nome,name)==0)
		{
			printf("%s\n",v[i].nome);
			printf("%s\n",v[i].ano);
			printf("%d ATUAL \n",v[i].sts);
			scanf("%d",&v[i].sts);
			film=fopen("filmes.bin","wb");
			fwrite (&v[0], sizeof(f),*l, film);
			fclose(film);
			break;
		}
	}
}
main()
{	
	int l,b=0;
	f v[1000];  //Vetor de filmes da locadora
	while(b!=6)
	{
		l=qtsf();//tamanho do vetor
		copia(v,&l); //Copia do arquivo para vetor
		b=menu(); //Menu do programa
		switch(b)
	{
		case 1 : gravar(v,&l);break;
		case 2 : buscar(v,&l,0);break;
		case 3 : buscar(v,&l,3);break;//se for 3 busca e apaga
		case 4 : mostra(v,&l);break;
		case 5 : alterar(v,&l);break;
	}
	system("pause");//Mostrar resultados
	system("cls");//Limpar tela
	}
}
