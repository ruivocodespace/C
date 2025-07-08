//Vetor_4
#include <stdio.h>

int main() 
{   //Variaveis
    int numero[2][5];
    int soma[5];
    int diferenca[5];
    int multiplicacao[5];
    int contador, contadorb;
        //Solicita os elementos dos vetores
        for(contador = 0; contador < 2; contador++){
            for(contadorb = 0; contadorb < 5; contadorb++){
                printf("Insira o %iº numero: ", contadorb + 1);
                scanf("%i", &numero[contador][contadorb]);
            }
        }
        //Calculos
        for(contadorb = 0; contadorb < 5; contadorb++){
           soma[contadorb] = numero[0][contadorb] + numero[1][contadorb];
           diferenca[contadorb] = numero[0][contadorb] - numero[1][contadorb];
           multiplicacao[contadorb] = numero[0][contadorb] * numero[1][contadorb];
        }
        //Impressao da soma
        printf("Soma dos elementos:\n");
        for (contadorb = 0; contadorb < 5; contadorb++) {
        printf("%i ", soma[contadorb]);
        }
        printf("\n");
        //Impressao da diferenca
        printf("Diferenca dos elementos:\n");
        for (contadorb = 0; contadorb < 5; contadorb++) {
        printf("%i ", diferenca[contadorb]);
        }
        printf("\n");
        //Impressao da multiplicacao
        printf("Multiplicacao dos elementos:\n");
        for (contadorb = 0; contadorb < 5; contadorb++) {
        printf("%i ", multiplicacao[contadorb]);
        }
        printf("\n");
    return 0;
}
