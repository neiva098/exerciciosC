#include <stdio.h>
int main()
{
	printf("Digite um numero\n");
	int x;
	scanf("%d", &x);
	if (x % 400 == 0 || x % 4 == 0 && x % 100 != 0)
		printf("Ano bissexto\n");
}
