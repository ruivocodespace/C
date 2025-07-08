//vetor2
#include <stdio.h>

int main() 
{
    int vet[5], vet2[5];
    int contador, contadorb;
    
    contadorb = 4;
    for (contador = 0; contador < 5; contador++) {
        printf("Insira um numero inteiro: ");
        scanf("%d", &vet[contador]);
    }
    for (contador = 0; contador < 5; contador++){
      vet2[contador] = vet[contador];
    }
    
    for (contador = 0; contador < 5; contador++) {
        printf("%d ", vet[contador], " ");
    }
    
    for (contadorb = 4; contadorb >= 0; contadorb--) {
        printf("%d ", vet2[contadorb], " ");
    }
    
    return 0;
}
