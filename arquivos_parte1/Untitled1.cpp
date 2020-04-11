#include<stdio.h>
#include<stdlib.h>
	main()
	{
		FILE *fp;
		char s[100];
		gets(s);
		fp=fopen(s,"r");
		int ch;
		if(fp==NULL)
		{
			printf("Se fudeu\n");
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

