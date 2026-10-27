#include <stdio.h>

int main(void) {
    int notasProva[3][2] = {
        {7, 8},
        {9, 5},
        {8, 6}
    };

    for (int i = 0; i < 3; i++) {
        float mediaNotas = 0;
        for (int j = 0; j < 2; j++) {
            mediaNotas += notasProva[i][j];
        }
        printf("Media notas aluno %d: %.1f\n", i + 1, mediaNotas / 2);
    }

    return 0;
}
