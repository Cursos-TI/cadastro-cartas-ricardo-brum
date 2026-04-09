#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Carta 1
    char estado1;
    char codigo1[10], cidade1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1;

  //Carta 2
    char estado2;
    char codigo2[10], cidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;

  // Área para entrada de dados carta 1
    printf("Dados da carta 1\n");
    printf("Digite o Estado(letra): ");
    scanf(" %c" , &estado1);

    printf("Digite o código da carta: ");
    scanf("%s" , &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s" , &cidade1);

    printf("Digite população da cidade: ");
    scanf("%d" , &populacao1);

    printf("Digite a área da cidade em km2: ");
    scanf("%f" , &area1);

    printf("Digite o PIB da cidade(em bilhões): ");
    scanf("%f" , &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d" , &pontosturisticos1);


  // Área para entrada de dados carta 2
    printf("\nDados da carta 2\n");
    printf("Digite o Estado(letra): ");
    scanf(" %c" , &estado2);

    printf("Digite o código da carta: ");
    scanf("%s" , &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s" , &cidade2);

    printf("Digite população da cidade: ");
    scanf("%d" , &populacao2);

    printf("Digite a área da cidade em km2: ");
    scanf("%f" , &area2);

    printf("Digite o PIB da cidade(em bilhões): ");
    scanf("%f" , &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d" , &pontosturisticos2);


  // Área para exibição dos dados da cidade
    printf("\nCarta 1\n");
    printf("Estado: %c\n" , estado1);
    printf("Código: %s\n" , codigo1);
    printf("Nome da Cidade: %s\n" , cidade1);
    printf("População: %d\n" , populacao1);
    printf("Área: %.2f km2\n" , area1);
    printf("PIB: %.2f bilhões de reais\n" , pib1);
    printf("Número de Pontos Turísticos: %d\n" , pontosturisticos1);


    printf("\nCarta 2\n");
    printf("Estado: %c\n" , estado2);
    printf("Código: %s\n" , codigo2);
    printf("Nome da Cidade: %s\n" , cidade2);
    printf("População: %d\n" , populacao2);
    printf("Área: %.2f km2\n" , area2);
    printf("PIB: %.2f bilhões de reais\n" , pib2);
    printf("Número de Pontos Turísticos: %d\n" , pontosturisticos2);

return 0;
} 





