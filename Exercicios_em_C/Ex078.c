#include <stdio.h>

int main()
{
    int n, i, fatorial = 1;
    
    printf("Informe o fatorial que deseja obter: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        fatorial *= i;
        
        printf("O fatorial de %d = %d\n", i, fatorial);
    }
    
    return 0;
}
