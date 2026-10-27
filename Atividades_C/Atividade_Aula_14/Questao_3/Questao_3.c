#include <stdio.h>

int main() {
    int matriz[3][3] = { {10, 20, 30},
                         {60, 70, 80},
                         {11, 12, 13} };
    int i, j, soma = 0;

    printf("Matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }

    printf("\nSoma de todos os elementos: %d\n", soma);

    return 0;
}
