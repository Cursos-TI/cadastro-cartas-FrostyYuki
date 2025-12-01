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
  int primeiroAtributo, segundoAtributo;
  float valor1Carta1, valor1Carta2, valor2Carta1, valor2Carta2;
  float resultadoCarta1, resultadoCarta2;

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

  //Área do menu interativo de escolha de 2 atributos
  printf ("\nEscolha o primeiro atributo:\n");
  printf ("1. População\n");
  printf ("2. Área\n");
  printf ("3. PIB\n");
  printf ("4. Número de pontos turísticos\n");
  printf ("5. Densidade demográfica\n");
  printf ("Digite o número: ");
  scanf ("%d", &primeiroAtributo);

  printf ("\nEscolha o segundo atributo (deve ser diferente do primeiro):\n");
  printf ("1. População\n");
  printf ("2. Área\n");
  printf ("3. PIB\n");
  printf ("4. Número de pontos turísticos\n");
  printf ("5. Densidade demográfica\n");
  printf ("Digite o número: ");
  scanf ("%d", &segundoAtributo);

  //Exibição das comparações dos atributos
  printf ("\nPaís 1: %s - País 2: %s \n", pais1, pais2);

  if (primeiroAtributo == segundoAtributo){
    printf ("Atributos iguais! Escolha atributos diferentes!\n");
  } else if ((primeiroAtributo >= 1 && primeiroAtributo <=5) && (segundoAtributo >=1 && segundoAtributo <=5))
  {
      //Lógica da escolha dos atributos pra cada carta
      switch (primeiroAtributo)
    {
      case 1:
        printf("Atributo escolhido: População\n");
        printf("População: %s(%lu) - %s(%lu)\n", pais1, populacao1, pais2, populacao2);
        valor1Carta1 = (float)populacao1;
        valor1Carta2 = (float)populacao2;
        break;

      case 2:
        printf("Atributo escolhido: Área\n");
        printf("Área: %s(%.2f) - %s(%.2f)\n", pais1, area1, pais2, area2);
        valor1Carta1 = area1;
        valor1Carta2 = area2;
        break;

      case 3:
        printf("Atributo escolhido: PIB\n");
        printf("PIB: %s(%.2f) - %s(%.2f)\n", pais1, pib1, pais2, pib2);
        valor1Carta1 = pib1;
        valor1Carta2 = pib2;
        break;

      case 4:
        printf("Atributo escolhido: Número de Pontos Turísticos\n");
        printf("Pontos Turísticos: %s(%d) - %s(%d)\n", pais1, npturisco1, pais2, npturisco2);
        valor1Carta1 = (float)npturisco1;
        valor1Carta2 = (float)npturisco2;
        break;

      case 5:
        printf("Atributo escolhido: Densidade demográfica\n");
        printf("Densidade demográfica: %s(%.2f) - %s(%.2f)\n", pais1, densidade1, pais2, densidade2);
        valor1Carta1 = -densidade1;
        valor1Carta2 = -densidade2;
        break;
    }

      switch (segundoAtributo)
    {
      case 1:
        printf("Atributo escolhido: População\n");
        printf("População: %s(%lu) - %s(%lu)\n", pais1, populacao1, pais2, populacao2);
        valor2Carta1 = (float)populacao1;
        valor2Carta2 = (float)populacao2;
        break;

      case 2:
        printf("Atributo escolhido: Área\n");
        printf("Área: %s(%.2f) - %s(%.2f)\n", pais1, area1, pais2, area2);
        valor2Carta1 = area1;
        valor2Carta2 = area2;
        break;

      case 3:
        printf("Atributo escolhido: PIB\n");
        printf("PIB: %s(%.2f) - %s(%.2f)\n", pais1, pib1, pais2, pib2);
        valor2Carta1 = pib1;
        valor2Carta2 = pib2;
        break;

      case 4:
        printf("Atributo escolhido: Número de Pontos Turísticos\n");
        printf("Pontos Turísticos: %s(%d) - %s(%d)\n", pais1, npturisco1, pais2, npturisco2);
        valor2Carta1 = (float)npturisco1;
        valor2Carta2 = (float)npturisco2;
        break;

      case 5:
        printf("Atributo escolhido: Densidade demográfica\n");
        printf("Densidade demográfica: %s(%.2f) - %s(%.2f)\n", pais1, densidade1, pais2, densidade2);
        valor2Carta1 = -densidade1;
        valor2Carta2 = -densidade2;
        break;
    }

      //Soma dos atributos das cartas
      resultadoCarta1 = valor1Carta1 + valor2Carta1;
      resultadoCarta2 = valor1Carta2 + valor2Carta2;
      printf("Soma dos atributos da Carta 1(%s): %.2f \n", pais1, resultadoCarta1);
      printf("Soma dos atributos da Carta 2(%s): %.2f \n", pais2, resultadoCarta2);

      //Resultado final
      if (resultadoCarta1 == resultadoCarta2){
        printf("Resultado: Empatou!\n");
      } else if (resultadoCarta1 > resultadoCarta2){
        printf("Resultado: Carta 1(%s) Venceu!\n", pais1);
      } else{
        printf("Resultado: Carta 2(%s) Venceu!\n", pais2);
      }


  } else{
    printf("Opção Inválida! Escolha atributos entre 1 e 5!\n");
  }
 
return 0;


} 
