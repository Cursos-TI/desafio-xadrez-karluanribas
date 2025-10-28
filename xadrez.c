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
#include <stdio.h>

// ======================================================
// 🧠 DESAFIO XADREZ - NÍVEL MESTRE
// Peças: Torre, Bispo, Rainha e Cavalo
// Técnicas: Recursividade e Loops Aninhados
// ======================================================


// ==========================
// 🏰 TORRE (Recursividade)
// ==========================
void moverTorre(int passo, int limite) {
    // Caso base: parou quando alcança o limite
    if (passo > limite) return;

    printf("Direita (%d)\n", passo);

    // Chamada recursiva: avança uma casa à direita
    moverTorre(passo + 1, limite);
}


// ==========================
// ⛪ BISPO (Recursividade + Loops Aninhados)
// ==========================
void moverBispo(int linha, int limite) {
    if (linha > limite) return;

    // loop aninhado: um controle vertical e outro horizontal
    for (int coluna = 1; coluna <= linha; coluna++) {
        printf("Cima, Direita (passo %d-%d)\n", linha, coluna);
    }

    moverBispo(linha + 1, limite); // chamada recursiva
}


// ==========================
// 👑 RAINHA (Recursividade)
// ==========================
void moverRainha(int passo, int limite) {
    if (passo > limite) return;

    printf("Esquerda (%d)\n", passo);

    moverRainha(passo + 1, limite); // chamada recursiva
}


// ==========================
// ♞ CAVALO (Loops complexos)
// Movimento: 2 casas para cima e 1 para a direita
// ==========================
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movCima = 2;
    int movDireita = 1;

    // loop externo: sobe 2 vezes
    for (int i = 1, j = movCima; i <= movCima && j > 0; i++, j--) {
        printf("Cima (%d)\n", i);

        // loop interno com condição extra
        int k = 0;
        while (k < movDireita) {
            if (i == movCima) { // só move para a direita ao final do movimento vertical
                printf("Direita (1)\n");
                break; // encerra quando completa o "L"
            }
            k++;
            continue;
        }
    }
}


// ==========================
// 🚀 FUNÇÃO PRINCIPAL
// ==========================
int main() {
    printf("=== Movimento da Torre ===\n");
    moverTorre(1, 5);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(1, 5);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(1, 8);

    printf("\n=== Movimento do Cavalo ===\n");
    moverCavalo();

    printf("\nFim da simulação de movimentos!\n");
    return 0;
}
