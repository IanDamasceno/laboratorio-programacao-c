#include <stdio.h>

int main(void) {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *p = numeros;
    int i;

    printf("Elementos do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, *(p + i));
    }

    return 0;
}
