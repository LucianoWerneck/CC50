#include <stdio.h>

int main() {
    int piramide, i, j;

    do {
        printf("De que tamanho vc quer sua piramide (entre 1 e 8): ");
        scanf("%d", &piramide);

        if (piramide < 1 || piramide > 8) {
            printf("Tamanho inva6lida! Tente novamente.Entre 1 e 8.\n");
        }
    } while (piramide < 1 || piramide > 8);

    for (i = 1; i <= piramide; i++) {  // Loop para controlar o número de linhas
        for (j = 1; j <= piramide - i; j++) {  // Loop para imprimir os espaços em branco
            printf(" ");
        }
        for (j = 1; j <= i; j++) {  // Loop para imprimir os "#"
            printf("#");
        }
        printf("\n");
    }

    return 0;
}