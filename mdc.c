#include<stdio.h>

int mdc(int a,int b){
    int d=2;
        while(d<=b){
            if(a%d==0&&b%d==0){

                printf("%d   %d    %d    %d  \n",d, d*mdc(a/d,b/d),a,b);
                return d*mdc(a/d,b/d);
            }
            else d++;
        }
}

int main(){

	int a,b;
	printf("Digite dois numeros inteiros: ");
	scanf("%i%i",&a,&b);

	printf("Resultado: %i\n",9%10);

return 0;
}
