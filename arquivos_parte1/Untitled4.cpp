#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fin ,*fout;
	int ch;
	fin=fopen(argv[1],"rb");
	fout=fopen(argv[2],"wb");
	while((ch=fgetc(fin))!=EOF)
	{
		fputc(ch,fout);
	}
}
