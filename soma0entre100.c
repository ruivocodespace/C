#include <stdio.h>

int main()

{
    int num,soma = 0;
    
    
    for (int contador = 0; contador <= 100; contador++) {
        soma += contador;
    }
    printf("%i\n",soma);
    return 0;
}
