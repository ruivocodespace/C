//caso_8
#include <stdio.h>

int main() {

float valor, total;
int codigo, outro;
    // Write C code here
    printf("Digite o valor da compra:\n");
    scanf("%f", &valor);
        
        printf("Forma de pagamento:\n");
        printf("1- À vista\n");
        printf("2- Em duas vezes\n");
        printf("3- Em três vezes\n");
        printf("4- De quatro a seis vezes\n");
        scanf("%i", &codigo);
        
            switch (codigo) {
                case 1:
                total = (valor - (valor * 30 / 100));
                printf("Parcela única\n" "Total: R$%.2f", total);
                break;
                
                case 2: 
                total = (valor - (valor * 20 / 100));
                printf ("2 parcelas de: R$%2.f\n" "Total: R$%2.f", (total / 2), total);
                break;
                
                case 3:
                total = (valor - (valor * 10 / 100));
                printf ("3 parcelas de: R$%2.f\n" "Total: R$%2.f", (total / 3), total);
                break;
                
                case 4:
                total = valor;
                printf("4 parcelas de: R$%2.f\n" "Total: R$%2.f", (total / 4), total);
                break;
                
                case 5:
                total = valor;
                printf("5 parcelas de: R$%2.f\n" "Total: R$%2.f", (total / 5), total);
                break;
                
                case 6:
                total = valor;
                printf("6 parcelas de: R$%2.f\n" "Total: R$%2.f", (total / 6), total);
                break;
                
                default: 
                printf("Quantidade de parcelas inválida.");
                break;
            }
    return 0;
}
