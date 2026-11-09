#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionario1;
    Funcionario funcionario2;
    float diferenca;

    printf("Nome do funcionário 1: ");
    scanf(" %49[^\n]", funcionario1.nome);
    printf("Salario do funcionário 1: ");
    scanf("%f", &funcionario1.salario);

    printf("\nNome do funcionário 2: ");
    scanf(" %49[^\n]", funcionario2.nome);
    printf("Salario do funcionário 2: ");
    scanf("%f", &funcionario2.salario);

    printf("\n");

    if (funcionario1.salario > funcionario2.salario) {
        diferenca = funcionario1.salario - funcionario2.salario;
        printf("%s tem o maior salário.\n", funcionario1.nome);
        printf("Diferença salarial: R$ %.2f\n", diferenca);
    } 
    else if (funcionario2.salario > funcionario1.salario) {
        diferenca = funcionario2.salario - funcionario1.salario;
        printf("%s tem o maior salário.\n", funcionario2.nome);
        printf("Diferença salarial: R$ %.2f\n", diferenca);
    } 
    else {
        printf("Os salários são iguais.\n");
    }

    return 0;
}
