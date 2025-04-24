#include <stdio.h>

// Função para aplicar uma habilidade no tabuleiro com base em uma matriz
void aplicarHabilidade(int tabuleiro[10][10], int origemLinha, int origemColuna, int habilidade[3][5], int habilidadeLinha, int habilidadeColuna)
{
    for (int i = 0; i < habilidadeLinha; i++)
    {
        for (int j = 0; j < habilidadeColuna; j++)
        {
            if (habilidade[i][j] == 1)
            {
                int linhaAlvo = origemLinha + i - 1; // centraliza a matriz (assumindo 3x5)
                int colunaAlvo = origemColuna + j - 2;

                // Verifica se está dentro dos limites do tabuleiro
                if (linhaAlvo >= 0 && linhaAlvo < 10 && colunaAlvo >= 0 && colunaAlvo < 10)
                {
                    tabuleiro[linhaAlvo][colunaAlvo] += 1; // marca como atingido
                }
            }
        }
    }
}

// Desafio Batalha Naval - Haell NIVEL MESTRE
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
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
        {                        // percorre colunas
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
    printf("\nTabuleiro com os navios posicionados (antes do ataque):\n");
    for (int i = 0; i < tamanhoTabuleiro; i++)
    { // percorre linhas
        for (int j = 0; j < tamanhoTabuleiro; j++)
        { // percorre colunas
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // quebra de linha ao final de cada linha
    }

    // #### Definindo matrizes para habilidades especiais ####

    // Definindo tamanho da linha e coluna para habilidades CONE
    int coneLinha = 3;  // Tamanho da linha
    int coneColuna = 5; // Tamanho da coluna

    // Definindo habilidade em cone
    int habilidadeCone[coneLinha][coneColuna]; // Matriz para habilidade em cone
    // Construindo habilidade em cone
    for (int i = 0; i < coneLinha; i++)
    { // percorre linhas
        for (int j = 0; j < coneColuna; j++)
        {                             // percorre colunas
            habilidadeCone[i][j] = 1; // Preenche a matriz com 0 (não afetada)
        }
    }

    // Imprimindo a matriz de habilidade em cone
    printf("\nHabilidade em Cone:\n");
    // Construindo habilidade em cone dinamicamente
    for (int i = 0; i < coneLinha; i++)
    { // percorre linhas
        for (int j = 0; j < coneColuna; j++)
        { // percorre colunas
            if (j >= (coneColuna / 2) - i && j <= (coneColuna / 2) + i)
            {
                habilidadeCone[i][j] = 1; // Preenche a matriz com 1 (afetada)
            }
            else
            {
                habilidadeCone[i][j] = 0; // Preenche a matriz com 0 (não afetada)
            }
        }
    }
    for (int i = 0; i < coneLinha; i++)
    { // percorre linhas
        for (int j = 0; j < coneColuna; j++)
        { // percorre colunas
            printf("%d ", habilidadeCone[i][j]);
        }
        printf("\n"); // quebra de linha ao final de cada linha
    }

    // Definindo tamanho da linha e coluna para habilidades octaedro
    int octaLinha = 3;  // Tamanho da linha
    int octaColuna = 5; // Tamanho da coluna
    // Definindo habilidade em octaedro
    int habilidadeOctaedro[octaLinha][octaColuna]; // Matriz para habilidade em octaedro
    // Construindo habilidade em octaedro
    for (int i = 0; i < octaLinha; i++)
    {
        for (int j = 0; j < octaColuna; j++)
        {
            if ((i == 0 || i == 2) && j == 2)
            {
                habilidadeOctaedro[i][j] = 1;
            }
            else if (i == 1 && j >= 1 && j <= 3)
            {
                habilidadeOctaedro[i][j] = 1;
            }
            else
            {
                habilidadeOctaedro[i][j] = 0;
            }
        }
    }
    // Imprimindo a matriz de habilidade em octaedro
    printf("\nHabilidade em Octaedro:\n");
    for (int i = 0; i < octaLinha; i++)
    { // percorre linhas
        for (int j = 0; j < octaColuna; j++)
        { // percorre colunas
            printf("%d ", habilidadeOctaedro[i][j]);
        }
        printf("\n"); // quebra de linha ao final de cada linha
    }

    // Definindo tamanho da linha e coluna para habilidades cruz
    int cruzLinha = 3;  // Tamanho da linha
    int cruzColuna = 5; // Tamanho da coluna
    // Definindo habilidade em cruz
    int habilidadeCruz[cruzLinha][cruzColuna]; // Matriz para habilidade em cruz
    // Construindo habilidade em cruz
    for (int i = 0; i < cruzLinha; i++)
    {
        for (int j = 0; j < cruzColuna; j++)
        {
            if (j == 2 || i == 1)
            {
                habilidadeCruz[i][j] = 1;
            }
            else
            {
                habilidadeCruz[i][j] = 0;
            }
        }
    }
    // Imprimindo a matriz de habilidade em cruz
    printf("\nHabilidade em Cruz:\n");
    for (int i = 0; i < cruzLinha; i++)
    { // percorre linhas
        for (int j = 0; j < cruzColuna; j++)
        { // percorre colunas
            printf("%d ", habilidadeCruz[i][j]);
        }
        printf("\n"); // quebra de linha ao final de cada linha
    }

    // ##### ---------------------- Implementação do ataque ---------------------- #####

    // Escolha da habilidade
    int escolhaHabilidade; // Declaração da variável escolhaHabilidade
    printf("\nEscolha a habilidade para usar:\n");
    printf("1 - Cone\n");
    printf("2 - Octaedro\n");
    printf("3 - Cruz\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaHabilidade);

    // Escolha da posição de origem do ataque
    int origemLinha, origemColuna;
    printf("Digite a linha de origem do ataque (0 a 9): ");
    scanf("%d", &origemLinha);
    printf("Digite a coluna de origem do ataque (0 a 9): ");
    scanf("%d", &origemColuna);

    // Aplicando a habilidade escolhida
    switch (escolhaHabilidade)
    {
    case 1:
        aplicarHabilidade(tabuleiro, origemLinha, origemColuna, habilidadeCone, coneLinha, coneColuna);
        break;
    case 2:
        aplicarHabilidade(tabuleiro, origemLinha, origemColuna, habilidadeOctaedro, octaLinha, octaColuna);
        break;
    case 3:
        aplicarHabilidade(tabuleiro, origemLinha, origemColuna, habilidadeCruz, cruzLinha, cruzColuna);
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    // Mostrar o tabuleiro atualizado após o ataque
    printf("\nTabuleiro apos ataque:\n");
    for (int i = 0; i < tamanhoTabuleiro; i++)
    {
        for (int j = 0; j < tamanhoTabuleiro; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n\nLEGENDA:\n0 - agua\n3 - parte do navio\n1 - Tiro na agua\n4 - Tiro no navio\n");

    return 0;
}
