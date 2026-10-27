#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50], categoria[20], copia[50];
    char descricao[60] = "Produto: ";

    printf("===== CADASTRO DE PRODUTOS =====\n\n");
    printf("Nome do produto: ");
    scanf("%49s", produto);
    printf("Categoria: ");
    scanf("%19s", categoria);

    strcpy(copia, produto);
    strcat(descricao, produto);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copia);
    printf("Caracteres: %zu\n", strlen(produto));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else {
        printf("Categoria: Periferico\n");
    }

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
