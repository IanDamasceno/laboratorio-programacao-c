#include <stdio.h>

int main() {
    char palavra[100];
    int i;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    printf("\nCaracteres da palavra:\n");
    for (i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }

    return 0;
}
