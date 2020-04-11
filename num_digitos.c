#include <stdio.h>
int digitos(int i){
    if(i!=0)
    return 1+digitos(i/10);//todadigitoadiciona1
}
int main()
{
    printf("Digite um numero inteiro: ");
    int i;
    scanf("%d",&i);
    printf("Resultado: %d",digitos(i));
}
