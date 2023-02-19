#include <stdio.h>

int main(){
    
    float baseMaior, baseMenor, altura, area;

    printf("Informe a Base Maior, Base Menor e a Altura: ");
    scanf("%f%f%f", &baseMaior, &baseMenor, &altura);

    area = (baseMaior + baseMenor) * altura;

    printf("A área do trapézio é %.2f\n", area);

    return 0;
}
