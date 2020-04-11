#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencher(int v[][12])
{
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			v[i][j] = 1 + rand() % 101;
		}
	}
}
float medmes(int v[][12], int n)
{
	int s = 0;
	for (int j = 0; j < 5; j++)
	{
		s = s + v[j][n];
	}
	return s / 5;
}
float per(int v[][12], int c[])
{
	for (int i = 0; i < 12; i++)
	{
		c[i] = medmes(v, i);
	}
}
void ordena(int aux[], int tam)
{
	int tmp;
	for (int i = 0; i < 60; i++)
	{
		for (int j = i + 1; j < 60; j++)
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
void procura(int v[][12], int n)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (v[i][j] == n)
			{
				printf("ano %d Mes %d \n", i + 1, j + 1);
			}
		}
	}
}
int nmaior(int v[][12], int n)
{
	int cont;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			for (int l = 0; l < 5; l++)
			{
				for (int k = 0; k < 12; k++)
				{
					if (v[i][j] > v[l][k])
					{
						cont++;
					}
				}
			}
			if (cont == 60 - n)
			{
				return v[i][j];
			}
			cont = 0;
		}
	}
}
main()
{
	int v[5][12];
	int c[12];
	preencher(v);
	per(v, c);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			printf("%d ", v[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 12; i++)
	{
		printf("MES %d *%d*\n", i + 1, c[i]);
	}
	procura(v, nmaior(v, 1));
}
