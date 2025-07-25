#include <stdio.h>
#include <string.h>

//Função para calcular valor final com desconto
float calcular_valor_final(float precoTotal, int quantidadeItens) {
    float desconto = 0;

    if (quantidadeItens > 3) {
        desconto = precoTotal * 0.05f; // 5% de desconto
    }
    
    return precoTotal - desconto;
}

int main() {
    int contador = 1, i;
    int itemComprado;
    int quantidadeItens = 0;
    float precoTotal = 0;
    
    //Produtos
    char produtos[5][60] = {
        "Arroz",
        "Feijão",
        "Trakinas",
        "Café",
        "Erva Mate"
    };

    //Preços dos produtos
    float precos[5] = {9, 8, 5, 25, 12};

    printf("Tabela de itens:\n");
    for (i = 0; i < 5; i++) {
        printf("%d - R$ %.2f - %s\n", i + 1, precos[i], produtos[i]);
    }
    //Inicio do loop
    while (1) {
        printf("Digite o número do item comprado (0 para finalizar): ");
        scanf("%d", &itemComprado);

        if (itemComprado == 0) {
            break;
        }

        if (itemComprado < 1 || itemComprado > 5) {
            printf("Item inválido, tente novamente.\n");
            continue;
        }

        precoTotal += precos[itemComprado - 1];
        quantidadeItens++;
        contador++;
    }
    //Chama a funcao para calcular o desconto
    float precoFinal = calcular_valor_final(precoTotal, quantidadeItens);
    //Imprime os resultados
    printf("Preço total: R$ %.2f\n", precoTotal);
    if (quantidadeItens > 3) {
        printf("Desconto aplicado!\n");
    }
    printf("Preço final a pagar: R$ %.2f\n", precoFinal);

    return 0;
}
