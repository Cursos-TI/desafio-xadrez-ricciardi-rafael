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


    // ============================
    // Movimentação da TORRE (for)
    // ============================
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");

    // A Torre se move em linha reta — neste caso, 5 casas para a direita
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n"); // Linha em branco para separar os blocos

    // =============================
    // Movimentação do BISPO (while)
    // =============================
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do BISPO:\n");

    // O Bispo se move na diagonal — neste caso, 5 casas para cima e à direita
    while (contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

    // =====================================
    // Movimentação da RAINHA (do-while)
    // =====================================
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da RAINHA:\n");

    // A Rainha se move em todas as direções — aqui, 8 casas para a esquerda
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\nSimulação finalizada.\n");


    return 0;
}
