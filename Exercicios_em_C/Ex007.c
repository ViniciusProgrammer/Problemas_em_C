#include <stdio.h>

int main()
{
    int num;

    printf("Informe um valor: ");
    scanf("%d", &num);

    printf("%d\n", ((num * 3 + 1) + (num * 2 - 1)));
    
    return 0;
}
