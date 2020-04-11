#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	int n;
	char c[20];
	fp=fopen(argv[1],"r");
	while(fscanf(fp,"%s %d",c,&n)!=EOF)
	{
		if(n>=5)
		{
			printf("%s ",c);
		}
	}
}
