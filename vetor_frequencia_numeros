//vetor_frequencia_numeros
#include <stdio.h>

int main() 
{
    int numeros[10];
    int frequencia[100]; //Assumindo números de 0 a 100
    int i, num;
    
    //Inicializa o vetor de frequência com zeros
      for(i = 0; i < 100; i++){
        frequencia[i] = 0;
      }
        //Solicita a entrada dos 10 números
        for(i = 0; i < 10; i++){
          printf("Digite o %dº número: ", i + 1);
          scanf("%d", &numeros[i]);
        }
        //Conta a frequência de cada número
      for(i = 0; i < 10; i++){
        num = numeros[i];
        frequencia[num] = frequencia[num] + 1;
      }
      //Exibe a frequência de cada número
      for(i = 0; i < 100; i++){
        if(frequencia[i] > 0){
          printf("\nO número %d aparece %d vez(es)", i, frequencia[i]);
        }
      }

    return 0;
}
