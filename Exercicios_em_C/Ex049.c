#include <stdio.h>

int main()
{
    int num, cont = 0;
    float media = 0;

    do{
        printf("Informe uma nota: ");
        scanf("%d", &num);
        
        if(num >= 10 && num <= 20){
            cont++;
            media += num;
        }
        
    }while(num >= 10 && num <= 20);

    printf("A média das notas fornecidas foi = %.2f\n", media/cont);
    
    return 0;
}
