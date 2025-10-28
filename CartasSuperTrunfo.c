#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char code[3];
  char nameState[50];
  char nameCity[50];
  float area;
  float pib;
  int population;
  int turistic_points;
  float population_density;
  float pib_per_capita; 

  // Primeira rodada de entrada de dados:
  // Área para entrada de dados
  printf("Digite o nome do estado: ");
  scanf("%s", nameState);
  printf("Digite o nome da cidade: ");
  scanf("%s", nameCity);
  printf("Digite o código da cidade (A01, A02, B01, etc.): ");
  scanf("%s", code);
  printf("Digite o total da população da cidade: ");
  scanf("%d", &population);
  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area);
  printf("Digite o PIB da cidade (em milhões): ");
  scanf("%f", &pib);
  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &turistic_points);

  // Cálculo de densidade populacional e PIB per capita
  population_density = population / (area * 1000);
  pib_per_capita = (pib * 1000000) / population;

  // Área para exibição dos dados da cidade
  printf("\nDados da cidade:\n" );
  printf("Estado: %s\n", nameState);
  printf("Cidade: %s\n", nameCity);
  printf("Código: %s\n", code);
  printf("População: %d habitantes\n", population);
  printf("Área: %.1f km²\n", area);
  printf("PIB: %.1f milhões\n", pib);
  printf("Pontos Turísticos: %d\n", turistic_points);
  printf("Densidade Populacional: %.1f habitantes/km²\n", population_density);
  printf("PIB per Capita: %.1f milhões\n", pib_per_capita);

  //Segunda rodada de entrada de dados:
  //Entrada de dados
  printf("Digite o nome do estado: ");
  scanf("%s", nameState);
  printf("Digite o nome da cidade: ");
  scanf("%s", nameCity);
  printf("Digite o código da cidade (A01, A02, B01, etc.): ");
  scanf("%s", code);
  printf("Digite o total da população da cidade: ");
  scanf("%d", &population);
  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area);
  printf("Digite o PIB da cidade (em milhões): ");
  scanf("%f", &pib);
  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &turistic_points);

  // Cálculo de densidade populacional e PIB per capita
  population_density = population / (area * 1000);
  pib_per_capita = (pib * 1000000) / population;

  // Área para exibição dos dados da cidade
  printf("\nDados da cidade:\n");
  printf("Estado: %s\n", nameState);
  printf("Cidade: %s\n", nameCity);
  printf("Código: %s\n", code);
  printf("População: %d habitantes\n", population);
  printf("Área: %.1f km²\n", area);
  printf("PIB: %.1f milhões\n", pib);
  printf("Pontos Turísticos: %d\n", turistic_points);
  printf("Densidade Populacional: %.1f habitantes/km²\n", population_density);
  printf("PIB per Capita: %.1f milhões\n", pib_per_capita);

  return 0;
}
