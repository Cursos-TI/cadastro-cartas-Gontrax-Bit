#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades


char estado[30], cidade[30], codigo[30];
int populaçao, turismo;
float area, pib;

  // Área para entrada de dados

printf("Qual sera o estado: \n");
scanf("%s", &estado);

printf("Qual sera o codigo: \n");
scanf("%s", &codigo);

printf("Qual sera sua cidade: \n");
scanf("%s", &cidade);

printf("Qual sera a populacao: \n");
scanf("%d", &populaçao);

printf("Qual sera a area: \n");
scanf("%f", &area);

printf("Qual sera o PIB: \n");
scanf("%f", &pib);

printf("Qual a quantidade de pontos turisticos: \n");
scanf("%d", &turismo);


  // Área para exibição dos dados da cidade

printf("Estado: %s\n", estado);
printf("Codigo da carta: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("A Populacao e de: %d habitantes\n", populaçao);
printf("A area e de: %f km2\n", area);
printf("O PIB e de: %f\n", pib);
printf("A quantidade de pontos turisticos e de:%d\n", turismo);

return 0;
} 
