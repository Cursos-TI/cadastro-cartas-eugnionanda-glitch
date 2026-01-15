#include <stdio.h>

char* atributoEscolhido(int subOpcaoMenu) {
    switch (subOpcaoMenu) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        case 6: return "PIB per Capita";
        case 7: return "Super Poder";
        default: return "Atributo Inválido";
    }
}

int main() {

    // CARTA 1 - inicializadas no nível aventureiro da 3ª semana //
        char estado1[] = "MG";
        char cod1[] = "MG01";
        char nmcid1[] = "UBERABA";
        unsigned long int pop1 = 356781;
        float area1 = 4523957;
        float pib1 = 59943;
        int ptturist1 = 18;
        float densidade1 = pop1 / area1;
        float pibpc1 = (pib1 * 1000000000) / pop1;
        float superPoder1 = (float)pop1 + area1 + pib1 + (float) ptturist1 + pibpc1 + (1 / densidade1);
    
   // CARTA 2 - inicializadas no nível aventureiro da 3ª semana //
        char estado2[3] = "MG";
        char cod2[4] = "MG02";
        char nmcid2[30] = "IPATINGA";
        unsigned long int pop2 = 227731;
        float area2 = 164884;
        float pib2 = 17609176;
        int ptturist2 = 15;
        float densidade2 = pop2 / area2;
        float pibpc2 = (pib2 * 1000000000) / pop2;
        float superPoder2 = (float)pop2 + area2 + pib2 + (float) ptturist2 + pibpc2 + (1 / densidade2);
    
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

            int opcaoMenu;
            int subOpcaoMenu;
            float valor1, valor2;

        printf("### JOGO SUPER TRUNFO ###\n\n");
        printf("Regras do Jogo:\n");
                printf("Cada jogador escolhe uma carta e seleciona um atributo para comparar.\n");
                printf("A carta com o maior valor no atributo selecionado vence a rodada. Exceto o atributo DENSIDADE DEMOGRÁFICA, que terá como vencedor o menor valor entre as cartas.\n\n");
        printf("Escolha uma das opções abaixo\n");
        printf("1 - Iniciar Jogo\n");
        printf("2 - Encerrar sessão\n");
        printf("Digite a opção escolhida: ");
        scanf("%d", &opcaoMenu);
        printf("\n");
       
        switch (opcaoMenu) {
            case 1:
                printf("Iniciando o jogo...\n\n");
                printf("Escolha um dos atributos abaixo\n\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("3 - PIB\n");
                printf("4 - Pontos Turísticos\n");
                printf("5 - Densidade Demográfica\n");
                printf("6 - PIB per Capita\n");
                printf("7 - Super Poder\n");
                printf("Digite o número correspondente ao atributo escolhido: ");
                scanf("%d", &subOpcaoMenu);
                printf("Atributo escolhido: %s\n\n", atributoEscolhido(subOpcaoMenu));
                break;
            case 2:
                printf("Encerrando sessão. Até a próxima!\n");
                return 0;
            default:
                printf("Opção inválida. Encerrando sessão.\n");
                return 0;
        }
        switch (subOpcaoMenu)
        {
        case 1:
            valor1 = pop1 ; valor2 = pop2;
        case 2:
            valor1 = area1 ; valor2 = area2;
        case 3:
            valor1 = pib1 ; valor2 = pib2;
        case 4:
            valor1 = ptturist1 ; valor2 = ptturist2;
        case 5:
            valor1 = densidade1 ; valor2 = densidade2;
        case 6:
            valor1 = pibpc1 ; valor2 = pibpc2;
        case 7:
            valor1 = superPoder1 ; valor2 = superPoder2;
            break;
        }

        // COMPARAÇÃO CARTAS - semana3
        printf("RESULTADO DA RODADA\n");
        printf("---------------------\n");
        
    if (
        (subOpcaoMenu == 1 && pop1 > pop2) ||
        (subOpcaoMenu == 2 && area1 > area2) ||
        (subOpcaoMenu == 3 && pib1 > pib2) ||
        (subOpcaoMenu == 4 && ptturist1 > ptturist2) ||
        (subOpcaoMenu == 5 && densidade1 < densidade2) ||
        (subOpcaoMenu == 6 && pibpc1 > pibpc2) ||
        (subOpcaoMenu == 7 && superPoder1 > superPoder2)
    ) {
        printf("Resultado: Carta 1 VENCEU!\n");
        printf("Carta 1: %s - %s - %s\n", estado1, cod1, nmcid1);
        printf("Atributo: %s - Valor: %.2f\n\n", atributoEscolhido(subOpcaoMenu), valor1);
        printf("Carta 2: %s - %s - %s\n", estado2, cod2, nmcid2);
        printf("Atributo: %s — Valor: %.2f\n\n", atributoEscolhido(subOpcaoMenu), valor2);

    } else if (
        (subOpcaoMenu == 1 && pop2 > pop1) ||
        (subOpcaoMenu == 2 && area2 > area1) ||
        (subOpcaoMenu == 3 && pib2 > pib1) ||
        (subOpcaoMenu == 4 && ptturist2 > ptturist1) ||
        (subOpcaoMenu == 5 && densidade2 < densidade1) ||
        (subOpcaoMenu == 6 && pibpc2 > pibpc1) ||
        (subOpcaoMenu == 7 && superPoder2 > superPoder1)
    ) {
        printf("Resultado: Carta 2 VENCEU!\n");
        printf("Carta 2: %s - %s - %s\n", estado2, cod2, nmcid2);
        printf("Atributo: %s — Valor: %.2f\n\n", atributoEscolhido(subOpcaoMenu), valor2);
        printf("Carta 1: %s - %s - %s\n", estado1, cod1, nmcid1);
        printf("Atributo: %s — Valor: %.2f\n\n", atributoEscolhido(subOpcaoMenu), valor1);

    } else {
        printf("Resultado: EMPATE!\n");
        printf("Atributo: %s — Valor Carta 1: %.2f\n", atributoEscolhido(subOpcaoMenu), valor1);
        printf("Atributo: %s — Valor Carta 2: %.2f\n", atributoEscolhido(subOpcaoMenu), valor2);
    }
}
