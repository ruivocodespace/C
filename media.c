// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
float soma = 0, numero, media;
int quantidade = 0;
    // Write C code here
    printf("Insira números reais maiores que zero. Digite 0 para encerrar.\n");
    
    do {
         printf("Digite um número: ");
         scanf("%f", &numero);
        
            if (numero > 0) {
            soma = soma + numero;
            quantidade = quantidade + 1;
            }
        } while (numero != 0);
        
        if (quantidade > 0) {
            media = soma / quantidade;
             printf("Quantidade de números: %i\n", quantidade);
             printf("Média dos números: %.2f\n", media);
     } else {
         printf("Nenhum número válido foi inserido.");
    }
    
 return 0;
}
