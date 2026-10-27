#include <stdio.h>

int main(void) {
    int vendas[2][3] = {
        {5, 8, 6},
        {3, 2, 7}
    };
    int total = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            total += vendas[i][j];
        }
    }

    printf("Total vendido: %d\n", total);
    return 0;
}
