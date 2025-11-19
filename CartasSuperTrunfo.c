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
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int npturisco1, npturisco2;
  float densidade1, densidade2;
  float pibcapita1, pibcapita2;
  float superpoder1, superpoder2;
  int resultadoPopulacao;
  int resultadoArea;
  int resultadoPib;
  int resultadoTuristico;
  int resultadoDensidade;
  int resultadoCapita;
  int resultadoSuperPoder;

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

  // Área de cálculos
  densidade1 = (float) populacao1 / area1;
  densidade2 = (float) populacao2 / area2;

  pibcapita1 = (float) (pib1 * 1000000000) / populacao1;
  pibcapita2 = (float) (pib2 * 1000000000) / populacao2;

  superpoder1 = (float) (populacao1 + area1 + pib1 + npturisco1 + pibcapita1 - densidade1);
  superpoder2 = (float) (populacao2 + area2 + pib2 + npturisco2 + pibcapita2 - densidade2);

  //Área das variáveis de comparação
  resultadoPopulacao = (populacao1 > populacao2);
  resultadoArea = (area1 > area2);
  resultadoPib = (pib1 > pib2);
  resultadoTuristico = (npturisco1 > npturisco2);
  resultadoDensidade = (densidade1 < densidade2);
  resultadoCapita = (pibcapita1 > pibcapita2);
  resultadoSuperPoder = (superpoder1 > superpoder2);
   

  // Área para exibição dos dados da cidade
  printf ("Cidade 1:\n");
  printf ("Estado: %s \n", estado1);
  printf ("Código: %s \n", codigo1);
  printf ("Cidade: %s \n", cidade1);
  printf ("População: %u \n", populacao1);
  printf ("Área: %.2f km² \n", area1);
  printf ("PIB: %.2f bilhões de reais \n", pib1);
  printf ("Pontos turisticos: %d \n", npturisco1);
  printf ("Densidade Populacional: %.2f hab/km² \n", densidade1);
  printf ("PIB per capita: %.2f reais \n", pibcapita1);
  printf ("Super Poder: %.2f \n", superpoder1);

  printf ("Cidade 2:\n");
  printf ("Estado: %s \n", estado2);
  printf ("Código: %s \n", codigo2);
  printf ("Cidade: %s \n", cidade2);
  printf ("População: %u \n", populacao2);
  printf ("Área: %.2f km² \n", area2);
  printf ("PIB: %.2f bilhões de reais \n", pib2);
  printf ("Pontos turisticos: %d \n", npturisco2);
  printf ("Densidade Populacional: %.2f hab/km² \n", densidade2);
  printf ("PIB per capita: %.2f reais \n", pibcapita2);
  printf ("Super Poder: %.2f \n", superpoder2);

  // Área de exibição de resultados
  printf ("Comparação de Cartas \n");
  printf ("População: Carta 1 venceu (%d) \n", resultadoPopulacao);
  printf ("Área: Carta 1 venceu (%d) \n", resultadoArea);
  printf ("PIB: Carta 1 venceu (%d) \n", resultadoPib);
  printf ("Pontos Turísticos: Carta 1 venceu (%d) \n", resultadoTuristico);
  printf ("Densidade Populacional: Carta 1 venceu (%d) \n", resultadoDensidade);
  printf ("PIB per Capita: Carta 1 venceu (%d) \n", resultadoCapita);
  printf ("Super Poder: Carta 1 venceu (%d) \n", resultadoSuperPoder);

return 0;


} 
