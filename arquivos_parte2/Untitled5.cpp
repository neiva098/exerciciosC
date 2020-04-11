#include<stdio.h>
FILE *arqv;
main()
{	arqv = fopen("arqv.txt","rb");
	if(arqv==NULL)
	{
		return 0;
	}
	char h;int cont=0;
	while((fscanf(arqv,"%c",&h))!=EOF)
	{
		fprintf(stdout,"%c",h);
		if(h=='a')
		cont++;
	}
	printf("%d",cont);
}

