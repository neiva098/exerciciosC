#include <stdio.h>
main()
{
    int x, i = 1, fat = 1;
    printf("Insira um valor inteiro: ");
    scanf("%i", &x);
    for (i = 1; i <= x; i++)
        fat = i * fat;
    printf("%i!= %i", x, fat);
}
