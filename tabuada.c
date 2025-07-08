#include <stdio.h>

int main() 
{
    int num;

    printf("Insira um número entre 1 e 10: ");
    scanf("%i", &num);

    for (int contador = 1; contador <= 10; contador++) {
        
        printf("%i x %i = %i\n", num, contador, num * contador);
    }

    return 0;
}
