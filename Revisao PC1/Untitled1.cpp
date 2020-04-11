#include<stdio.h>
int main()
{
	printf("Digite a quantidade de  numeros\n");
	int qt;
	scanf("%d",&qt);
	printf("Digite os numeros\n");
	int cont = 0;
	int n=0;
	int s=0;
	float m;
	while (cont<qt)
		{
		scanf("%d",&n);
		s=s+n;
		cont++;
		}
	printf("Se desejar media pressione 'm' se desejar soma pressione 's'\n");
	char x;
	getchar();
	m=s/qt;
	scanf("%c",&x);
		if(x=='s'||x=='m');
		{
				if(x=='s')
				{
				printf("Soma igual a %d\n",s);
				}
				if(x=='m')
				{
				printf("Media igual a %f\n",m);
				} 
		}
		if(x!='s'&&x!='m')
		printf("Caractere invalido");
		
	
	
}
