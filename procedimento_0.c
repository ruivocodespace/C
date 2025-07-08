//procedimento
#include <stdio.h>

void encontrarMaiorMenor(){
    int num, maior, menor, i;
    printf("Digite o 1º número: ");
    scanf("%d", &num);
    
    maior = num;
    menor = num;
    
        for(i = 2; i <= 5; i++){
        printf("Digite o %dº número: ",i);
        scanf("%d", &num);
        }
        
            if(num > maior){
                maior = num;
            }
            if(num < menor){
                menor = num;
            }
            
        printf("O maior número é: %d\n", maior);
        printf("O menor número é: %d", menor);
}

int main()  {
    encontrarMaiorMenor();
    return 0;
}
