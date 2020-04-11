#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *fin;
main()
{

	fin=fopen("18.txt","r");char nome[100];int w;int cont=0;int auxmenor=10,auxmaior=0;
	while(fscanf(fin,"%s%d",&nome,&w)!=EOF)
	{		printf("%s %d \n",nome,w);
			if(w>=6)
			{
				cont++;
			}
			if(w<auxmenor)
			{
				auxmenor=w;
			}
			if(w>auxmaior)
			{
				auxmaior=w;
			}
	}
	printf("%d   %d   %d  ",auxmaior,auxmenor,cont);
}
