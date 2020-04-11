#include<stdlib.h>
#include<stdio.h>
typedef struct
{
	char produto[40];
	float valor;
	int stq;	
}p;
void preencher(p *x)
{
	gets((*x).produto);
	fflush(stdin);
	scanf("%f",&(*x).valor);
	fflush(stdin);
	scanf("%d",&(*x).stq);
	fflush(stdin);
}
void exibe(p x)
{
	printf("%s\n",x.produto);
	printf("%f\n",x.valor);
	printf("%d\n",x.stq);
}
void vetor(p v[])
{	int i;
	int cntrl;
	for(i=0;i<10;i++)
	{	
		preencher(&v[i]);
		printf("CONTINUA?\n");
		scanf("%d",&cntrl);
		fflush(stdin);
		system("cls");
		if(cntrl==0)
		{
			break;
		}
	}
	for(int g=0;g<=i;g++)
	{
		exibe(v[g]);
	}
}
int main()
{
	p v[10];
	vetor(v);
}
