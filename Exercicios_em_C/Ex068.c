#include <stdio.h>

int main()
{
    int i, j, mat[4][4], maior10 = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Informe um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);

            if(mat[i][j] > 10){
                maior10++;
            }
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nNa matriz foram encontrados %d valores maiores que 10\n", maior10);

    return 0;
}
