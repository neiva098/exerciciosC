#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
void ordenar(int aux[], int tam)
{
	int tmp;
	for (int i = 0; i < tam; i++)
	{
		for (int j = i + 1; j < tam; j++)
		{
			if (aux[i] > aux[j])
			{
				tmp = aux[i];
				aux[i] = aux[j];
				aux[j] = tmp;
			}
		}
	}
}
int tirarrept(int cop[])
{
	int cntrl;
	int cont = 0;
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
			cop[cont] = cop[i];
			cont++;
		}
	}
	return cont;
}
int xmaior(int c[], int n)
{
	return c[n - 1];
}
void trocanum(int v[][5])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d  ", v[i][j]);
			if (j == 4)
			{
				printf("\n");
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int w = 0; w < i; w++)
			{
				for (int k = 0; k < 5; k++)
				{
					if (v[i][j] == v[w][k] && i != w && j != k)
					{
						v[i][j] = 1 + rand() % 101;
					}
				}
			}
		}
	}
	printf("TROCA\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d  ", v[i][j]);
			if (j == 4)
			{
				printf("\n");
			}
		}
	}
}
main()
{
	int v[4][5];
	int c[20];
	preencher(v);
	matrizparavetor(v, c);
	ordenar(c, tirarrept(c));
	for (int i = 0; i < tirarrept(c); i++)
	{
		printf("*%d*\n", c[i]);
	}
	printf("N MAIOR %d\n", xmaior(c, 3));
	trocanum(v);
}
