#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void matrizparavetor(int v[][5], int copia[])
{
	int k = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			copia[k] = v[i][j];
			k++;
		}
	}
}
void preencher(int v[][5])
{
	srand(time(0));
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			v[i][j] = 1 + rand() % 101;
		}
	}
}
int pares(int v[][5])
{
	int cont = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (v[i][j] % 2 == 0)
			{
				cont++;
			}
		}
	}
	return cont;
}
int somaimp(int v[][5])
{
	int s = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((v[i][j]) % 2 != 0)
			{
				s = s + v[i][j];
			}
		}
	}
	return s;
}
float media(int v[][5])
{
	float s = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			s = s + v[i][j];
		}
	}
	return s / 20;
}
int maiormed(int v[][5])
{
	int cont = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (v[i][j] > media(v))
			{
				cont++;
			}
		}
	}
	return cont;
}
int ordem(int v[][5])
{
	int cop[20];
	int aux[20];
	int cont = 0;
	matrizparavetor(v, cop);
	int cntrl;
	for (int i = 0; i < 20; i++)
	{
		cntrl = 0;
		for (int w = 0; w < i; w++)
		{
			if (cop[w] == cop[i])
			{
				cntrl++;
			}
		}
		if (cntrl < 1)
		{
			aux[cont] = cop[i];
			cont++;
		}
	}
	int tmp;
	for (int i = 0; i < cont; i++)
	{
		for (int j = i + 1; j < cont; j++)
		{
			if (aux[i] > aux[j])
			{
				tmp = aux[i];
				aux[i] = aux[j];
				aux[j] = tmp;
			}
		}
	}
	printf("SEM REPT\n");
	for (int j = 0; j < cont; j++)
		printf("%d  %d\n", aux[j], j);
	int q = 0;
	int i;
	int j;
	for (i = 0; q < cont; i++)
	{
		for (j = 0; j < 5 && q < cont; j++, q++)
		{
			v[i][j] = aux[q];
		}
	}
	for (int a = 0; a < i; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			if (a == i - 1)
			{
				while (b < j)
				{
					printf("%02d  ", v[a][b]);
					b++;
				}
				break;
			}
			else
			{
				printf("%d  ", v[a][b]);

				if (b == 4)
				{
					printf("\n");
				}
			}
		}
	}
	return q;
}

main()
{
	int v[4][5];
	int copia[20];
	preencher(v);
	printf("PARES %d\n", pares(v));
	printf("SOMA IMP %d\n", somaimp(v));
	printf("MEDIA %.2f\n", media(v));
	printf("MAIOR Q MED %d\n", maiormed(v));
	matrizparavetor(v, copia);
	ordem(v);
}
