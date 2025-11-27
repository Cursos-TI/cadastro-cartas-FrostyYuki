#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
  // Área para definição das variáveis para armazenar as propriedades dos países
  char pais1[30], pais2[30];
  char codigo1[7];
  char codigo2[7];
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
  int escolhaAtributo;

  // Área para entrada de dados
  printf ("Propriedades do País 1: \n");
  printf ("Digite o País: \n");
  scanf ("%s", pais1);

  printf ("Digite o código: \n");
  scanf ("%s", codigo1);

  printf ("Digite a população: \n");
  scanf ("%lu", &populacao1);

  printf ("Digite a area: \n");
  scanf ("%f", &area1);

  printf ("Digite o PIB: \n");
  scanf ("%f", &pib1);

  printf ("Digite o numero de pontos turisticos: \n");
  scanf ("%d", &npturisco1);


  printf ("Propriedades do País 2: \n");
  printf ("Digite o País: \n");
  scanf ("%s", pais2);

  printf ("Digite o código: \n");
  scanf ("%s", codigo2);

  printf ("Digite a população: \n");
  scanf ("%lu", &populacao2);

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
   

  // Área para exibição dos dados do País
  printf ("País 1:\n");
  printf ("País: %s \n", pais1);
  printf ("Código: %s \n", codigo1);
  printf ("População: %lu \n", populacao1);
  printf ("Área: %.2f km² \n", area1);
  printf ("PIB: %.2f bilhões de reais \n", pib1);
  printf ("Pontos turisticos: %d \n", npturisco1);
  printf ("Densidade Populacional: %.2f hab/km² \n", densidade1);
  printf ("PIB per capita: %.2f reais \n", pibcapita1);
  printf ("Super Poder: %.2f \n", superpoder1);

  printf ("País 2:\n");
  printf ("País: %s \n", pais2);
  printf ("Código: %s \n", codigo2);
  printf ("População: %lu \n", populacao2);
  printf ("Área: %.2f km² \n", area2);
  printf ("PIB: %.2f bilhões de reais \n", pib2);
  printf ("Pontos turisticos: %d \n", npturisco2);
  printf ("Densidade Populacional: %.2f hab/km² \n", densidade2);
  printf ("PIB per capita: %.2f reais \n", pibcapita2);
  printf ("Super Poder: %.2f \n", superpoder2);

  //Área do menu interativo
  printf ("\nEscolha o atributo a ser comparado:\n");
  printf ("1. População\n");
  printf ("2. Área\n");
  printf ("3. PIB\n");
  printf ("4. Número de pontos turísticos\n");
  printf ("5. Densidade demográfica\n");
  printf ("Digite o número: ");
  scanf ("%d", &escolhaAtributo);

  //Exibição das comparações dos atributos
  switch (escolhaAtributo)
  {
  case 1:
    printf ("\nPaís 1: %s - País 2: %s \n", pais1, pais2);
    printf ("Atributo: População \n");
    printf ("%s: %lu - %s: %lu \n", pais1, populacao1, pais2, populacao2);
    if (populacao1 > populacao2)
    {
      printf ("Carta 1: %s - Venceu! \n", pais1);
    } else if (populacao1 < populacao2)
    {
      printf ("Carta 2: %s - Venceu! \n", pais2);
    } else  
    {
      printf ("As cartas empataram! \n");
    }
    break;

  case 2:
    printf ("\nPaís 1: %s - País 2: %s \n", pais1, pais2);
    printf ("Atributo: Área \n");
    printf ("%s: %.2f - %s: %.2f \n", pais1, area1, pais2, area2);
    if (area1 > area2)
    {
      printf ("Carta 1: %s - Venceu! \n", pais1);
    } else if (area1 < area2)
    {
      printf ("Carta 2: %s - Venceu! \n", pais2);
    } else  
    {
      printf ("As cartas empataram! \n");
    }
    break;

  case 3:
    printf ("\nPaís 1: %s - País 2: %s \n", pais1, pais2);
    printf ("Atributo: PIB \n");
    printf ("%s: %.2f - %s: %.2f \n", pais1, pib1, pais2, pib2);
    if (pib1 > pib2)
    {
      printf ("Carta 1: %s - Venceu! \n", pais1);
    } else if (pib1 < pib2)
    {
      printf ("Carta 2: %s - Venceu! \n", pais2);
    } else  
    {
      printf ("As cartas empataram! \n");
    }
    break;

  case 4:
    printf ("\nPaís 1: %s - País 2: %s \n", pais1, pais2);
    printf ("Atributo: Número de pontos turísticos \n");
    printf ("%s: %d - %s: %d \n", pais1, npturisco1, pais2, npturisco2);
    if (npturisco1 > npturisco2)
    {
      printf ("Carta 1: %s - Venceu! \n", pais1);
    } else if (npturisco1 < npturisco2)
    {
      printf ("Carta 2: %s - Venceu! \n", pais2);
    } else  
    {
      printf ("As cartas empataram! \n");
    }
    break;

  case 5:
    printf ("\nPaís 1: %s - País 2: %s \n", pais1, pais2);
    printf ("Atributo: Densidade Demográfica \n");
    printf ("%s: %.2f - %s: %.2f \n", pais1, densidade1, pais2, densidade2);
    if (densidade2 > densidade1)
    {
      printf ("Carta 1: %s - Venceu! \n", pais1);
    } else if (densidade2 < densidade1)
    {
      printf ("Carta 2: %s - Venceu! \n", pais2);
    } else  
    {
      printf ("As cartas empataram! \n");
    }
    break;

  default:
    printf ("\nOpção Inválida \n");
    break;
  }

return 0;


} 
