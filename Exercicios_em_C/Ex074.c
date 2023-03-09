#include <stdio.h>

int main(){
    char vet2[10], vet[10];
    int i;
    char letra;

    for(i = 0; i < 10; i++){
        printf("Informe uma letra: ");
        scanf(" %c", &letra);

        vet2[i] = vet[i] = letra;

        if(letra == 'x'){
            break;
        }
    }

    for(i = 0; i < 10; i++){
        if(vet2[i] != 'x'){
            printf("%c ", vet2[i]);
        }
    }
    
    printf("\n");

    return 0;
}
