#include <stdio.h>

int main(){
    float n1, n2;

    do{
        printf("Informe a primeira nota: ");
        scanf("%f", &n1);

        printf("Informe a segunda nota: ");
        scanf("%f", &n2);

    }while(n1 < 0|| n2 < 0 || n1 > 10 || n2 > 10);

    printf("A média é %.1f\n", (n1 + n2)/2);

    return 0;
}