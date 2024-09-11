#include <stdio.h>

// Desafio de Xadrez - MateCheck
int main() {
    // Nível Aventureiro - Movimentação das Peças
    const int mov_bispo = 5; //casas na diagonal superior direita
    const int mov_torre = 5; //casas para a direita
    const int mov_rainha = 8;// casas para a esquerda
    const int mov_cavalo_baixo = 2, mov_cavalo_esquerda = 1; //o cavalo move 3 peças formando L

    //variavel controle
    int i;
    int j;
    
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
    //Implementação de Movimentação do Cavalo
    //O cavalo move para baixo e para a esquerda
    printf("Movimentação do Cavalo\n");
    for(i =1; i <= mov_cavalo_baixo; i++){
        //loop externo imprime o movimento vertical(baixo)
        printf("O Cavalo moveu %d para baixo\n", i);
        int j = 1;
        while (j <= mov_cavalo_esquerda)
        {//loop interno imprime movimento horizontal(esqueda)
            printf("O Cavalo moveu %d para a esquerda\n", j);
            j++;
        }
        
        printf("\n");
    }
   



    

    return 0;
}
