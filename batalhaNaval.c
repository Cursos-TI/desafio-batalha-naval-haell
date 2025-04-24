#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definindo tipos de navios
    // Navios longos (4 partes) e curtos (3 partes)
    int navioLongo = 4; // Navio longo
    int navioCurto = 3; // Navio curto

    // Definindo tamanho do tabuleiro dinamicamente
    int tamanhoTabuleiro = 10; // Tamanho do tabuleiro (10x10)

    // Preenchendo as matrizes dinamicamente com FOR.
    // Declaração do tabuleiro 10x10
    int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro]; // Inicializa o tabuleiro com 0 (vazio)
    for (int i = 0; i < tamanhoTabuleiro; i++)
    { // percorre linhas
        for (int j = 0; j < tamanhoTabuleiro; j++)
        { // percorre colunas
            tabuleiro[i][j] = 0; // Preenche o tabuleiro com 0 (vazio)
        }
    }

    // Criando o primeiro navio
    int navio1[navioCurto]; // Representa um navio de 3 partes
    for (int i = 0; i < navioCurto; i++)
    {
        navio1[i] = 3; // Preenche o navio com 3 (parte do navio)
    }

    // Criando o segundo navio mais longo
    int navio2[navioLongo]; // Representa um navio de 4 partes
    for (int i = 0; i < navioLongo; i++)
    {
        navio2[i] = 3; // Preenche o navio com 3 (parte do navio)
    }

    // Criando o terceiro navio na diagonal positivo
    int navio3[navioCurto]; // Representa um navio de 3 partes
    for (int i = 0; i < navioCurto; i++)
    {
        navio3[i] = 3; // Preenche o navio com 3 (parte do navio)
    }

    // Criando o quarto navio mais longo na diagonal negativo
    int navio4[navioLongo]; // Representa um navio de 3 partes
    for (int i = 0; i < navioLongo; i++)
    {
        navio4[i] = 3; // Preenche o navio com 3 (parte do navio)
    }

    // Definir a posição inicial do navio1 na horizontal
    int linhaInicialNavio1 = 1;
    int colunaInicialNavio1 = 2;
    // Posicionar o navio1 no tabuleiro, na horizontal
    for (int i = 0; i < navioCurto; i++)
    {
        tabuleiro[linhaInicialNavio1][colunaInicialNavio1 + i] = navio1[i];
    }

    // Definir a posição inicial do navio2 na vertical
    int linhaInicialNavio1Navio2 = 4;
    int colunaInicialNavio2 = 7;
    // Posicionar o navio2 no tabuleiro, verticalmente
    for (int i = 0; i < navioLongo; i++)
    {
        tabuleiro[linhaInicialNavio1Navio2 + i][colunaInicialNavio2] = navio2[i];
    }

    // Definir a posição inicial do navio3 na diagonal positiva
    int linhaIncialNavio3 = 6;   // Linha inicial do navio 3
    int colunaInicialNavio3 = 1; // Coluna inicial do navio 3
    // Posicionar o navio3 no tabuleiro, na vertical
    for (int i = 0; i < navioCurto; i++)
    {
        tabuleiro[linhaIncialNavio3 + i][colunaInicialNavio3 + i] = navio3[i];
    }

    // Definir a posição inicial do navio4 na diagonal negativa
    int linhaIncialNavio4 = 2;   // Linha inicial do navio 4
    int colunaInicialNavio4 = 6; // Coluna inicial do navio 4
    // Posicionar o navio4 no tabuleiro, na diagonal negativa
    for (int i = 0; i < navioLongo; i++)
    {
        tabuleiro[linhaIncialNavio4 + i][colunaInicialNavio4 - i] = navio4[i];
    }

    // Mostrar o tabuleiro no console
    printf("Tabuleiro:\n");
    for (int i = 0; i < tamanhoTabuleiro; i++)
    { // percorre linhas
        for (int j = 0; j < tamanhoTabuleiro; j++)
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
