#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
        int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3};
            int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};

                // Inicializa o tabuleiro com 0 (água)
                    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
                            for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
                                        tabuleiro[i][j] = 0;
                                                }
                                                    }

                                                        // Escolhe posição inicial para o navio horizontal
                                                            int linha_h = 2;
                                                                int coluna_h = 4;

                                                                    // Verifica se o navio cabe no tabuleiro horizontalmente
                                                                        if (coluna_h + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
                                                                                for (int i = 0; i < TAMANHO_NAVIO; i++) {
                                                                                            tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
                                                                                                    }
                                                                                                        }

                                                                                                            // Escolhe posição inicial para o navio vertical
                                                                                                                int linha_v = 5;
                                                                                                                    int coluna_v = 6;

                                                                                                                        // Garante que os navios não se sobrepõem
                                                                                                                            int sobreposicao = 0;
                                                                                                                                if (linha_v + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
                                                                                                                                        for (int i = 0; i < TAMANHO_NAVIO; i++) {
                                                                                                                                                    if (tabuleiro[linha_v + i][coluna_v] != 0) {
                                                                                                                                                                    sobreposicao = 1;
                                                                                                                                                                                    break;
                                                                                                                                                                                                }
                                                                                                                                                                                                        }

                                                                                                                                                                                                                // Se não houver sobreposição, posiciona o navio vertical
                                                                                                                                                                                                                        if (!sobreposicao) {
                                                                                                                                                                                                                                    for (int i = 0; i < TAMANHO_NAVIO; i++) {
                                                                                                                                                                                                                                                    tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                                                                                    printf("Erro: Sobreposição de navios detectada!\n");
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                                                                    // Exibe o tabuleiro
                                                                                                                                                                                                                                                                                                        printf("Tabuleiro Batalha Naval (0 = água, 3 = navio):\n\n");
                                                                                                                                                                                                                                                                                                            for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
                                                                                                                                                                                                                                                                                                                    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
                                                                                                                                                                                                                                                                                                                                printf("%d ", tabuleiro[i][j]);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                printf("\n");
                                                                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                    