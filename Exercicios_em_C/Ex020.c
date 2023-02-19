#include <stdio.h>

int main()
{
    float n1, n2, n3;

    do{
        printf("Informe as três notas: ");
        scanf("%f%f%f", &n1, &n2, &n3);

    }while(n1 < 0 || n2 < 0 || n3 < 0);

    printf("A média do aluno é %.1f\n", ((n1 * 1) + (n2 * 1) + (n3 * 2))/4);

    return 0;
}
