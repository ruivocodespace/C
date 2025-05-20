//funcao_5
#include <stdio.h>
float calcularPesoIdeal(float alt, char sexo)
{
   float pesoIdeal;
   
   if (sexo == 'M'){
       pesoIdeal = 72.7 * alt - 58;
   } else
        if(sexo == 'F'){
            pesoIdeal = 62.1 * alt - 44.7;
        }
        return pesoIdeal;
}
int main() {
    float altura, pesoCalculado;
    char sexoPessoa;
    
    
    printf("Insira sua altura:\n");
    scanf("%f", &altura);
    
    printf("Insira seu sexo, (M)Masculino e (F)Feminino:\n");
    scanf(" %c", &sexoPessoa);
    
    pesoCalculado = calcularPesoIdeal(altura, sexoPessoa);
    
    printf("Seu peso ideal é:%.2f ", pesoCalculado);

    return 0;
}
