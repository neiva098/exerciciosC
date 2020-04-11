#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void preencher(int v[])
{
	for(int i=0;i<15;i++)
	{
		v[i]=1+rand()%101;
		printf("%d\n",v[i]);
	}
}
void preencher2(int v[])
{
	for(int i=0;i<5;i++)
	{
		v[i]=1+rand()%101;
		printf("%d\n",v[i]);
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
	float s;
	for(int i=0;i<15;i++)
	{
		s=s+vetor[i];
	}
	float med=s/15;
	int cont=0;
	printf("MED %.2f\n",med);
	for(int i=0;i<15;i++)
	{
		if(vetor[i]>=med)
		{
			cont++;
		}
	}
	return cont;
}
int maiorvalor2(int vetor[])
{
	int tmp=1;
	for(int i=0;i<15;i++)
	{
		if(vetor[i]>tmp)
		{
			tmp=vetor[i];
		}
	}
	return tmp;
}
void ordem (int vetor[])
{
	int tmp;
	for(int i=0;i<15;i++)
	{
		for (int j=i+1;j<15;j++)
		{
			if(vetor[i]>=vetor[j])
			{
				tmp=vetor[j];
				vetor[j]=vetor[i];
				vetor[i]=tmp;
			}
		}
		printf("%d\n",vetor[i]);
	}
}
int diferenca(int vetor[])
{
	int d;
	int tmp=0;
	for(int i=0;i<14;i++)
	{
		if(vetor[i+1]>vetor[i])
		{
			d=-1*(vetor[i]-vetor[i+1]);
		}else
		{
			d=vetor[i]-vetor[i+1];
		}
		if(d>tmp)
		{
			tmp=d;
		}
	}
	return tmp;
}
void maior3(int vetor[])
{
	printf("O TERCEIRO MAIOR VETOR E %d\n",vetor[7]);;
}
void tirarrepetidos(int vetor[])
{
	int cntrl=0;

	for(int i=0;i<15;i++)
	{
		printf("PROCEDIMENTO %d\n",vetor[i]);
	}
	printf("SEM REPETIR\n");
	for(int i=0;i<15;i++)
	{
		cntrl=1;
		for(int j=i+1;j<15;j++)
		{
			if(vetor[i]==vetor[j])
			{
				cntrl=0;
			}
		}
		if(cntrl!=1)
		{
			vetor[i]=1+rand()%101;
		}
	}
	for(int i=0;i<15;i++)
	{
		printf("SEM REPETICAO %d\n",vetor[i]);
	}
}
int max(int vetor[],int n)
{
	int z=0;
	for(int i=0;i<n;i++)
	{
		if(vetor[i]>z)
		{
			z=vetor[i];
		}
	}	
	return z;
}
void iguais(int vetor[],int vetor2[])
{
	int cntrl=0;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<15;j++)
		{
			if(vetor[j]==vetor2[i])
			{
				cntrl=1;
				break;
			}
		}
	}
	if(cntrl==0)
	{
		printf("NAO A IGUAIS\n");
	}else
	{
		printf("HA IGUAIS\n");
	}
}

main()
{
	int vetor[15];
	int vetor2[5];
	int n;
	printf("DIGITE A POSICAO\n");
	scanf("%d",&n);
	srand(time(0));
	printf("SEM ORDEM\n");
	preencher(vetor);
	printf("VETOR 2\n");
	preencher2(vetor2);
	iguais(vetor,vetor2);
	printf("COM ORDEM\n");
	ordem(vetor);
	maior3(vetor);
	tirarrepetidos(vetor);
	printf("QUANTIDADE PARES %d\nSOMA IMPARES %d\nMAIOR MED %d\nMAIOR VALOR %d\nMAIOR DIF %d\nMAIOR ENTRE N PRIMEIROS %d\n",pares(vetor),somaimpares(vetor),maiorqmedia(vetor),maiorvalor2(vetor),diferenca(vetor),max(vetor,n));	

}
