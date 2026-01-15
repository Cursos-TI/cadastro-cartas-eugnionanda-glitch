#include <stdio.h>

int main() {

    // CARTA 1 - inicializadas no nível aventureiro da 3ª semana //
        char estado1[3] = MG;
        char cod1[4] = MG01;
        char nmcid1[30] = UBERABA;
        unsigned long int pop1 = 356781;
        float area1 = 4523957;
        float pib1 = 59943;
        int ptturist1 = 18;
        float densidade1 = pop1 / area1;
        float pibpc1 = (pib1 * 1000000000) / pop1;
        float superPoder1 = (float)pop1 + area1 + pib1 + (float) ptturist1 + pibpc1 + (1 / densidade1);
    
   // CARTA 2 - inicializadas no nível aventureiro da 3ª semana //
        char estado2[3] = MG;
        char cod2[4] = MG02;
        char nmcid2[30] = IPATINGA;
        unsigned long int pop2 = 227731;
        float area2 = 164884;
        float pib2 = 17609176;
        int ptturist2 = 15;
        float densidade2 = pop2 / area2;
        float pibpc2 = (pib2 * 1000000000) / pop2;
        float superPoder2 = (float)pop2 + area2 + pib2 + (float) ptturist2 + pibpc2 + (1 / densidade2);
    
    // ENTRADA DE DADOS - comentado a partir do nível aventureiro da 3ª semana visto que as variáveis foram inicializadas //
    //printf("=== PRIMEIRA CARTA ===\n");
    //printf("Estado: ");
    //scanf("%s", estado1);
    //printf("Código: ");
    //scanf("%s", cod1);
    //printf("Nome da cidade: ");
    //scanf("%s", nmcid1);
    //printf("População: ");
    //scanf("%lu", &pop1);
    //printf("Área: ");
    //scanf("%f", &area1);
    //printf("PIB: ");
    //scanf("%f", &pib1);
    //printf("Pontos turísticos: ");
    //scanf("%d", &ptturist1);
    //printf("\n=== SEGUNDA CARTA ===\n");
    //printf("Estado: ");
    //scanf("%s", estado2);
    //printf("Código: ");
    //scanf("%s", cod2);
    //printf("Nome da cidade: ");
    //scanf("%s", nmcid2);
    //printf("População: ");
    //scanf("%lu", &pop2);
    //printf("Área: ");
    //scanf("%f", &area2);
    //printf("PIB: ");
    //scanf("%f", &pib2);
    //printf("Pontos turísticos: ");
    //scanf("%d", &ptturist2);
 
    // SAÍDA DE DADOS comentado a partir do nível aventureiro da 3ª semana visto que as variáveis foram inicializadas //
    //printf("\n\n===== DADOS CADASTRADOS =====\n");
    //printf("\n--- PRIMEIRA CARTA ---\n");
    //printf("Estado: %s\n", estado1);
    //printf("Código: %s\n", cod1);
    //printf("Cidade: %s\n", nmcid1);
    //printf("População: %lu\n", pop1);
    //printf("Área: %.2fkm2\n", area1);
    //printf("PIB: %.2fbilhões de reais\n", pib1);
    //printf("Pontos turísticos: %d\n", ptturist1);
    //printf("Densidade populacional: %.2fhab/km2\n", densidade1);
    //printf("PIB per Capita: R$ %.2f\n", pibpc1);
    //printf("Super Poder: %.2f\n", superPoder1);
    //printf("\n--- SEGUNDA CARTA ---\n");
    //printf("Estado: %s\n", estado2);
    //printf("Código: %s\n", cod2);
    //printf("Cidade: %s\n", nmcid2);
    //printf("População: %lu\n", pop2);
    //printf("Área: %.2fkm2\n", area2);
    //printf("PIB:R$ %.2fbilhões de reais\n", pib2);
    //printf("Pontos turísticos: %d\n", ptturist2);
    //printf("Densidade populacional: %.2fhab/km2\n", densidade2);
    //printf("PIB per Capita: R$ %.2f\n", pibpc2);
    //printf("Super Poder: %.2f\n", superPoder2);

    // ============================
    //      COMPARAÇÃO CARTAS - semana2
    // ============================
    //printf ("\n\n---COMPARAÇÃO DAS CARTAS---\n");
    //printf ("\n\n---PRIMEIRA CARTA---\n");
    //printf("População venceu (1)? %d\n", pop1 > pop2);
    //printf("Área venceu (1)? %d\n", area1 > area2);
    //printf("PIB venceu (1)? %d\n", pib1 > pib2);
    //printf("Qtde Pontos Turísticos venceu (1)? %d\n", ptturist1 > ptturist2);
    //printf("Densidade Populacional venceu (1): %d\n", densidade1 < densidade2);
    //printf("PIB per Capita venceu (1)? %d\n", pibpc1 > pibpc2);
    //printf("Super Poder venceu (1)? %d\n", superPoder1 > superPoder2);
    //printf ("\n\n---SEGUNDA CARTA---\n");
    //printf("População venceu (1)? %d\n", pop2 > pop1);
    //printf("Área venceu (1)? %d\n", area2 > area1);
    //printf("PIB venceu (1)? %d\n", pib2 > pib1);
    //printf("Qtde Pontos Turísticos venceu (1)? %d\n", ptturist2 > ptturist1);
    //printf("Densidade Populacional venceu (1): %d\n", densidade2 < densidade1);
    //printf("PIB per Capita venceu (1)? %d\n", pibpc2 > pibpc1);
    //printf("Super Poder venceu (1)? %d\n", superPoder2 > superPoder1);

    // MENU INTERATIVO - nível aventureiro 3ª semana
        printf("### JOGO SUPER TRUNFO ###\n\n");
        printf("Escolha uma das opções abaixo\n");
        
    
    //      COMPARAÇÃO CARTAS - semana3
        printf("RESULTADO DA RODADA\n");
        printf("Atributo: Super Poder\n");

    if (superPoder1 > superPoder2){
        printf("A vencedora é a Carta 1! Valor do Super Poder: %.2f\n", superPoder1);
    } else {
        printf("A vencedora é a Carta 2! Valor do Super Poder: %.2f\n", superPoder2);
    }
    return 0;
}
