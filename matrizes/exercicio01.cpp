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
void matrizparamatriz(int v[][12], int copia[][12])
{
	int k = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			copia[i][j] = v[i][j];
			k++;
		}
	}
}
void bubble(int mat[5][12])
{
	int aux;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				for (int x = 0; x < 12; x++)
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
int tirar(int m[][12], int n)
{
	int cont = 0;
	int i, j;
	int tmp;
	int x, y;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (m[i][j] != m[i][j + 1])
			{
				printf("%d  ", m[i][j]);
				if (j == 4)
				{
					printf("\n");
				}
				cont++;
				if (cont == n)
				{
					tmp = m[i][j];
					x = i;
					y = j;
				}
			}
		}
	}
	printf("N MAIOR %d NO MES %d  ANO %d\n", tmp, y + 1, x + 1);
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
	for (int i = 0; i < 5; i++)
	{
		c[i] = medmes(v, i);
	}
}
int main()
{
	int v[5][12];
	int c[5][12];
	int m[12];
	preencher(v);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			printf("%d ", v[i][j]);
			if (j == 11)
			{
				printf("\n");
			}
		}
	}
	per(v, m);
	for (int i = 0; i < 12; i++)
	{
		printf("MES %d *%d*\n", i + 1, c[i]);
	}
	matrizparamatriz(v, c);
	bubble(c);
	tirar(c, 1);
}
