#include<stdio.h>
FILE *arqv;
main()
{	arqv = fopen("arqv.txt","r");
	if(arqv==NULL)
	{
		return 0;
	}
fseek(arqv,0l,SEEK_END);
printf("%ld ",ftell(arqv));
rewind(arqv);
while(fgetc(arqv)!=EOF);
printf("%d",ftell(arqv));
}
