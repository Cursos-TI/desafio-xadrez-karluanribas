#include <stdio.h>

int main() {
    // ===============================
    // 🎯 DESAFIO: NÍVEL NOVATO - XADREZ
    // Peças: Torre, Bispo e Rainha
    // Estruturas de repetição: for, while, do-while
    // ===============================

    // --- Torre (usa FOR) ---
    int i;
    int casasTorre = 5; // número de casas que a torre vai se mover
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // --- Bispo (usa WHILE) ---
    int j = 1;
    int casasBispo = 5; // número de casas na diagonal
    printf("Movimento do Bispo:\n");
    while (j <= casasBispo) {
        printf("Cima, Direita (%d)\n", j);
        j++;
    }

    printf("\n");

    // --- Rainha (usa DO-WHILE) ---
    int k = 1;
    int casasRainha = 8; // número de casas para a esquerda
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= casasRainha);

    printf("\nFim da simulação de movimentos!\n");

    return 0;
}