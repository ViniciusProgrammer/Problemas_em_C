#include <stdio.h>

int soma(int n1, int n2){
    int s;
    s = n1 + n2;

    return s;
}

int sub(int n, int m){
    int x;
    x = n - m;

    return x;
}

int main()
{
    int num1, num2;

    printf("Informe dois valores: ");
    scanf("%d%d", &num1, &num2);

    printf("O valor da soma %d + %d = %d\n", num1, num2, soma(num1, num2));
    printf("O valor da subtração de %d - %d = %d\n", num1, num2, sub(num1, num2));

    return 0;
}
