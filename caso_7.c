//caso_7
#include <stdio.h>

int main() {

int plano = 100, idade, opcao;
float total;
    // Write C code here
    printf("Digite sua idade para saber o valor do seu plano:\n");
    scanf("%i", &idade);
    
        if (idade <= 9) {
            total = (plano + 80);
            opcao = 1;
        } else if (idade >= 10 && idade <= 39) {
            total =(plano + 50);
            opcao = 2;
        } else if (idade >= 40 && idade <= 59) {
            total = (plano + 95);
            opcao = 3;
        } else if (idade >= 60 && idade <= 100) {
            total = (plano + 130);
            opcao = 4;
        } else {
            printf("Não foi inserida uma idade válida.\n");
        }
            switch (opcao) {
                case 1:
                case 2:
                case 3:
                case 4:
                printf("Valor total do plano R$%.2f", total);
                
                default:
                printf("Programa finalizado.");
            }
    return 0;
}
