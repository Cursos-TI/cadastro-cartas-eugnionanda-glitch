#include <stdio.h>

int main() {

    // Variáveis primeira carta
    char estado1[2];
    char cod1[3];
    char nmcid1[30];
    unsigned long int pop1;
    float area1;
    float pib1;
    int ptturist1;

    // Variáveis segunda carta
    char estado2[2];
    char cod2[3];
    char nmcid2[30];
    unsigned long int pop2;
    float area2;
    float pib2;
    int ptturist2;


    // ============================
    //      ENTRADA DE DADOS
    // ============================

    printf("=== PRIMEIRA CARTA ===\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", cod1);

    printf("Nome da cidade: ");
    scanf("%s", nmcid1);

    printf("População: ");
    scanf("%u", &pop1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &ptturist1);

    printf("\n=== SEGUNDA CARTA ===\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", cod2);

    printf("Nome da cidade: ");
    scanf("%s", nmcid2);

    printf("População: ");
    scanf("%u", &pop2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &ptturist2);

    //CÁLCULOS NOVAS PROPRIEDADES DAS CARTAS

    float densidade1 = pop1 / area1;
    float pibpc1 = (pib1 * 1000000000) / pop1;

    float densidade2 = pop2 / area2;
    float pibpc2 = (pib2 * 1000000000) / pop2;

    // ============================
    //      SAÍDA DE DADOS
    // ============================

    printf("\n\n===== DADOS CADASTRADOS =====\n");

    printf("\n--- PRIMEIRA CARTA ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", nmcid1);
    printf("População: %u\n", pop1);
    printf("Área: %.2fkm2\n", area1);
    printf("PIB: %.2fbilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", ptturist1);
    printf("Densidade populacional: %.2fhab/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibpc1);

    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", nmcid2);
    printf("População: %u\n", pop2);
    printf("Área: %.2fkm2\n", area2);
    printf("PIB:R$ %.2fbilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", ptturist2);
    printf("Densidade populacional: %.2fhab/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibpc2);

    return 0;
}
