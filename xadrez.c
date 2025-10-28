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
#include <stdio.h>

int main() {
    // ===============================
    // 🎯 DESAFIO: XADREZ - NÍVEL AVENTUREIRO
    // Peças: Torre, Bispo, Rainha e Cavalo
    // Estruturas de repetição: for, while, do-while e loops aninhados
    // ===============================

    // --- Torre (usa FOR) ---
    int i;
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // --- Bispo (usa WHILE) ---
    int j = 1;
    int casasBispo = 5;
    printf("Movimento do Bispo:\n");
    while (j <= casasBispo) {
        printf("Cima, Direita (%d)\n", j);
        j++;
    }

    printf("\n");

    // --- Rainha (usa DO-WHILE) ---
    int k = 1;
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= casasRainha);

    printf("\n");

    // --- Cavalo (usa loops ANINHADOS: FOR + WHILE) ---
    int movBaixo = 2;   // duas casas para baixo
    int movEsquerda = 1; // uma casa para a esquerda

    printf("Movimento do Cavalo:\n");

    // Loop FOR controla o movimento vertical (para baixo)
    for (int linha = 1; linha <= movBaixo; linha++) {
        printf("Baixo (%d)\n", linha);

        // Loop WHILE controla o movimento horizontal (para a esquerda)
        int col = 0;
        while (col < 1 && linha == movBaixo) {
            // só executa quando o cavalo terminou o movimento vertical
            printf("Esquerda (1)\n");
            col++;
        }
    }

    printf("\nFim da simulação de movimentos!\n");

    return 0;
}
