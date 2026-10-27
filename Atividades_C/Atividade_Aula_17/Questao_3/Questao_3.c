#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], curso[10], estudante[50];
    char mensagem[60] = "Ola, ";

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");
    printf("Nome do estudante: ");
    scanf("%49s", nome);
    printf("Codigo do curso: ");
    scanf("%9s", curso);

    strcpy(estudante, nome);
    strcat(mensagem, nome);

    printf("\n----- RESULTADO -----\n");
    printf("Estudante: %s\n", estudante);

    if (strcmp(curso, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else {
        printf("Curso: Sistemas de Informacao\n");
    }

    printf("Caracteres no nome: %zu\n", strlen(nome));
    printf("\n%s!\n", mensagem);

    return 0;
}
