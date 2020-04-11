#include<stdio.h>
#include<stdlib.h>
FILE *fin,*fout;
main()
{
	fin=fopen("508795172.jpg","rb");
	fout=fopen("copia.jpg","wb");
	fseek(fin,0,SEEK_END);
	int d=ftell(fin);
	rewind(fin);
	char v[d];
	fread(&v[0],sizeof(char),d,fin);
	fwrite(&v[0],sizeof(char),d,fout);	
}

