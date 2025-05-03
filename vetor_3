// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() 
{
    char names[5][20];
    char name_b[20];
    int contador;
    int encontrado = 0;
    
        for(contador = 0; contador < 5; contador++){
            printf("Insira o %iº nome: ", contador + 1);
            scanf("%s", names[contador]);
        }
        
        printf("Digite um nome: ");
        scanf("%s", name_b);
        
        for (contador = 0; contador < 5; contador++) {
        //Faz a comparacao entre o nome digitado e os nomes no vetor
        if (strcmp(names[contador], name_b) == 0) {
            printf("ACHEI\n");
            //Se encontrar o nome transforma a variavel em verdadeiro
            encontrado = 1;
            break;
        }
    }   //se a variavel a variavel continuar falsa, imprime nao achei    
        if(!encontrado) {
            printf("NAO ACHEI");
        }
    return 0;
}
