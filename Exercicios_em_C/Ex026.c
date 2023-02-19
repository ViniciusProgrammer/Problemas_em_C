#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if(!(num % 3 == 0 && num % 5 == 0)){
        if(num % 3 == 0){
            printf("%d é divisível por 3\n", num);
        }
        else{
            printf("%d é divisível por 5\n", num);
        }
    }
    else{
        printf("Escolha outro valor!\n3");
    }

    return 0;
}
