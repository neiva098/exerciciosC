#include<stdio.h>
#include<stdlib.h>
	main(int argc,char **argv)
	{
		FILE *fp;
		fp=fopen(argv[1],"r");
		int ch;
		if(argc!=2)
		{
			printf("Sintaxe incorreta\n%s\nARQUIVO.FORMATO \n",argv[0]);
			exit(1);
		}
		if(fp==NULL)
		{
			printf("Se fudeu\n");
			exit(2);
		}
		else
		{
			while((ch=fgetc(fp))!=EOF)
			{
				printf("%c",ch);
			}
		}
		int fcloseall();
	}
