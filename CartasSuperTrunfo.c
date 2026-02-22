#include <stdio.h>

int main() {

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das cartas
    // Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


    /* Auxiliares para entrada do estado */
    char entradaEstado1[3];
    char entradaEstado2[3];

    /* Var da Carta 1 */
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    /* Var da Carta 2 */
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    /* Entrada de dados da Carta 1 */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A a H): ");
    scanf(" %2s", entradaEstado1);
    estado1 = entradaEstado1[0];

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area (em km2): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    /* Entrada de dados da Carta 2 */
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A a H): ");
    scanf(" %2s", entradaEstado2);
    estado2 = entradaEstado2[0];

    printf("Codigo da Carta (ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area (em km2): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    /* Calculos do nivel intermediario */
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    /* Exibicao organizada dos dados cadastrados */
    printf("\n===== CARTAS CADASTRADAS =====\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}