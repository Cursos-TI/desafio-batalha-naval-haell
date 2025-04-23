#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato

    // Declaração do tabuleiro 10x10
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com 0 (vazio)

    // Criando o primeiro navio
    int navio1[3] = {3, 3, 3}; // Representa um navio de 3 partes

    // Criando o segundo navio
    int navio2[4] = {4, 4, 4, 4}; // Representa outro navio de 3 partes

    // Criando o terceiro navio
    int navio3[3] = {3, 3, 3}; // Representa um navio de 3 partes

    // Definir a posição inicial do navio1 (linha 2, coluna 4)
    int linhaInicialNavio1 = 1;
    int colunaInicialNavio1 = 2;
    // Posicionar o navio1 no tabuleiro, na horizontal
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaInicialNavio1][colunaInicialNavio1 + i] = navio1[i];
    }

    // Definir a posição inicial do navio2 (linha 4, coluna 7)
    int linhaInicialNavio1Navio2 = 4;
    int colunaInicialNavio2 = 7;
    // Posicionar o navio2 no tabuleiro, verticalmente
    for (int i = 0; i < 4; i++)
    {
        tabuleiro[linhaInicialNavio1Navio2 + i][colunaInicialNavio2] = navio2[i];
    }

     // Navio adicional de 3 partes
     int linhaIncialNavio3 = 6;   // Linha inicial do navio 3
     int colunaInicialNavio3 = 1; // Coluna inicial do navio 3
     // Posicionar o navio3 no tabuleiro, na vertical
     for (int i = 0; i < 3; i++)
     {
         tabuleiro[linhaIncialNavio3 + i][colunaInicialNavio3] = navio3[i];
     }

    // Mostrar o tabuleiro no console
    printf("Tabuleiro:\n");
    for (int i = 0; i < 10; i++)
    { // percorre linhas
        for (int j = 0; j < 10; j++)
        { // percorre colunas
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // quebra de linha ao final de cada linha
    }

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
