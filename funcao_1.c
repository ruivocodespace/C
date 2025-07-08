//funcao_1
#include <stdio.h>
#include <math.h>

float volumeTotal(float raio){
    return (4.0 / 3.0) * M_PI * pow(raio, 3);
}
int main() {
    float raio;
    // Write C code here
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    float volume = volumeTotal(raio);
    printf("Volume da esfera: %.2f\n", volume);
    return 0;
}
