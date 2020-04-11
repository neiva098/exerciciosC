#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
	int k;
	char y;
	float x, b;
	b = 0;
	int cont = 0;
	printf("Se desejar a soma tecle s se desejar a media tecle m\n");
	scanf("%c", &y);
	printf("Digite o numero de entradas\n");
	scanf("%d", &k);
	if (y == 's' || y == 'm')
	{
		while (cont < k)
		{
			printf("Digite o elemento : ");
			scanf("%f", &x);
			b = b + x;
			cont++;
		}
		if (y == 's')
		{
			printf("Soma dos valores e %f", b);
		}
		else
			printf("Media = %f", b / k);
	}

	else
		printf("Operacao invalida\n");
}
