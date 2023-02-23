#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Informe três valores");
    scanf("%d%d%d", &a, &b, &c);

    if(a < b + c && b < a + c && c < a + b){
        printf("Podemos formar um triângulo com as medidas informadas\n");

        if(a == b && b == c){
            printf("Podemos formar um triângulo Equilátero\n");
        }
        else{ 
            if(a != b && b != c && a != c){
                printf("Podemos formar um triãngulo Escaleno\n");
            }      
            else{ 
                if(a == b || b == c || a == c){
                    printf("Podemos formar um triângulo Isósceles\n");
                }
            }    
        }
    }
    
    else{
        printf("Com essas medidas não podemos formar um triângulo\n");
    }

    return 0;
}
