#include <stdio.h>

int main() {

    // Variáveis primeira carta
    char estado1[2];
    char cod1[3];
    char nmcid1[30];
    int pop1;
    float area1;
    float pib1;
    int ptturist1;

    // Variáveis segunda carta
    char estado2[2];
    char cod2[3];
    char nmcid2[30];
    int pop2;
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
    scanf("%d", &pop1);

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
    scanf("%d", &pop2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &ptturist2);


    // ============================
    //      SAÍDA DE DADOS
    // ============================

    printf("\n\n===== DADOS CADASTRADOS =====\n");

    printf("\n--- PRIMEIRA CARTA ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", nmcid1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", ptturist1);

    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", nmcid2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", ptturist2);

    return 0;
}
