#include <stdio.h>

int main(){
    
    float trab, exameF, avalicao, notafinal;

    printf("Informe a nota do trabalho, avalição semestral e exame final nessa ordem: ");;
    scanf("%f%f%f", &trab, &avalicao, &exameF);

    notafinal = ((trab * 2) + (avalicao * 3) + (exameF * 5))/10;

    if(notafinal > 4.9){
        printf("A nota do aluno foi %.1f\n", notafinal);
        printf("Está APROVADO!\n");
    }
    else if(notafinal >= 3.0 && notafinal <= 4.9){
        printf("A nota do aluno foi %.1f\n", notafinal);
        printf("Ele está em RECUPERAÇÃO!\n");
    }
    else{
        printf("A nota do aluno foi %.1f\n", notafinal);
        printf("O aluno está REPROVADO!\n");
    }

    return 0;
}
