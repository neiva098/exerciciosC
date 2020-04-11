#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define OP_OUT "-o"
main(int argc,char *argv[])
{
	FILE *fin, *fout=stdout;
	int i;
	int ch;
	int d;
	if(strnicmp(argv[argc-1],"arq_out",strlen("arq_out"))==0)
	{
		fout=fopen("arq_out.txt","wb");
			{	fin=fopen(argv[argc-2],"rb");
				while((ch=fgetc(fin))!=EOF)
				switch (argv[argc-3][1])
				{
					case'm':{if(islower(ch)) fputc(ch,fout);}
					case'M':{if(isupper(ch)) fputc(ch,fout);}
					case'd':{if(isdigit(ch)) fputc(ch,fout);}
					case'D':{if(isdigit(ch)) fputc(ch,fout);}					
				}
			}
			argc--;	
				printf("\n");
			printf("Continua?");printf("\n");scanf("%d",&d);if(d==0){exit(1);
			}
			printf("\n");
	}
			for(i=argc-1;i>=1;i--)
	{
			if(argv[i][0]!='-')
			{	fin=fopen(argv[i],"r");
				while((ch=fgetc(fin))!=EOF)
				if(argv[i-1][0]!='-')
				{
					if(isupper(ch)) printf("%c",ch);continue;
				}
				else
				{
					switch (argv[i-1][1])
				{
					case'm':{if(islower(ch)) printf("%c",ch);continue;}
					case'M':{if(isupper(ch)) printf("%c",ch);continue;}
					case'd':{if(isdigit(ch)) printf("%c",ch);continue;}
					case'D':{if(isdigit(ch)) printf("%c",ch);continue;}					
				}
				}
			printf("\n");
			printf("Continua?");printf("\n");scanf("%d",&d);if(d==0){break;
			}
			printf("\n");
	}
	}
}
