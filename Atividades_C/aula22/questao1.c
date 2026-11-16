#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco de memoria: %p\n", (void *)&numero);

    return 0;
}
