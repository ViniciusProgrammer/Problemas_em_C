#include <stdio.h>

int main()
{
    int i, j, mat1[2][2], mat2[2][2], mat3[2][2];

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%2d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
