#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[30], estado2[30];
  char codigo1[7];
  char codigo2[7];
  char cidade1[30];
  char cidade2[30];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int npturisco1, npturisco2;

  // Área para entrada de dados
  printf ("Propriedades da cidade 1: \n");
  printf ("Digite o Estado: \n");
  scanf ("%s", estado1);

  printf ("Digite o código: \n");
  scanf ("%s", codigo1);

  printf ("Digite a cidade: \n");
  scanf ("%s", cidade1);

  printf ("Digite a população: \n");
  scanf ("%d", &populacao1);

  printf ("Digite a area: \n");
  scanf ("%f", &area1);

  printf ("Digite o PIB: \n");
  scanf ("%f", &pib1);

  printf ("Digite o numero de pontos turisticos: \n");
  scanf ("%d", &npturisco1);


  printf ("Propriedades da cidade 2: \n");
  printf ("Digite o Estado: \n");
  scanf ("%s", estado2);

  printf ("Digite o código: \n");
  scanf ("%s", codigo2);

  printf ("Digite a cidade: \n");
  scanf ("%s", cidade2);

  printf ("Digite a população: \n");
  scanf ("%d", &populacao2);

  printf ("Digite a area: \n");
  scanf ("%f", &area2);

  printf ("Digite o PIB: \n");
  scanf ("%f", &pib2);

  printf ("Digite o numero de pontos turisticos: \n");
  scanf ("%d", &npturisco2);

  // Área para exibição dos dados da cidade
  printf ("Cidade 1:\n");
  printf ("Estado: %s \n", estado1);
  printf ("Código: %s \n", codigo1);
  printf ("Cidade: %s \n", cidade1);
  printf ("População: %d \n", populacao1);
  printf ("Área: %f km² \n", area1);
  printf ("PIB: %f bilhões de reais \n", pib1);
  printf ("Pontos turisticos: %d \n", npturisco1);

  printf ("Cidade 2:\n");
  printf ("Estado: %s \n", estado2);
  printf ("Código: %s \n", codigo2);
  printf ("Cidade: %s \n", cidade2);
  printf ("População: %d \n", populacao2);
  printf ("Área: %f km² \n", area2);
  printf ("PIB: %f bilhões de reais \n", pib2);
  printf ("Pontos turisticos: %d \n", npturisco2);


return 0;
} 
