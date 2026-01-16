
    
    // ENTRADA DE DADOS - comentado a partir do nível aventureiro da 3ª semana visto que as variáveis foram inicializadas
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

    //  COMPARAÇÃO CARTAS - semana2 - comentado a partir do nível aventureiro da 3ª semana //
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
#include <stdio.h>

// CARTA 1
char estado1[3] = "MG";
char cod1[5] = "MG01";
char nmcid1[30] = "UBERABA";
unsigned long int pop1 = 356781;
float area1 = 4523957;
float pib1 = 59943;
int ptturist1 = 18;
float densidade1;
float pibpc1;
float superPoder1;

// CARTA 2
char estado2[3] = "MG";
char cod2[5] = "MG02";
char nmcid2[30] = "IPATINGA";
unsigned long int pop2 = 227731;
float area2 = 164884;
float pib2 = 17609176;
int ptturist2 = 15;
float densidade2;
float pibpc2;
float superPoder2;

// Função auxiliar para pegar o valor de um atributo de uma carta
float getValor(int atributo, int carta) {
    if (carta == 1) {
        switch (atributo) {
            case 1: return pop1;
            case 2: return area1;
            case 3: return pib1;
            case 4: return ptturist1;
            case 5: return densidade1;
            case 6: return pibpc1;
            case 7: return superPoder1;
            default: return 0;
        }
    } else {
        switch (atributo) {
            case 1: return pop2;
            case 2: return area2;
            case 3: return pib2;
            case 4: return ptturist2;
            case 5: return densidade2;
            case 6: return pibpc2;
            case 7: return superPoder2;
            default: return 0;
        }
    }
}

int main() {

    // Calcula derivados das cartas
    densidade1 = (float)pop1 / area1;
    pibpc1 = (pib1 * 1000000000.0f) / pop1;
    superPoder1 = pop1 + area1 + pib1 + ptturist1 + pibpc1 + (1.0f / densidade1);

    densidade2 = (float)pop2 / area2;
    pibpc2 = (pib2 * 1000000000.0f) / pop2;
    superPoder2 = pop2 + area2 + pib2 + ptturist2 + pibpc2 + (1.0f / densidade2);

    int opcaoMenu, cartaEscolhida;
    int subMenu1, subMenu2;
    float valor1, valor2;

    printf("### JOGO SUPER TRUNFO ###\n\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Encerrar sessão\n");
    printf("Escolha: ");
    scanf("%d", &opcaoMenu);

    if (opcaoMenu == 2) {
        printf("Encerrando sessão...\n");
        return 0;
    }

    printf("\nEscolha a carta (1 ou 2): ");
    scanf("%d", &cartaEscolhida);

    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n7 - Super Poder\n");
    scanf("%d", &subMenu1);

    printf("\nEscolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &subMenu2);

    if (subMenu1 == subMenu2) {
        printf("Erro: atributos iguais. Reinicie o jogo.\n");
        return 0;
    }

    // Soma da carta escolhida
    valor1 = getValor(subMenu1, cartaEscolhida);
    valor2 = getValor(subMenu2, cartaEscolhida);
    float somaCartaEscolhida = valor1 + valor2;

    // Soma da outra carta
    int outraCarta = (cartaEscolhida == 1) ? 2 : 1;
    float somaOutraCarta = getValor(subMenu1, outraCarta) + getValor(subMenu2, outraCarta);

    printf("\nRESULTADO DA RODADA\n");
    printf("---------------------\n");

    if (somaCartaEscolhida > somaOutraCarta) {
        printf("Carta %d VENCEU!\n", cartaEscolhida);
    } else if (somaCartaEscolhida < somaOutraCarta) {
        printf("Carta %d VENCEU!\n", outraCarta);
    } else {
        printf("EMPATE!\n");
    }

    printf("\nSoma Carta %d: %.2f\n", cartaEscolhida, somaCartaEscolhida);
    printf("Soma Carta %d: %.2f\n", outraCarta, somaOutraCarta);

    return 0;
}
