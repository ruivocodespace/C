#include <stdio.h> //para comandos como scanf, printf
#include <stdlib.h> //para funcoes como srand e time
#include <ctype.h> //manipulação de caracateres
#include <stdbool.h> //expressao boolean true or false
#include <time.h> //time() e srand(time(NULL))

int numero[21]; 
int cont_vetor = 1;
char opcao;
bool opcao_invalida = false;

void push() {
    int num;

    if (cont_vetor > 20) {
        printf("=== A PILHA ESTÁ CHEIA ===\n");
    } else {
        // Inicializa o gerador de número aleatório apenas uma vez
        if (cont_vetor == 1) {
            srand(time(NULL));
        }

        num = rand() % 100;  
        printf("Número gerado: %d\n", num);

        numero[cont_vetor] = num;
        cont_vetor++;
    }
}


void pop() {
    int posicao;

    cont_vetor = cont_vetor - 1;
    posicao = cont_vetor;
    numero[posicao] = 0;
}

void limpar() {
    int num, posicao;

    for (int i = 1; i <= 20; i++) {
        cont_vetor = cont_vetor - 1;
        posicao = cont_vetor;
        numero[posicao] = 0;
    }
    cont_vetor = 0;
    printf("=== A PILHA ESTÁ VAZIA ===\n");
}

void listar() {
    int num, posicao;

    for (int i = 1; i <= 20; i++) {
        if (numero[i] != 0) {
            printf("%d\n", numero[i]);
        }
    }
}

void vazia() {
    if (cont_vetor > 1) {
        printf("=== A PILHA NÃO ESTÁ VAZIA ===\n");
    } else {
        printf("=== A PILHA ESTÁ VAZIA ===\n");
    }
}

int main() {
    while (opcao_invalida != true) {
        printf("=====================================================\n");
        printf("a) EMPILHAR\n");
        printf("b) DESEMPILHAR\n");
        printf("c) LIMPAR\n");
        printf("d) LISTAR\n");
        printf("e) VAZIA\n");
        printf("=====================================================\n");
        printf("Escolha uma das opções: ");

        scanf(" %c", &opcao); // lê opcao
        opcao = toupper(opcao);

        system("clear || cls"); 

        switch (opcao) {
            case 'A':
                push();
                break;
            case 'B':
                pop();
                break;
            case 'C':
                limpar();
                break;
            case 'D':
                listar();
                break;
            case 'E':
                vazia();
                break;
            default:
                opcao_invalida = true;
                break;
        }
    }

    return 0;
}
