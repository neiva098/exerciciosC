#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void preencher(int vetor[])
{
	for(int i=0;i<15;i++)
	{
		vetor[i]=1+rand()%101;
	}
}
int pares(int vetor[])
{
	int cont=0;
	for(int i=0;i<15;i++)
	{
		if(vetor[i]%2==0)
		{
			cont++;
		}
	}
	return cont;
}
int somaimpares(int vetor[])
{
	int s=0;
	for(int i=0;i<15;i++)
	{
		if(vetor[i]%2!=0)
		{
			s=s+vetor[i];
		}
	}
	return s;
}
int maiorqmedia(int vetor[])
{	
	int s;
	for(int i=0;i<15;i++)
	{
		s=s+vetor[i];
	}
	int med=s/15;
	int cont=0;
	for(int i=0;i<15;i++)
	{
		if(vetor[i]>med)
		{
			cont++;
		}
	}
	return cont;
}
int maiorvalor(int vetor[])
{
	int tmp;
	for(int i=0;i<15;i++)
	{
		for (int j=i+1;i<15;j++)
		{
			if(vetor[i]>vetor[j])
			{
				tmp=vetor[i];
			}
		}
	}
	return tmp;
}

main()
{
	int vetor[15];
	srand(time(0));
	preencher(vetor);
	printf("QUANTIDADE PARES %d\nSOMA IMPARES %d\nMAIOR MED %d\nMAIOR VALOR%d\nMAIOR DIF %d\n",pares(vetor),somaimpares(vetor),maiorqmedia(vetor),maiorvalor(vetor));	
}
