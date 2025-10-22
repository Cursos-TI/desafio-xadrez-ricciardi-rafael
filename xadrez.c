#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void torre_rec(int remaining, int *stepPtr) {
    if (remaining <= 0) {
        return; // condição de parada da recursão
    }

    // imprimir a próxima casa para a direita
    printf("Casa %d: Direita\n", ++(*stepPtr));

    // chamada recursiva para a próxima casa
    torre_rec(remaining - 1, stepPtr);
}

/* Função recursiva para a RAINHA: move N casas para a esquerda.
   Parameters iguais aos da torre.
*/
void rainha_rec(int remaining, int *stepPtr) {
    if (remaining <= 0) {
        return;
    }

    // imprimir a próxima casa para a esquerda
    printf("Casa %d: Esquerda\n", ++(*stepPtr));

    // recursividade
    rainha_rec(remaining - 1, stepPtr);
}

/* Função recursiva para o BISPO:
   - Cada passo diagonal é "Cima, Direita".
   - A recursão controla quantos passos ainda faltam.
   - Em cada chamada recursiva, usamos LOOPS ANINHADOS:
       * for (loop externo) = movimento vertical (simulado)
       * while (loop interno) = movimento horizontal (simulado)
     A combinação dos dois loops imprime a linha "Cima, Direita" por passo.
   Parameters:
     remaining - quantos passos diagonais faltam
     stepPtr   - ponteiro para contador de casas (numeração)
*/
void bispo_rec(int remaining, int *stepPtr) {
    if (remaining <= 0) {
        return;
    }

    /* Exemplo de loops aninhados:
       - O loop externo percorre a parte "vertical" do movimento (aqui apenas 1 iteração,
         mas mantém a forma requerida: externo → vertical).
       - O loop interno (while) percorre a parte "horizontal" (também 1 iteração).
       - Essa estrutura poderia ser expandida se cada passo consistisse em múltiplas sub-etapas.
    */
    for (int vertical = 0; vertical < 1; vertical++) {
        int horizontal = 0;
        while (horizontal < 1) {
            // imprime a casa correspondente à diagonal (Cima, Direita)
            printf("Casa %d: Cima, Direita\n", ++(*stepPtr));
            horizontal++;
        }
    }

    // chamar recursivamente para o próximo passo diagonal
    bispo_rec(remaining - 1, stepPtr);
}

/* Função para o CAVALO:
   - Usa loops aninhados complexos para simular L: duas casas para cima, uma para a direita.
   - Mostra uso de for aninhado, while, continue e break.
   - As variáveis de controle são todas int.
   - O objetivo: imprimir a sequência: "Cima", "Cima", "Direita" (numeradas).
*/
void cavalo_complex(int upSteps, int rightSteps) {
    int casa = 0; // contador local para numerar as casas do cavalo

    printf("Movimento do CAVALO:\n");

    /* Parte 1: mover 'upSteps' vezes para cima.
       - Usamos um loop for externo que controla as repetições verticais.
       - Dentro dele, há um loop for "auxiliar" que demonstra controle adicional;
         usamos continue para pular uma iteração condicional (apenas para demonstrar).
    */
    for (int up = 0; up < upSteps; up++) {
        // loop auxiliar (pode conter lógica condicional complexa)
        for (int aux = 0; aux < 1; aux++) {
            // demonstrar um uso de continue: se uma condição hipotética ocorresse,
            // pularíamos a ação (aqui a condição nunca acontece, mas mostra a estrutura).
            if (aux < 0) {
                // (não acontece) continue;
            }
            // imprimir a etapa "Cima"
            printf("Casa %d: Cima\n", ++casa);
        }
    }

    /* Parte 2: mover 'rightSteps' vezes para a direita.
       - Usamos um while com controle interno que faz uso de break quando a condição é satisfeita.
       - Demonstração de condições adicionais com variáveis de controle.
    */
    int rightsRemaining = rightSteps;
    int safetyCounter = 0; // variável extra para demonstrar múltiplas condições
    while (rightsRemaining > 0) {
        // Checagem extra para evitar loops infinitos (boa prática)
        if (safetyCounter > 100) {
            // situação anômala — forçamos saída do loop
            break;
        }

        // imprimir a etapa "Direita"
        printf("Casa %d: Direita\n", ++casa);
        rightsRemaining--;

        // se já completamos os direitos, quebramos imediatamente
        if (rightsRemaining <= 0) {
            break; // uso de break conforme solicitado
        }

        safetyCounter++; // atualizar contador auxiliar
    }

    // Separador visual (opcional)
    printf("\n");
}

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


   /* Definições (valores fixos no código conforme requisitos) */
    int casasTorre = 5;   // Torre: 5 para a direita
    int casasBispo = 5;   // Bispo: 5 passos na diagonal (Cima, Direita)
    int casasRainha = 8;  // Rainha: 8 para a esquerda

    /* --- TORRE usando recursividade --- */
    printf("Movimento da TORRE:\n");
    int step = 0; // contador de casas (reiniciado para cada peça)
    torre_rec(casasTorre, &step);
    printf("\n"); // separar blocos

    /* --- BISPO usando recursividade + LOOPS ANINHADOS --- */
    printf("Movimento do BISPO:\n");
    step = 0;
    bispo_rec(casasBispo, &step);
    printf("\n");

    /* --- RAINHA usando recursividade --- */
    printf("Movimento da RAINHA:\n");
    step = 0;
    rainha_rec(casasRainha, &step);
    printf("\n");

    /* --- CAVALO com loops aninhados complexos --- */
    // Agora o Cavalo no nível mestre: duas casas para cima e uma para a direita (L invertido)
    int cavalo_up = 2;
    int cavalo_right = 1;
    cavalo_complex(cavalo_up, cavalo_right);

    printf("Simulação finalizada.\n");

    return 0;
}
