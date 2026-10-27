#include <stdio.h>

int main() {
    int matriz[2][2] = { {10, 20},
                         {30, 40} };
    int i, j;

    printf("Matriz 2x2:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%5d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
