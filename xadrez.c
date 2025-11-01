#include <stdio.h>

/*
    Programa: Movimentando as Peças do Xadrez
    Autor: Vinicius Paiva
    Curso: Engenharia de Software - 2º Período

    Objetivo:
    Simular os movimentos básicos de três peças do xadrez:
    - Torre (5 casas para a direita) -> usando FOR
    - Bispo (5 casas na diagonal superior direita) -> usando WHILE
    - Rainha (8 casas para a esquerda) -> usando DO-WHILE

    Obs: Este programa não representa o jogo completo de xadrez.
    É apenas uma simulação dos movimentos básicos das peças.
*/

int main() {
    // Quantidade de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== SIMULACAO DE MOVIMENTOS DE XADREZ ===\n\n");

    // -------------------------------
    // Movimento da TORRE (usando FOR)
    // -------------------------------
    printf("Movimento da Torre (para a direita):\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    // -------------------------------
    // Movimento do BISPO (usando WHILE)
    // -------------------------------
    printf("Movimento do Bispo (diagonal superior direita):\n");

    int i = 1; // contador para o while
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n");

    // -------------------------------
    // Movimento da RAINHA (usando DO-WHILE)
    // -------------------------------
    printf("Movimento da Rainha (para a esquerda):\n");

    int j = 1; // contador para o do-while
    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n=== FIM DA SIMULACAO ===\n");

    return 0;
}
