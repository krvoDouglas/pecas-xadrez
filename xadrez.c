#include <stdio.h>

int main() {
    
    // Declaração das variáveis para controle dos movimentos
    int casas_torre = 5;      // Torre move 5 casas para a direita
    int casas_bispo = 5;      // Bispo move 5 casas na diagonal (cima-direita)
    int casas_rainha = 8;     // Rainha move 8 casas para a esquerda
    
    int contador=0;             // Variável auxiliar para contadores
    
    printf("=== SIMULACAO DE MOVIMENTOS DAS PECAS DE XADREZ ===\n\n");
    
    
    // DO WHILE PARA MOVIMENTO DA TORRE
    
    printf("MOVIMENTO DA TORRE:\n");

    contador = 1; // inicialização do contador;
    do{
        printf("Casa %d: ", contador);
        printf("Direita\n");
        contador ++;
    }while(contador <= casas_torre);
    
    printf("\n");
    
    // FOR PARA MOVIMENTO DO BISPO
    printf("MOVIMENTO DO BISPO:\n");
    
    for (contador=1; contador <= casas_bispo; contador++){
        printf("Casa %d: ", contador);
        printf("Cima Direita\n");
        
    }
    
    printf("\n");
    
    // WHILE PARA MOVIMENTO DA RAINHA 
    printf("MOVIMENTO DA RAINHA:\n");
    
    // Inicialização do contador para o loop WHILE
    contador = 1;
    
    // Loop DO-WHILE para simular o movimento da Rainha
    while(contador <= casas_rainha){
        printf("Casa %d: ", contador);
        printf("Esquerda\n");
        contador++; // Incrementa o contador
        }
        
    printf("\n=== FIM DA SIMULACAO ===\n");
    
    return 0;
}
