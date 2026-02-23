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
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    /* Var da Carta 2 */
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    /* Variaveis de comparacao (1 = Carta 1 vence, 0 = Carta 2 vence) */
    int comparacaoPopulacao;
    int comparacaoArea;
    int comparacaoPib;
    int comparacaoPontosTuristicos;
    int comparacaoDensidadePopulacional;
    int comparacaoPibPerCapita;
    int comparacaoSuperPoder;
    const char *resultadoVitoria[2] = {"Carta 2 venceu", "Carta 1 venceu"};

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
    scanf(" %lu", &populacao1);

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
    scanf(" %lu", &populacao2);

    printf("Area (em km2): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    /* Calculos do nivel intermediario */
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float) populacao1;

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float) populacao2;

    /* Calculo do Super Poder */
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    /* Comparacoes entre as cartas */
    comparacaoPopulacao = populacao1 > populacao2;
    comparacaoArea = area1 > area2;
    comparacaoPib = pib1 > pib2;
    comparacaoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    comparacaoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    comparacaoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    comparacaoSuperPoder = superPoder1 > superPoder2;

    /* Exibicao organizada dos dados cadastrados */
    printf("\n===== CARTAS CADASTRADAS =====\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n===== COMPARACAO DE CARTAS =====\n\n");
    printf("Populacao: %s (%d)\n", resultadoVitoria[comparacaoPopulacao], comparacaoPopulacao);
    printf("Area: %s (%d)\n", resultadoVitoria[comparacaoArea], comparacaoArea);
    printf("PIB: %s (%d)\n", resultadoVitoria[comparacaoPib], comparacaoPib);
    printf("Pontos Turisticos: %s (%d)\n", resultadoVitoria[comparacaoPontosTuristicos], comparacaoPontosTuristicos);
    printf("Densidade Populacional: %s (%d)\n", resultadoVitoria[comparacaoDensidadePopulacional], comparacaoDensidadePopulacional);
    printf("PIB per Capita: %s (%d)\n", resultadoVitoria[comparacaoPibPerCapita], comparacaoPibPerCapita);
    printf("Super Poder: %s (%d)\n", resultadoVitoria[comparacaoSuperPoder], comparacaoSuperPoder);

    return 0;
}