//caso_10

#include <stdio.h>

int main() {
float media;
int opcao;

    printf("Digite sua média final para saber seu conceito:\n");
    scanf("%f", &media);

      if (media < 6) {
          opcao = 1;
      } else if (media >= 6 && media < 7) {
          opcao = 2;
      } else if (media >= 7 && media < 8) {
          opcao = 3;
      } else if (media >= 8 && media < 9) {
          opcao = 4;
      } else if (media > 9 && media <= 10) {
          opcao = 5;
      } else {
          printf("Valor digitado inválido.\n");
      }

        switch (opcao) {
            case 1:
                printf("F\n");
                break;
            case 2:
                printf("E\n");
                break;
            case 3:
                printf("D\n");
                break;
            case 4:
                printf("C\n");
                break;
            case 5:
                printf("B\n");
                break;
            case 6:
                printf("A\n");
                break;
            default:
                printf("Programa finalizado.\n");
                break;
        }

    return 0;
}
