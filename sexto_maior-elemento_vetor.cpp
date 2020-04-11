#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void preencher(int  v[]) {
	for(int i=0;i<20;i++) {
		v[i]=1+rand()%101;
	}
}

void maior(int v[]) {
	int vetor[20], aux, posicaoSextoMaior;
	posicaoSextoMaior = 0;

	for(int i = 0; i < 20; i++) {
		vetor[i]=v[i];
	}

	for(int i = 0; i < 20; i++)
	{
		for(int j=i+1;j<20;j++)
		{
			if(vetor[i]>v[j])
			{
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
		}
		if(vetor[i-1] != vetor[i] && posicaoSextoMaior < 7) {
			posicaoSextoMaior++;	
		}
	}

	printf("SEXTO MAIOR %d",vetor[l]);
	
	printf("O vertor é:")
	for(int i=0;i<20;i++) {
		printf("\n%d\n",vetor[i]);
	}
}

main() {
	srand(time(0));
	int v[20];
	preencher(v);
	maior(v);
}
