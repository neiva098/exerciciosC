#include <stdio.h>
int main()
{
	int x, y;
	int d = 2;
	int p = 1;

	printf("Digite os numeros de interesse\n");
	scanf("%d%d", &x, &y);

	while (x != 1 || y != 1)
	{
		if (x % d == 0 || y % d == 0)
		{
			p = p * d;
			if (x % d == 0) x = x / d;
			else y = y / d;
		} else {
			printf("%d\n", d);
			d++;
		}
	}
	printf("MMC = %d", p);
}
