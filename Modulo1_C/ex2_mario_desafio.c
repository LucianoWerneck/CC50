#include <stdio.h>

int main() {
    int piramide, row, space,column;

    do {
        printf("De que tamanho vc quer sua piramide (entre 1 e 8): ");
        scanf("%d", &piramide);

        if (piramide < 1 || piramide > 8) {
            printf("Tamanho invalido! Tente novamente.Entre 1 e 8.\n");
        }
    } while (piramide < 1 || piramide > 8);

    for (row = 0; row <= piramide; row++) {  // Loop para controlar o número de linhas
        for (space = 0; space <= piramide - row - 1; space++) {  // Loop para imprimir os espaços em branco
            printf(" ");
        }
        for (column = 0; column <= row; column++) {  // Loop para imprimir os "#"
            printf("#");
        }
        printf("  ");
        for (column = 0; column <= row; column++){
            printf("#");
        }
        printf("\n");
    }    
    return 0;
}