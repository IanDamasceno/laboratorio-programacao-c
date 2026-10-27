#include <stdio.h>

int calcularFatorial(int n) {
    int i, fatorial = 1;

    for (i = 2; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main(void) {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    do {
        printf("Digite um numero (0 a 12): ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 12) {
            printf("Numero invalido! Tente novamente.\n");
        }
    } while (numero < 0 || numero > 12);

    printf("\nFatorial de %d = %d\n", numero, calcularFatorial(numero));

    return 0;
}
