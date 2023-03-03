#include <stdio.h>

int main()
{
    int i, quant = 0;
    float notas[15], soma = 0;

    for(i = 0; i < 15; i++){
        printf("Informe um valor: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
        quant++;
    }

    printf("A média da turma = %.2f\n", soma/quant);
    
    return 0;
}
