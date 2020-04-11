#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM  6
void preencher(float v[])
{
	for(int i=0;i<TAM;i++)
	{
		v[i]=100+rand()%101;
		printf("%f\n",v[i]);
	}
}
int main()
{
	float s=0;
	float salario[TAM];
	srand(time(0));
	preencher(salario);
	float b;
	for (int i=0;i<TAM; i++)
	{
		for(int j=i+1;j<TAM;j++)
		{
			if (salario[i]<salario[j])
			{
				b=salario[i];
				salario[i]=salario[j];
				salario[j]=b;
			}
		}
	}
	for(int i=0;i<TAM;i++)
	{
		printf("ORDEM  %f\n",salario[i]);
		s=salario[i]+s;
	}
	printf("\nMEDIA = %.2f",s/TAM-1);
}
