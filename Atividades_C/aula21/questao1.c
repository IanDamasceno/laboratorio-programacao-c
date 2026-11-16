#include <stdio.h>

int main(void) {
    FILE *arquivo;
    char nome[50];
    int matricula;
    int quantidade, i;

    do {
        printf("Quantos funcionarios deseja cadastrar (1 a 5)? ");
        scanf("%d", &quantidade);
    } while (quantidade < 1 || quantidade > 5);

    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", nome);
        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "Nome: %s | Matricula: %d\n", nome, matricula);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso no arquivo funcionarios.txt!\n");

    return 0;
}
