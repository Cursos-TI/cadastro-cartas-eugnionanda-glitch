#include <stdio.h>

int main() {

    // ============================
    //      VARIÁVEIS CARTA 1
    // ============================
    char estado1[2];
    char cod1[3];
    char nmcid1[30];
    unsigned long int pop1;
    float area1;
    float pib1;
    int ptturist1;

    // ============================
    //      VARIÁVEIS CARTA 2
    // ============================
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
    scanf("%lu", &pop1);

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
    scanf("%lu", &pop2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &ptturist2);

    // ============================
    //     NOVAS PROPRIEDADES
    // ============================
    float densidade1 = pop1 / area1;
    float pibpc1 = (pib1 * 1000000000) / pop1;

    float densidade2 = pop2 / area2;
    float pibpc2 = (pib2 * 1000000000) / pop2;

    // ============================
    //      SUPER PODER
    // ============================
    float superPoder1 = (float)pop1 + area1 + pib1 + (float) ptturist1 + pibpc1 + (1 / densidade1);
    float superPoder2 = (float)pop2 + area2 + pib2 + (float) ptturist2 + pibpc2 + (1 / densidade2);

    // ============================
    //      SAÍDA DE DADOS
    // ============================
    printf("\n\n===== DADOS CADASTRADOS =====\n");

    printf("\n--- PRIMEIRA CARTA ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", nmcid1);
    printf("População: %lu\n", pop1);
    printf("Área: %.2fkm2\n", area1);
    printf("PIB: %.2fbilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", ptturist1);
    printf("Densidade populacional: %.2fhab/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibpc1);
    printf("Super Poder: %f\n", superPoder1);

    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", nmcid2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2fkm2\n", area2);
    printf("PIB:R$ %.2fbilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", ptturist2);
    printf("Densidade populacional: %.2fhab/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibpc2);
    printf("Super Poder: %f\n", superPoder2);

    // ============================
    //      COMPARAÇÃO CARTAS
    // ============================
    printf ("\n\n---COMPARAÇÃO DAS CARTAS---\n");
    printf ("\n\n---PRIMEIRA CARTA---\n");
    printf("População venceu (1)? %d\n", pop1 > pop2);
    printf("Área venceu (1)? %d\n", area1 > area2);
    printf("PIB venceu (1)? %d\n", pib1 > pib2);
    printf("Qtde Pontos Turísticos venceu (1)? %d\n", ptturist1 > ptturist2);
    printf("Densidade Populacional venceu (1): %d\n", densidade1 < densidade2);
    printf("PIB per Capita venceu (1)? %d\n", pibpc1 > pibpc2);
    printf("Super Poder venceu (1)? %d\n", superPoder1 > superPoder2);

    printf ("\n\n---SEGUNDA CARTA---\n");
    printf("População venceu (1)? %d\n", pop2 > pop1);
    printf("Área venceu (1)? %d\n", area2 > area1);
    printf("PIB venceu (1)? %d\n", pib2 > pib1);
    printf("Qtde Pontos Turísticos venceu (1)? %d\n", ptturist2 > ptturist1);
    printf("Densidade Populacional venceu (1): %d\n", densidade2 < densidade1);
    printf("PIB per Capita venceu (1)? %d\n", pibpc2 > pibpc1);
    printf("Super Poder venceu (1)? %d\n", superPoder2 > superPoder1);

    return 0;
}
