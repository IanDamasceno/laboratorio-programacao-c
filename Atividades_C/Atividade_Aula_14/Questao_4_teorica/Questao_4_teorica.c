#include <stdio.h>

int main() {
    printf("===== QUESTAO 5.1 =====\n\n");

    printf("a) Qual e a diferenca entre vetor e matriz?\n");
    printf("R: O vetor e uma estrutura unidimensional: os elementos ficam em uma\n");
    printf("   unica linha e sao acessados por um so indice, como v[i]. A matriz e\n");
    printf("   bidimensional, organizada em linhas e colunas, e precisa de dois\n");
    printf("   indices, como m[i][j].\n\n");

    printf("b) Quantos elementos possui int dados[3][4]?\n");
    printf("R: 3 x 4 = 12 elementos, distribuidos em 3 linhas e 4 colunas.\n\n");

    printf("c) Por que usamos dois for para percorrer uma matriz bidimensional?\n");
    printf("R: Cada for controla um indice. O for externo passa pelas linhas e o\n");
    printf("   for interno passa pelas colunas de cada linha. Assim, todos os\n");
    printf("   elementos [i][j] sao visitados.\n");

    return 0;
}
