#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    const int mov_bispo = 5; //casas na diagonal superior direita
    const int mov_torre = 5; //casas para a direita
    const int mov_rainha = 8;// casas para a esquerda

    //variavel controle
    int i;
    
    // Implementação de Movimentação da Torre
    printf("Movimentação da torre\n");
    for(i = 1; i <= mov_torre; i++){
        printf("Torre moveu %d para a direita\n", i);
    }

    // Implementação de Movimentação da Rainha
    printf("Movimentação da Rainha\n");
    for(i = 1; i <= mov_rainha; i++){
         printf("Rainha moveu %d para a esquerda\n", i);
    }
    // Implementação de Movimentação do Bispo
   printf("Movimentação do Bispo\n");
    for(i = 1; i <= mov_bispo; i++){
         printf("Bispo moveu %d na diagonal superior direita (cima e direita)\n", i);
    }



    

    return 0;
}
