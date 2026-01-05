#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis primeira carta
    char estado1;
    char cod1[3];
    char nmcid1[30];
    int pop1;
    float area1;
    float pib1;
    int ptturis1;

  //Variáveis segunda carta
  char estado2;
  char cod2 [3];
  char nmcid2 [30];
  int pop2;
  float area2;
  float pib2;
  int ptturist2;

  // Área para entrada de dados
  // Dados primeira carta
  printf ("Carta 1: \n");
  printf ("Estado: %d \n", estado1);
  printf ("Código: %s \n", cod1);
  printf ("Nome da Cidade: %s \n", nmcid1);
  printf ("População: %d \n", pop1);
  printf ("Área: %2.f km2 \n", area1);
  printf ("PIB: %2.f bilhões de reais \n", pib1);
  printf ("Número de pontos turísticos: %d \n", ptturis1);

  // Dados segunda carta
  printf ("\nCarta 2: \n");
  printf ("Estado: %d \n", estado2);
  printf ("Código: %s \n", cod2);
  printf ("Nome da Cidade: %s \n", nmcid2);
  printf ("População: %d \n", pop2);
  printf ("Área: %2.f km2 \n", area2);
  printf ("PIB: %2.f bilhões de reais \n", pib2);
  printf ("Número de pontos turísticos: %d \n", ptturist2);

  // Área para exibição dos dados da cidade


return 0;
} 
