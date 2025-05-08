//vetor_soma_matrizes
#include <stdio.h>

int main() 
{
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizSoma[3][3];
    int i, j;
        
      //Entrada de dados para a Matriz A
      printf("Digite os elementos da Matriz A:\n");
        for(i = 0; i < 3; i++){
          for(j = 0; j < 3; j++){
            printf("A[ %d, %d ]: ", i + 1, j + 1);
              scanf("%i", &matrizA[i][j]);
          }
        }
      //Entrada de dados para a Matriz A
      printf("Digite os elementos da Matriz B:\n");
        for(i = 0; i < 3; i++){
          for(j = 0; j < 3; j++){
            printf("B[ %d, %d ]: ", i + 1, j + 1);
              scanf("%d", &matrizB[i][j]);
          }
        }
        
     //Calcula soma das matrizes
      for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
      }
      //Exibe a soma
      printf("A matriz soma é:\n");
      for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
          printf("%d ", matrizSoma[i][j], " ");
        }
      printf("\n");  // Muda de linha após cada linha da matriz
      }
        
    return 0;
}
