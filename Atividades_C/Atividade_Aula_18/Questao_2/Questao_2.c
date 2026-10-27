#include <stdio.h>

float maiorPreco(float p1, float p2) {
    if (p1 > p2) {
        return p1;
    }
    return p2;
}

int main(void) {
    float preco1, preco2;

    printf("===== COMPARADOR DE PRECOS =====\n\n");
    printf("Preco 1: ");
    scanf("%f", &preco1);
    printf("Preco 2: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("\nOs precos sao iguais: R$ %.2f\n", preco1);
    } else {
        printf("\nMaior preco: R$ %.2f\n", maiorPreco(preco1, preco2));
    }

    return 0;
}
