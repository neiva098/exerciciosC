#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencher(int v[][5])
{
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			v[i][j] = 1 + rand() % 101;
		}
	}
}
void bubble(int mat[5][5])
{
	int aux;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				for (int x = 0; x < 5; x++)
				{
					if (mat[i][j] > mat[k][x])
					{
						aux = mat[i][j];
						mat[i][j] = mat[k][x];
						mat[k][x] = aux;
					}
				}
			}
		}
	}
}
int nmaior(int v[][5], int n)
{
	int cont;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int l = 0; l < 5; l++)
			{
				for (int k = 0; k < 5; k++)
				{
					if (v[i][j] >= v[l][k])
					{
						cont++;
					}
				}
			}
			if (cont == 25 - n)
			{
				return v[i][j];
			}
			cont = 0;
		}
	}
}
main()
{
	int m[5][5];
	preencher(m);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d  ", m[i][j]);
			if (j == 4)
			{
				printf("\n");
			}
		}
	}
	printf("%d\n", nmaior(m, 8));
	bubble(m);
	printf("NOVA\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d  ", m[i][j]);
			if (j == 4)
			{
				printf("\n");
			}
		}
	}
}
