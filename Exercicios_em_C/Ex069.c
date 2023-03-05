#include <stdio.h>

int aprova(int media, int faltas){
    
    if(media >= 60 && faltas <= 25){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){

    int mediaaluno, numFaltas;

    printf("Informe a média do aluno de 0 a 100: ");
    scanf("%d", &mediaaluno);

    printf("Informe a quantidade de faltas do aluno: ");
    scanf("%d", &numFaltas);

    printf("%d\n", aprova(mediaaluno, numFaltas));

    return 0;

}