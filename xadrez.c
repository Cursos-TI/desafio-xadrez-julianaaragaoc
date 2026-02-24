#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    //Declaração de variáveis

    int Torre, Bispo, Rainha, Cavalo;
        
     // ================================
    // Movimento da TORRE (for)
    // Move 5 casas para a direita
    // ================================
    
    printf("Movimento da Torre:\n");
    
    for (Torre = 1; Torre <=5; Torre++) {
        printf("Direita\n");
    }

    // ================================
    // Movimento do BISPO (while)
    // Move 5 casas na diagonal
    // (Cima e Direita)
    // ================================
    
    printf("\nMovimento do Bispo:\n");
    
    Bispo = 1;
    while (Bispo <= 5) {
        printf("Cima Direita\n");
        Bispo++;
    }

    // ================================
    // Movimento da RAINHA (do-while)
    // Move 8 casas para a esquerda
    // ================================
    
    printf("\nMovimento da Rainha:\n");
    
    Rainha = 1;
    do {
        printf("Esquerda\n");
        Rainha++;
    } while (Rainha <= 8);

        // ================================
    // Movimento do CAVALO (do-while)
    // Move 8 casas para a esquerda
    // ================================
    
    printf("\nMovimento do Cavalo:\n");
  
    Cavalo = 1;
    // Loop externo controla as 2 casas para baixo
    while (Cavalo--)
    {
        for (int i = 0; i<2 ; i++){
        printf("Baixo\n");
        }
    printf("Esquerda\n");
    }

    return 0;
}
