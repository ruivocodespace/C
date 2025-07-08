//casos_9
#include <stdio.h>

int main() {
float valor, frete;
int pais;

        printf("Digite o valor do produto:\n");
        scanf("%f", &valor);

            printf("Insira o país de origem:\n");
            printf("1 - Estados Unidos\n");
            printf("2 - França\n");
            printf("3 - México\n");
            printf("4 - Argentina\n");
            printf("5 - China\n");
            scanf("%d", &pais);

                switch (pais) {
                case 1:
                    frete = 60.00;
                    break;
                case 2:
                    frete = 75.50;
                    break;
                case 3:
                    frete = 50.00;
                    break;
                case 4:
                    frete = 27.35;
                    break;
                case 5:
                    frete = 80.00;
                    break;
                default:
                    printf("Escolha inválida.\n");
            }

                printf("Frete: R$ %.2f\n", frete);
                printf("Total da compra: R$ %.2f\n", valor + frete);
    return 0;
}
