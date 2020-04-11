#include<stdio.h>
void dec2bin(int dec);
void dec2bin(int dec)
{
    if(dec==0)
    {
         return;
    }
    else{
         dec2bin(dec/2);
         printf("%d",dec%2);
    }
}
int main(){
    printf("Digite um numero inteiro: ");
    int i;
    scanf("%d",&i);
    printf("Resultado: ");
    dec2bin(i);
}
