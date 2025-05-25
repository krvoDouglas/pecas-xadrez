#include <stdio.h>

// ========================================
// FUNCOES RECURSIVAS PARA NIVEL AVANCADO
// ========================================

// Funcao recursiva para movimento da Torre
void movimento_torre_recursivo(int casas_restantes) {
    // Caso base: se nao ha mais casas para mover, para a recursao
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Casa %d: Direita\n", 6 - casas_restantes);
    
    // Chamada recursiva com uma casa a menos
    movimento_torre_recursivo(casas_restantes - 1);
}

// Funcao recursiva para movimento da Rainha
void movimento_rainha_recursivo(int casas_restantes) {
    // Caso base: se nao ha mais casas para mover, para a recursao
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Casa %d: Esquerda\n", 9 - casas_restantes);
    
    // Chamada recursiva com uma casa a menos
    movimento_rainha_recursivo(casas_restantes - 1);
}

// Funcao recursiva para movimento do Bispo com loops aninhados
void movimento_bispo_recursivo(int movimento_vertical, int movimento_horizontal) {
    // Caso base: se nao ha mais movimentos, para a recursao
    if (movimento_vertical <= 0 || movimento_horizontal <= 0) {
        return;
    }
    
    // Loop externo para movimento vertical
    for (int v = 1; v <= 1; v++) {
        // Loop interno para movimento horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Casa %d: Cima Direita\n", 6 - movimento_vertical);
        }
    }
    
    // Chamada recursiva com uma casa a menos em cada direcao
    movimento_bispo_recursivo(movimento_vertical - 1, movimento_horizontal - 1);
}

int main() {
    // ========================================
    // DECLARACAO DE VARIAVEIS
    // ========================================
    
    // Variaveis para controle dos movimentos basicos
    int casas_torre = 5;      // Torre move 5 casas para a direita
    int casas_bispo = 5;      // Bispo move 5 casas na diagonal (cima-direita)
    int casas_rainha = 8;     // Rainha move 8 casas para a esquerda
    
    // Variaveis para movimento do Cavalo (nivel intermediario)
    int cavalo_baixo = 2;     // Cavalo move 2 casas para baixo
    int cavalo_esquerda = 1;  // Cavalo move 1 casa para a esquerda
    
    // Variaveis para movimento do Cavalo avancado (cima-direita)
    int cavalo_cima = 2;      // Cavalo move 2 casas para cima
    int cavalo_direita = 1;   // Cavalo move 1 casa para a direita
    
    int contador;             // Variavel auxiliar para contadores
    int i, j;                 // Variaveis para loops aninhados
    
    printf("=== SIMULACAO COMPLETA DE MOVIMENTOS DAS PECAS DE XADREZ ===\n\n");
    
    // ========================================
    // NIVEL BASICO - MOVIMENTOS SIMPLES
    // ========================================
    
    printf(">>> NIVEL BASICO <<<\n\n");
    
    // MOVIMENTO DA TORRE - Usando estrutura FOR
    printf("MOVIMENTO DA TORRE (5 casas para a direita):\n");
    printf("A Torre move-se em linha reta horizontalmente ou verticalmente.\n");
    
    for (contador = 1; contador <= casas_torre; contador++) {
        printf("Casa %d: Direita\n", contador);
    }
    printf("\n");
    
    // MOVIMENTO DO BISPO - Usando estrutura WHILE
    printf("MOVIMENTO DO BISPO (5 casas na diagonal cima-direita):\n");
    printf("O Bispo move-se na diagonal em todas as direcoes.\n");
    
    contador = 1;
    while (contador <= casas_bispo) {
        printf("Casa %d: Cima Direita\n", contador);
        contador++;
    }
    printf("\n");
    
    // MOVIMENTO DA RAINHA - Usando estrutura DO-WHILE
    printf("MOVIMENTO DA RAINHA (8 casas para a esquerda):\n");
    printf("A Rainha move-se em todas as direcoes.\n");
    
    contador = 1;
    do {
        printf("Casa %d: Esquerda\n", contador);
        contador++;
    } while (contador <= casas_rainha);
    printf("\n");
    
    // ========================================
    // NIVEL INTERMEDIARIO - MOVIMENTO DO CAVALO
    // ========================================
    
    printf(">>> NIVEL INTERMEDIARIO <<<\n\n");
    
    printf("MOVIMENTO DO CAVALO (2 casas para baixo, 1 casa para a esquerda):\n");
    printf("O Cavalo move-se em formato 'L'.\n");
    
    // Loop externo FOR para movimento vertical (2 casas para baixo)
    for (i = 1; i <= cavalo_baixo; i++) {
        printf("Casa %d: Baixo\n", i);
    }
    
    // Loop interno WHILE para movimento horizontal (1 casa para a esquerda)
    j = 1;
    while (j <= cavalo_esquerda) {
        printf("Casa %d: Esquerda\n", cavalo_baixo + j);
        j++;
    }
    printf("\n");
    
    // ========================================
    // NIVEL AVANCADO - RECURSIVIDADE E LOOPS COMPLEXOS
    // ========================================
    
    printf(">>> NIVEL AVANCADO <<<\n\n");
    
    // TORRE COM RECURSIVIDADE
    printf("MOVIMENTO DA TORRE - VERSAO RECURSIVA (5 casas para a direita):\n");
    movimento_torre_recursivo(casas_torre);
    printf("\n");
    
    // BISPO COM RECURSIVIDADE E LOOPS ANINHADOS
    printf("MOVIMENTO DO BISPO - VERSAO RECURSIVA COM LOOPS ANINHADOS (5 casas na diagonal):\n");
    movimento_bispo_recursivo(casas_bispo, casas_bispo);
    printf("\n");
    
    // RAINHA COM RECURSIVIDADE
    printf("MOVIMENTO DA RAINHA - VERSAO RECURSIVA (8 casas para a esquerda):\n");
    movimento_rainha_recursivo(casas_rainha);
    printf("\n");
    
    // CAVALO COM LOOPS COMPLEXOS - Movimento cima-direita
    printf("MOVIMENTO DO CAVALO - VERSAO AVANCADA (2 casas para cima, 1 casa para a direita):\n");
    printf("Utilizando loops aninhados com multiplas variaveis e condicoes.\n");
    
    // Loops aninhados complexos para o Cavalo
    for (i = 1; i <= cavalo_cima; i++) {
        // Loop interno com condicoes multiplas
        for (j = 1; j <= 1; j++) {
            // Controle de fluxo com continue/break
            if (i > cavalo_cima) {
                break; // Para o loop se exceder o limite
            }
            
            if (i < 1) {
                continue; // Pula iteracao se menor que 1
            }
            
            printf("Casa %d: Cima\n", i);
        }
    }
    
    // Movimento final para a direita
    i = 1;
    do {
        printf("Casa %d: Direita\n", cavalo_cima + i);
        i++;
    } while (i <= cavalo_direita);
    
    printf("\n=== FIM DA SIMULACAO COMPLETA ===\n");
    
    return 0;
}