#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], perfil[20], confirmacao[50];
    char mensagem[60] = "Bem-vindo(a), ";

    printf("===== CADASTRO DE USUARIOS =====\n\n");
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu perfil: ");
    scanf("%19s", perfil);

    strcpy(confirmacao, nome);
    strcat(mensagem, nome);

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", confirmacao);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));

    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else {
        printf("Perfil: Comum\n");
    }

    printf("\n%s!\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
