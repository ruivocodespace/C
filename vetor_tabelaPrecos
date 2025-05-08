//vetor_tabelaPrecos
#include <stdio.h>
#include <string.h>

int main() 
{
    float tabelaPrecos[4][3]; 
    char produtos[4][50];
    char fornecedores[3][50];
    int produto, fornecedor;
    int i;

    // Inicializar os vetores de produtos e fornecedores
    strcpy(produtos[0], "Produto A");
    strcpy(produtos[1], "Produto B");
    strcpy(produtos[2], "Produto C");
    strcpy(produtos[3], "Produto D");

    strcpy(fornecedores[0], "Fornecedor 1");
    strcpy(fornecedores[1], "Fornecedor 2");
    strcpy(fornecedores[2], "Fornecedor 3");

    // Preencher a tabela de preços
    tabelaPrecos[0][0] = 10.50;
    tabelaPrecos[0][1] = 11.00;
    tabelaPrecos[0][2] = 10.75;
    tabelaPrecos[1][0] = 20.00;
    tabelaPrecos[1][1] = 19.50;
    tabelaPrecos[1][2] = 20.25;
    tabelaPrecos[2][0] = 30.00;
    tabelaPrecos[2][1] = 31.00;
    tabelaPrecos[2][2] = 29.75;
    tabelaPrecos[3][0] = 40.00;
    tabelaPrecos[3][1] = 40.50;
    tabelaPrecos[3][2] = 41.25;

    // Menu de consulta
    printf("--- Consulta de Preços ---\n");
    printf("Produtos:\n");
    for(i = 0; i < 4; i++){
        printf("%d - %s\n", i, produtos[i]);
    }
    printf("Fornecedores:\n");
    for(i = 0; i < 3; i++){
        printf("%d - %s\n", i, fornecedores[i]);
    }

    printf("Digite o número do Produto desejado:\n");
    scanf("%d", &produto);
    printf("Digite o número do Fornecedor desejado:\n");
    scanf("%d", &fornecedor);

    if(produto >= 0 && produto < 4 && fornecedor >= 0 && fornecedor < 3){
        printf("O preço de %s do %s é de R$%.2f\n", produtos[produto], fornecedores[fornecedor], tabelaPrecos[produto][fornecedor]);    
    } else {
        printf("Opção inválida de produto ou fornecedor.\n");
    }

    return 0;
}
