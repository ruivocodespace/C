//funcao_4
#include <stdio.h>

void categoria_nadador(int i){

    switch(i){
    case 5:
    case 6:
    case 7:
    printf("Infantil A");
    break;
    
    case 8:
    case 9:
    case 10:
    printf("Infantil B");
    break;
    
    case 11:
    case 12:
    case 13:
    printf("Juvenil A");
    break;
    
    case 14:
    case 15:
    case 17:
    printf("Juvenil B");
    break;

    default:
        if (i < 5) {
            printf("Idade inválida\n");
        } else {
            printf("Adulto\n");
        }
        break;
    }
}

int main() {
    int idade;

    printf("Insira sua idade:\n");
    scanf("%d", &idade);

    categoria_nadador(idade);

    return 0;
}
