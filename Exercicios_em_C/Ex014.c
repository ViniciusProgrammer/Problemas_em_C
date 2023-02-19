#include <stdio.h>

int main()
{
    int premio, a, b, c;

    printf("Informe o total do premio: ");
    scanf("%d", &premio);

    printf("Informe o quanto cada um investiu: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("O premio a ser pago a Alan é %d\n", (premio * a)/(a+b+c));
    printf("O premio a ser pago por Bruno é %d\n", (premio * b)/(a+b+c));
    printf("O premio a ser pago a Carlos é %d\n", (premio * c)/ (a+ b + c));

    return 0;
}
