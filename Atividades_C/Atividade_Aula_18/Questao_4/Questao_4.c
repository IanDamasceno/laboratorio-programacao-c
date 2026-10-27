#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int inicial, final;

    printf("===== CONTROLE DE ESTOQUE =====\n\n");
    printf("Quantidade inicial: ");
    scanf("%d", &inicial);

    final = dobro(inicial);

    printf("\nQuantidade apos duplicacao: %d\n", final);

    return 0;
}
