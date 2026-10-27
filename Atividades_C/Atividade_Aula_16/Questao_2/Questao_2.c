#include <stdio.h>

int main() {
    char nome[100];
    int i;

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);

    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') {
            nome[i] = '\0';
        }
    }

    printf("Nome completo: %s\n", nome);
    return 0;
}
