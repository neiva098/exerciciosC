#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
	printf("Digite um intervalo de modo que o menor numero dara entrada primeiro\n");
	int a, b;
	int c = 0;
	scanf("%d%d", &a, &b);

	if (a < b)
	{
		if (a % 2 == 0)
		{
			a++;
			while (a <= b)
			{
				c = c + a;
				a = a + 2;
			}
			printf("%d", c);
		}
		else
		{
			while (a <= b)
			{
				c = c + a;
				a = a + 2;
			}
			printf("%d", c);
		}
	}
	else
		printf("Valores invalidos\n");
}
