//matriz_transposta
#include <stdio.h>

int main() 
{
    int matriz[4][4];
    int transposta[4][4];
    int i, j;
    
    //Entrada de dados para a matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
        printf("Elemento [%d , %d]: ", i + 1, j + 1);
          scanf("%d", &matriz[i][j]);
        }
      }
    // Calcula a transposta da matriz
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
          transposta[j][i] = matriz[i][j];
        }
      }
    // Exibe a Matriz Transposta
    printf("A matriz transposta é:\n");
        for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
            printf("%d ", transposta[i][j]);
            }
        printf("\n");
        }
        //Muda de linha após cada linha da matriz
        printf("\n");

    return 0;
}
