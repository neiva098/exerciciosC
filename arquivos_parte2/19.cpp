#include <stdio.h>
#include <stdlib.h>
main()

{
    double Notas[100];
    FILE *arq;
    int result;
    int i;

    arq = fopen("ArqTeste.dat", "wb"); // Cria um arquivo bin�rio para grava��o 

    if (arq == NULL) // Se n�o conseguiu criar
    {
        printf("Problemas na CRIACAO do arquivo\n");
   	
    }
    // Grava 30 n�meros do vetor a partir da posi��o 50 
    result = fwrite (&Notas[50], sizeof(double), 30, arq);

    printf("Nro de elementos gravados: %d", result); 
    fclose(arq);

}
