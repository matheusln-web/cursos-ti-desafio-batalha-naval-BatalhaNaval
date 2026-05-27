#include <stdio.h>

int main() {

    char tabuleiro[10][10];
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

//Montando o tabuleiro
    for (int i = 0; i < 10; i++){

        for (int j = 0; j < 10; j++){
            tabuleiro [i][j] = 0;
        } 
    }
    for(int i = 3; i < 6; i++){
        tabuleiro [3][i] = 3;//Nessa parte eu defino o primeiro navio na posição D3 até F3
        for(int j = 5; j < 8; j++){
            tabuleiro [j][7] = 3;//Nessa parte eu defino o segundo navio na posição H5 até H7
        }
    }
//Mostrando o tabuleiro
    for (int c = 0; c < 10; c++){//Essa parte mostra as letras em cima na coluna, não consegui deixar melhor alinhado que isso.
        printf(" %c", coluna[c]); 
    }
    
    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%d ", i);// Deus sabe o quanto eu quebrei cabeça nisso aqui, essa parte mostra o numero da linha na lateral
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);//Essa parte vai mostrar os 0 de acordo com a posição na matriz
        }
    printf("\n");    
    } 
    return 0;
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

