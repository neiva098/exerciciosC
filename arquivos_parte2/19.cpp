#include <stdio.h>
#include <stdlib.h>
main()

{
    double Notas[100];
    FILE *arq;
    int result;
    int i;

    arq = fopen("ArqTeste.dat", "wb"); // Cria um arquivo binário para gravação 

    if (arq == NULL) // Se não conseguiu criar
    {
        printf("Problemas na CRIACAO do arquivo\n");
   	
    }
    // Grava 30 números do vetor a partir da posição 50 
    result = fwrite (&Notas[50], sizeof(double), 30, arq);

    printf("Nro de elementos gravados: %d", result); 
    fclose(arq);

}
