#include<stdio.h>
int potencia(int a,int b) {	
	int k = 1;
	while (b!=0) {
		k=k*a;
		b--;
	}	
	return k;
}

main() {
	int s = 0;
	int d = 10986005;
	int y = 0;
	while(d != 0) {
		if(d % 10 != 0) {
			s = (d%10) * potencia(10, y) + s;
			y++;
		}
		d=d/10;
	}
	printf("%d",s);
}
	
