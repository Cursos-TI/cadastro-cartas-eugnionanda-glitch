#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis primeira carta
    char estado1 [3];
    char cod1[4];
    char nmcid1[30];
    int pop1;
    float area1;
    float pib1;
    int ptturist1;

  //Variáveis segunda carta
  char estado2 [3];
  char cod2 [4];
  char nmcid2 [30];
  int pop2;
  float area2;
  float pib2;
  int ptturist2;

  // Área para entrada de dados
  printf ("Estado da primeira carta: ");
  scanf("%d", estado1);

  printf ("Estado da segunda carta: ");
  scanf("%d", estado2);

  printf ("Código da primeira carta: ");
  scanf ("%s", cod1);

  printf ("Código da segunda carta: ");
  scanf ("%s", cod2); 

  printf ("Nome cidade da primeira carta: ");
  scanf("%s", nmcid1);

  printf ("Nome cidade da segunda carta: ");
  scanf("%s", nmcid2);

  printf ("População primeira carta: ");
  scanf ("%2.f",&pop1);

  printf ("População segunda carta: ");
  scanf ("%2.f", pop2);

  printf ("Área primeira carta: ");
  scanf("%2.f", &area1);

  printf ("Área segunda carta: ");
  scanf("%2.f", &area2);
  
  printf ("PIB primeira carta: ");
  scanf ("%2.f", &pib1);

  printf ("PIB segunda carta: ");
  scanf ("%2.f", &pib2);

  printf ("Pontos turísticos primeira carta: ");
  scanf("%d", &ptturist1);

  printf ("Pontos turísticos segunda carta: ");
  scanf("%d", &ptturist2); 

 // Área para exibição dos dados da cidade
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", nmcid1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", ptturist1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", nmcid2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", ptturist2);
return 0;
} 
