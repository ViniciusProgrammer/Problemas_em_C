#include <stdio.h>

int main()
{
    int mat[2][2], i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Informe um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            mat[i][j] = mat[i][j] * 2;
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
