#include <stdio.h>

int main() {
  // Declaração das variáveis da Carta 1
  char estado1;                
  char codigo1[5];                
  char nome_da_cidade1[50];       
  int populacao1;                 
  float area1;                    
  float pib1;                     
  int pontos_turisticos1; 
  float densidadePopulacional1;
  float pibPercapita1;        

  // Declaração das variáveis da Carta 2
  char estado2;
  char codigo2[5];
  char nome_da_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidadePopulacional2;
  float pibPercapita2;        


  // Exibe o título do jogo
  printf("---------Super Trunfo---------\n");
  printf("Bem-Vindo ao Jogo Super Trunfo\n");

  // Entrada de dados da Carta 1
  printf("\nCarta 1");
  printf("\nInforme a sigla do estado da carta 1: ");
  scanf(" %c", &estado1);

  printf("Informe o codigo da carta 1: ");
  scanf(" %5s", codigo1); 

  printf("Informe o nome da cidade da carta 1: ");
  scanf(" %49s", nome_da_cidade1);

  printf("Informe a populacao da carta 1: ");
  scanf("%d", &populacao1);

  printf("Informe a area da carta 1 (em km²): ");
  scanf("%f", &area1);

  printf("Informe o PIB da carta 1: \n");
  scanf("%f", &pib1);

  printf("Informe o numero de pontos turisticos da carta 1: \n");
  scanf("%d", &pontos_turisticos1);

  printf("informe a densidade populacional da carta 1: \n");
  scanf("%2f", &densidadePopulacional1);

  printf("informe o PIB per capita da carta 1: \n");
  scanf("%2f", &pibPercapita1);

  // Entrada de dados da Carta 2
  printf("\nCarta 2");
  printf("\nInforme a sigla do estado da carta 2: ");
  scanf(" %c", &estado2);

  printf("Informe o codigo da carta 2: \n");
  scanf(" %5s", codigo2);

  printf("Informe o nome da cidade da carta 2: \n");
  scanf(" %49s", nome_da_cidade2);

  printf("Informe a populacao da carta 2: \n");
  scanf("%d", &populacao2);

  printf("Informe a area da carta 2 (em km²): \n");
  scanf("%f", &area2);

  printf("Informe o PIB da carta 2: \n");
  scanf("%f", &pib2);

  printf("Informe o numero de pontos turisticos da carta 2: \n");
  scanf("%d", &pontos_turisticos2);

  printf("informe a densidade populacional da carta 2: \n");
  scanf("%2f", &densidadePopulacional2);

  printf("informe o PIB per capita da carta 2: \n");
  scanf("%2f", &pibPercapita2);

  densidadePopulacional1 = populacao1 / area1;
  pibPercapita1 = pib1 / populacao1;

  densidadePopulacional2 = populacao2 / area2;
  pibPercapita2 = pib2 / populacao2;

  // Exibir os dados da Carta 1
  printf("\n===== Carta 1 =====\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome_da_cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f \n", area1);
  printf("PIB: %.2f \n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
  printf("densidade populacional: %2f\n", densidadePopulacional1);
  printf("PIB Per capita: %2f\n", pibPercapita1);

  // Exibir os dados da Carta 2
  printf("\n===== Carta 2 =====\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f \n", area2);
  printf("PIB: %.2f \n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
  printf("densidade populacional: %2f\n", densidadePopulacional2);
  printf("PIB Per capita: %2f\n", pibPercapita2);


  return 0;
}