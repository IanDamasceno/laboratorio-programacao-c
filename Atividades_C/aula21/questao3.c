#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

void cadastrar(void) {
    FILE *arquivo;
    Funcionario f;
    int quantidade, i;

    do {
        printf("Quantos funcionarios deseja cadastrar (1 a 5)? ");
        scanf("%d", &quantidade);
    } while (quantidade < 1 || quantidade > 5);

    arquivo = fopen("funcionarios.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (i = 0; i < quantidade; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", f.nome);
        printf("Salario: ");
        scanf("%f", &f.salario);
        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);

        fprintf(arquivo, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso!\n");
}

void listar(void) {
    FILE *arquivo;
    Funcionario f;
    int contador = 0;

    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("\nNenhum funcionario cadastrado ainda.\n");
        return;
    }

    printf("\n--- Funcionarios cadastrados ---\n");
    while (fscanf(arquivo, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3) {
        contador++;
        printf("%d. Nome: %s | Salario: R$ %.2f | Horas extras: %d\n",
               contador, f.nome, f.salario, f.horasExtras);
    }

    if (contador == 0) {
        printf("Nenhum funcionario cadastrado ainda.\n");
    }

    fclose(arquivo);
}

int main(void) {
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar funcionarios\n");
        printf("2 - Listar funcionarios\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                listar();
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
