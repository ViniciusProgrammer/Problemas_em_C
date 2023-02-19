#include <stdio.h>

float mediaArtimetica(float n1, float n2, float n3){
    float media;
    media = (n1 + n2 + n3)/3;

    if(media >= 6.0){
        printf("Aluno aprovado!\n");
    }
    else{
        printf("Aluno reprovado!\n");
    }

    return media;

}

float mediaPonderada(float nt1, float nt2, float nt3){
    float media;
    media = ((nt1 * 1) + (nt2 * 1) + (nt3 * 2))/4;

    if(media >= 6.0){
        printf("Aluno aprovado!\n");
    }
    else{
        printf("Aluno reprovado!\n");
    }

    return media;
}

int main(){

    float nota1, nota2, nota3;
    int op;

    printf("Informe as três notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    printf("1-Media Simples\n2-Media Ponderada\nEscolha: ");
    scanf("%d", &op);

    if(op == 1){
        printf("A média aritimética do aluno(a) %.1f\n", mediaArtimetica(nota1, nota2, nota3));
    }

    else{
        printf("A média ponderada do aluno(a) é %.1f\n", mediaPonderada(nota1, nota2, nota3));
    }
    
    return 0;
}
