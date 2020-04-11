#include <stdio.h>
#include <math.h>
int main()
{
	printf("digite os catetos para encontrar a hipotenusa\n");
	printf("cateto a : ");
	float a, b, h;
	scanf("%f", &a);
	printf("\ncateto b : ");
	scanf("%f", &b);
	h = (a * a + b * b);

	printf("\nhipotenusa = %f\n", sqrt(h));
}
