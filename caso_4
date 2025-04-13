//Caso_4
#include <stdio.h>

int main() {
    
float numero, total;
int opcao;

    // Write C code here
    printf("Digite o total dos produtos:\n");
    scanf("%f", &numero);
        
        printf("Escolha o cliente:\n");
        printf("1- Funcionário\n");
        printf("2- Vip\n");
        printf("3- Comum\n");
        scanf("%i", &opcao);
        
            switch (opcao) {
                case 1:
                total = (numero - (numero * 10 / 100));
                printf("Total: R$%.2f", total);
                break;
                
                case 2:
                total = (numero - (numero * 5 / 100));
                printf("Total: R$%.2f", total);
                break;
                
                case 3:
                printf("Total: R$%.2f", numero);
                break;
                
                default:
                printf("Escolha inválida.");
                break;
            }
    return 0;
}
