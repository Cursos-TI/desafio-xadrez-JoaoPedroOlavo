#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoTorre(int casas){
    int i = 1;
    while (i <= casas){
        printf("Direita\n");
        i++;
    }
}

void movimentoRainha(int casas){
    int i = 1;
    do{
        printf("Esquerda\n");
        i++;
    } while (i <= casas);
}

void movimentoBispo(int casas){
    for(int h=1; h<=casas; h++){
        printf("Cima, ");
        for (int w=1; w<2; w++){
            printf("Direita\n");
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    int torre=1, h, w, rainha=1;
    int movimentoCompleto=1;

    // Implementação de Movimentação do Bispo
    printf("Movimentação BISPO\n");
    movimentoBispo(5);

    // Implementação de Movimentação da Torre
    printf("\nMovimentação TORRE\n");
    movimentoTorre(5);

    // Implementação de Movimentação da Rainha
    printf("\nMovimentação RAINHA\n");
    movimentoRainha(8);

    // Nível Aventureiro - Movimentação do Cavalo
    printf("\nMovimentação CAVALO\n");
    while (movimentoCompleto--){
        for (int i=0; i<2; i++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
