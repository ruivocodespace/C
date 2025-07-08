#include <stdio.h>

int main() 
{
    int num;

    printf("Insira um número: ");
    scanf("%i", &num);

    for (int contador = num; contador >= 0; contador = contador - 1) {
        
        printf("%i ", contador);
    }

    return 0;
}
