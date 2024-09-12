#include <stdio.h>
void recursivo(int movimento){
    // Verifica se o movimento é 5 para a torre
    if (movimento == 5) {
        printf("Torre moveu %d casas para a direita\n", movimento);
    }
    // Verifica se o movimento é 8 para a rainha
    else if (movimento == 8) {
        printf("Rainha moveu %d casas para a esquerda\n", movimento);
    }
 }
 void recursivo_bispo(int movimento_bispo){
  //verifica se o movimento é para o bispo
        //loop para mover o bispo
        for (int i = 1; i <= movimento_bispo; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == j) {
                printf("Bispo moveu 1 casa para cima e 1 casa para a direita (posição: %d, %d)\n", i, j);
            }
        }
    }
    printf("Bispo moveu %d casas na diagonal superior direita\n", movimento_bispo);
}


    


// Desafio de Xadrez - MateCheck
int main() {
    // Nível Mestre - Movimentação das Peças
    const int mov_bispo = 5; //casas na diagonal superior direita
    const int mov_torre = 5; //casas para a direita
    const int mov_rainha = 8;// casas para a esquerda
    const int mov_cavalo_cima = 2, mov_cavalo_direita = 1; //o cavalo move 3 peças formando L

    //variavel controle
    int i;
    int j;
    
    // Implementação de Movimentação da Torre
     printf("Movimentação da torre\n");
     recursivo(mov_torre);

    // Implementação de Movimentação da Rainha
     printf("Movimentação da Rainha\n");
     recursivo(mov_rainha);

    // Implementação de Movimentação do Bispo
     printf("Movimentação do Bispo\n");
     recursivo_bispo(mov_bispo);

    //Implementação de Movimentação do Cavalo
     printf("Movimentação do Cavalo\n");
     for(i = 0, j = 0; i <= mov_cavalo_cima && j <= mov_cavalo_direita;){
        //movimento vertical (cima)
        if(i < mov_cavalo_cima){
            i++;
            printf("O cavalo moveu %d casas para cima\n", i);
            //se o movimento para cima estiver completo, continue para o proximo movimento
        }
        //movimento horizontal(direita)
        if(i == mov_cavalo_cima && j < mov_cavalo_direita){
            j++;
            printf("O cavalo moveu %d casa para direita\n", j);
        } 
        //quando ambos os movimentos estiverem concluidos, sai do loop
        if(i == mov_cavalo_cima && j == mov_cavalo_direita){
            printf("Cavalo moveu 1 vez em L para cima à direita ");
            break;
        }
    }
   



    

    return 0;
}
