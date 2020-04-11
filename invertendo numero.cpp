#include <stdio.h>
main()
{
	int a, b;
	printf("Digite um numero inteiro \n");
	scanf("%d", &a);
	if (a >= 0)
	{
		do
		{
			printf("%d", a % 10);
			a = a / 10;
		} while (a != 0);
	}
	else
	{
		a = a * (-1);
		do
		{

			b = a % 10;
			printf("%d", b);
			a /= 10;
		} while (a != 0);
	}
}
