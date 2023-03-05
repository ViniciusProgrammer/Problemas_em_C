#include <stdio.h>

float resultado(char l, float nota1, float nota2, float nota3){
    float media;

    if(l == 'a'){
        media = (nota1 + nota2 + nota3)/3;
    }
    else if(l == 'p'){
        media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2))/10;
    }

    return media;
}

int main(){
    char letra;
    float n1, n2, n3;

    printf("Informe A para Média Simples e P para Ponderada: ");
    scanf("%c", &letra);

    printf("Informe as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("A média escolhia foi %.2f\n", resultado(letra, n1, n2, n3));

    return 0;
}