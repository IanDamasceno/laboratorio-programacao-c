#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, contadorPares = 0;

    printf("--- Digite os elementos da matriz 3x3 ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 == 0) {
                contadorPares++;
            }
        }
    }

    printf("\nMatriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nQuantidade de numeros pares: %d\n", contadorPares);
    return 0;
}
