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

  // Declaração das variáveis da Carta 2
  char estado2;
  char codigo2[5];
  char nome_da_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  // …ea: %.2f \n", area1);
  printf("PIB: %.2f \n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

  // Exibir os dados da Carta 2
  printf("\n===== Carta 2 =====\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f \n", area2);
  printf("PIB: %.2f \n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

  return 0;
}
