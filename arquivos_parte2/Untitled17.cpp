#include<stdio.h>
#include<stdlib.h>
FILE *fin,*fout;
main()
{
	fin=fopen("filmes.bin","rb");
	fout=fopen("copia.jpg","rb");
	fseek(fin,0,SEEK_END);
	fseek(fout,0,SEEK_END);
	if(ftell(fin)<ftell(fout))
	{
		printf("Img");
	}
}

