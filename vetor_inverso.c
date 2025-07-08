//vetor_inverso
#include <stdio.h>

int main() 
{
    int numeros[5], inverso[5];
    int i, j;
        
    //Solicita a entrada dos 5 números 
    for(i = 0; i < 5; i++){ 
      printf("Digite o %dº número: ", i + 1); 
      scanf("%d", &numeros[i]);
   }
   //Inverte o vetor 
   j = 4;
   for(i = 0; i < 5; i++){
    inverso[i] = numeros[j];
      j = j - 1;
   }
   //Exibe o vetor invertido
   printf("Vetor invertido: ");
    for(i = 0; i < 5; i++){
      printf("%d ", inverso[i], " ");
    }
    return 0;
}
