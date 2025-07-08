//vetor_maior_menor
#include <stdio.h>

int main() 
{
    char nomes[5][20];
    int idades[5];
    float soma, media, maiorIdade, menorIdade;
    int i, indiceMaior, indiceMenor;
    
        soma = 0;
        //Solicita a entrada dos nomes e idades
        for(i = 0; i < 5; i++){
        printf("Digite o nome da %dª pessoa:\n ", i + 1);
        scanf("%s", &nomes[i]);
        
        printf("Digite a idade da %dª pessoa:\n ", i + 1);
        scanf("%d", &idades[i]);
        soma = soma + idades[i];
      }
        //Inicializa maiorIdade e menorIdade com o primeiro valor do vetor
        maiorIdade = idades[1];
        menorIdade = idades[1];
        indiceMaior = 1;
        indiceMenor = 1;
        //Encontra a maior e a menor idade
        for(i = 0; i < 5; i++){
        if(idades[i] > maiorIdade){
         maiorIdade = idades[i];
         indiceMaior = i;
        }
        if(idades[i] < menorIdade){
            menorIdade = idades[i];
            indiceMenor = i;
        }
        //calcula a media
        media = (soma / 5);
        // Exibe os resultados
        printf("\nA maior idade é: %.2f (%c)\n", maiorIdade, nomes[indiceMaior]);
        printf("A menor idade é: %.2f (%c)\n", menorIdade, nomes[indiceMenor]);
        printf("A média das idades é: %.2f", media);
  }
    return 0;
}


    
