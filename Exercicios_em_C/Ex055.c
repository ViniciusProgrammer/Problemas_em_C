#include <stdio.h>

int main(){
    
    int anos = 0;
    float chico = 1.50, ze = 1.10;

    while(chico >= ze){
        chico += 0.02;
        ze += 0.05;
        anos++;
    }

    printf("%d anos\n", anos);

    return 0;
}

