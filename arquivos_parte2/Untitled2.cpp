#include<stdio.h>
FILE *arqv;
main()
{	arqv = fopen("arqv.txt","r");
	if(arqv==NULL)
	{
		return 0;
	}
	char h;
	char ch;
	while((fscanf(arqv,"%c",&h))!=EOF)
	{
		fprintf(stdout,"%c",h);
	}
	rewind(arqv);
	printf("\nDIFERENTE\n");
	ch=fgetc(arqv);//Faz a leitura de 1 byte do arquivo
	while (ch!=EOF){ //Verifica se e' final de arquivo (End Of File)
		  putchar(ch); //Imprime caracter
		  ch=fgetc(arqv);//Realiza a leitura do proximo caracter
	}		
}
