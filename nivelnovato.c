#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int agua = 10;

    // Agua
    for (int i = 0; i < agua; i++) {
        for (int j = 0; j < agua; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //navio vertical
    int navio = 0;
    int linha, coluna;

    while (navio < 2) {
        linha = navio * 3;
        coluna = 1 + navio;

        if (linha + 2 < agua) {
            tabuleiro[linha][coluna] = 3;
            tabuleiro[linha + 1][coluna] = 3;
            tabuleiro[linha + 2][coluna] = 3;
            navio++;
        }
    }

    //navio horizontal
    int navios = 0;

    while (navios < 1) {
        linha = 7;
        coluna = 5;

        if (coluna + 2 < agua) {
            tabuleiro[linha][coluna] = 3;
            tabuleiro[linha][coluna + 1] = 3;
            tabuleiro[linha][coluna + 2] = 3;
            navios++;
        }
    }

    //tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < agua; i++) {
        for (int j = 0; j < agua; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
