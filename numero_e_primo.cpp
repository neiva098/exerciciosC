#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("Digite um numero inteiro positivo\n");

	int x, a, p;
	scanf("%d",&x);
	a=0;
	p=0;
	if(x%2==0&&x!=2) {
		printf("Numero nao e primo");	
	}
	else {
		while (a < x / 2) {
			a++;
			if(x % a == 0 && a != x && x % a == 0 && a != 1) {
				p++;
				break;
			}
		}
		if(p == 1) {
			printf("O numero nao e primo");
		}
		else printf("Numero e primo");
	}
}
