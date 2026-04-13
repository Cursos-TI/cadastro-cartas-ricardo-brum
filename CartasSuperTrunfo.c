#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Carta 1
    char estado1;
    char codigo1[10], cidade1[50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1, pib1, densidade1, pibpercapita1, superpoder1;

  //Carta 2
    char estado2;
    char codigo2[10], cidade2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;

  //Comparação entre cartas
    int resultadopopulacao, resultadopontosturisticos, resultadoarea, resultadopib, resultadodensidade, resultadopibpercapita, resultadosuperpoder;

  // Área para entrada de dados carta 1
    printf("Dados da carta 1\n");
    printf("Digite o Estado(letra): ");
    scanf(" %c" , &estado1);

    printf("Digite o código da carta: ");
    scanf("%s" , &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s" , &cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu" , &populacao1);

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

    printf("Digite a população da cidade: ");
    scanf("%lu" , &populacao2);

    printf("Digite a área da cidade em km2: ");
    scanf("%f" , &area2);

    printf("Digite o PIB da cidade(em bilhões): ");
    scanf("%f" , &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d" , &pontosturisticos2);

  //Cálculo da densidade populacional, pib per capita e do super poder
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000 ) / (float)populacao1;
    pibpercapita2 = (pib2 * 1000000000 ) / (float)populacao2;

    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + 1 / densidade1;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + 1 / densidade2;

    resultadopopulacao = populacao1 > populacao2;
    resultadopontosturisticos = pontosturisticos1 > pontosturisticos2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadodensidade = densidade1 < densidade2;
    resultadopibpercapita = pibpercapita1 > pibpercapita2;
    resultadosuperpoder = superpoder1 > superpoder2;


  // Área para exibição dos dados da cidade
    printf("\nCarta 1\n");
    printf("Estado: %c\n" , estado1);
    printf("Código: %s\n" , codigo1);
    printf("Nome da Cidade: %s\n" , cidade1);
    printf("População: %lu\n" , populacao1);
    printf("Área: %.2f km2\n" , area1);
    printf("PIB: %.2f bilhões de reais\n" , pib1);
    printf("Número de Pontos Turísticos: %d\n" , pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n" , densidade1);
    printf("PIB per Capita: %.2f reais\n" , pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);


    printf("\nCarta 2\n");
    printf("Estado: %c\n" , estado2);
    printf("Código: %s\n" , codigo2);
    printf("Nome da Cidade: %s\n" , cidade2);
    printf("População: %lu\n" , populacao2);
    printf("Área: %.2f km2\n" , area2);
    printf("PIB: %.2f bilhões de reais\n" , pib2);
    printf("Número de Pontos Turísticos: %d\n" , pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n" , densidade2);
    printf("PIB per Capita: %.2f reais\n" , pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);


    printf("\n-----Comparação dos atributos entre as 2 cartas-----\n");
    printf("A população da carta 1 é maior que a população da carta 2: %d\n", resultadopopulacao);
    printf("A área da carta 1 é maior que a área da carta 2: %d\n", resultadoarea);
    printf("O PIB da carta 1 é maior que o PIB da carta 2: %d\n", resultadopib);
    printf("O número de pontos turísticos da carta 1 é maior que o número de pontos turísticos da carta 2: %d\n", resultadopontosturisticos);
    printf("A densidade populacional da carta 1 é menor que a densidade populacional da carta 2: %d\n", resultadodensidade);
    printf("O PIB per capita da carta 1 é maior que o PIB per capita da carta 2: %d\n", resultadopibpercapita);
    printf("O Super Poder da carta 1 é maior que o Super Poder da carta 2: %d\n", resultadosuperpoder);

return 0;
} 





