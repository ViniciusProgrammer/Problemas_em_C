#include <stdio.h>

int main()
{
    float altura;
    char sexo;

    printf("Informe a altura e o sexo: ");
    scanf("%f %c", &altura, &sexo);

    if(sexo == 'm'){
        printf("Seu peso ideal é %.1f\nKg", (72.7 * altura) - 58);
    }
    else{
        printf("O seu peso ideal é %.1f\nKg", (62.1 * altura) - 44.7);
    }

    return 0;
}
