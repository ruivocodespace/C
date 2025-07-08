// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int numero[5];
    int contador;
    
    for (contador = 0; contador < 5; contador++) {
        printf("Digite o numero %d: ", contador + 1);
        scanf("%d", &numero[contador]);
    }
    for (contador = 0; contador < 5; contador++) {
        printf("%d ", numero[contador], " ");
    }
    printf(" <---> ");
    
    for (contador = 4; contador >= 0; contador--) {
        printf("%d ", numero[contador], " ");
    }
    
    return 0;
}
