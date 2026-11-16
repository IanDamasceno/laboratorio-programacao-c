#include <stdio.h>

void dobrar(int *valor) {
    *valor = *valor * 2;
}

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("O dobro do numero e: %d\n", numero);

    return 0;
}
