//vetor_5
#include <stdio.h>

int main() {
    int num1[3][3], num2[3][3], soma[3][3];
    int contadorl, contadorc;

    //Primeira matriz
    for (contadorl = 0; contadorl < 3; contadorl++) {
        for (contadorc = 0; contadorc < 3; contadorc++) {
            printf("Insira o valor da linha %d coluna %d: ", contadorl + 1, contadorc + 1);
            scanf("%d", &num1[contadorl][contadorc]);
        }
    }

    //Segunda matriz
    for (contadorl = 0; contadorl < 3; contadorl++) {
        for (contadorc = 0; contadorc < 3; contadorc++) {
            printf("Insira o valor da linha %d coluna %d: ", contadorl + 1, contadorc + 1);
            scanf("%d", &num2[contadorl][contadorc]);
        }
    }

    //Imprimir a primeira matriz
    printf("\nMatriz 1:\n");
    for (contadorl = 0; contadorl < 3; contadorl++) {
        for (contadorc = 0; contadorc < 3; contadorc++) {
            printf("%d ", num1[contadorl][contadorc]);
        }
        printf("\n");
    }

    //Imprimir a segunda matriz
    printf("\nMatriz 2:\n");
    for (contadorl = 0; contadorl < 3; contadorl++) {
        for (contadorc = 0; contadorc < 3; contadorc++) {
            printf("%d ", num2[contadorl][contadorc]);
        }
        printf("\n");
    }

    //Calcular a matriz soma
    for (contadorl = 0; contadorl < 3; contadorl++) {
        for (contadorc = 0; contadorc < 3; contadorc++) {
            soma[contadorl][contadorc] = num1[contadorl][contadorc] + num2[contadorl][contadorc];
        }
    }

    //Imprimir a matriz soma
    printf("\nMatriz Soma:\n");
    for (contadorl = 0; contadorl < 3; contadorl++) {
        for (contadorc = 0; contadorc < 3; contadorc++) {
            printf("%d ", soma[contadorl][contadorc]);
        }
        printf("\n");
    }

    return 0;
}
