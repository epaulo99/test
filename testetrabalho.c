#include <stdio.h>

int main() {


    int tabuleiro[10][10]; // criação de matriz



    //aplicação de laço for para colocar valores 0 na matriz
    for (
        int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // laço para colocar o navio 1
    for (int i = 1; i <= 3; i++) {
        tabuleiro[0][i] = 3;
    }

    //colocar o navio 2
    for (int i = 5; i <= 7; i++) {
        tabuleiro[i][3] = 3;
    }

// laço para imprimir a linha A a Z
    printf("    ");
    for(char c = 'A'; c <= 'J'; c++){
        printf("%c ", c);
    }

    printf("\n");

    // laço para imprimir a matriz
    // e os valores dos navios
    for (int i = 0; i < 10; i++) {
        printf("%2d |", i + 1); // Imprime o número da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}