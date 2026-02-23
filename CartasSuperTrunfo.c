#include <stdio.h>

int main() {
	/*
	 * Atributo escolhido para comparação (fixo no código):
	 * 1 = População
	 * 2 = Área
	 * 3 = PIB
	 * 4 = Densidade Populacional
	 * 5 = PIB per capita
	 */
	const int atributoComparacao = 1;

	/* Dados da Carta 1 */
	char estado1[3];
	char codigo1[10];
	char nomeCidade1[100];
	int populacao1;
	float area1;
	float pib1;
	int pontosTuristicos1;
	float densidade1;
	float pibPerCapita1;

	/* Dados da Carta 2 */
	char estado2[3];
	char codigo2[10];
	char nomeCidade2[100];
	int populacao2;
	float area2;
	float pib2;
	int pontosTuristicos2;
	float densidade2;
	float pibPerCapita2;

	/* Variáveis da comparação */
	float valorComparacao1 = 0.0f;
	float valorComparacao2 = 0.0f;
	char nomeAtributo[40] = "";
	int carta1Vence;

	/* Cadastro da Carta 1 */
	printf("=== Cadastro da Carta 1 ===\n");
	printf("Estado (sigla, ex: SP): ");
	scanf(" %2s", estado1);

	printf("Codigo da carta (ex: A01): ");
	scanf(" %9s", codigo1);

	printf("Nome da cidade: ");
	scanf(" %99[^\n]", nomeCidade1);

	printf("Populacao: ");
	scanf(" %d", &populacao1);

	printf("Area (km2): ");
	scanf(" %f", &area1);

	printf("PIB: ");
	scanf(" %f", &pib1);

	printf("Numero de pontos turisticos: ");
	scanf(" %d", &pontosTuristicos1);

	/* Cadastro da Carta 2 */
	printf("\n=== Cadastro da Carta 2 ===\n");
	printf("Estado (sigla, ex: RJ): ");
	scanf(" %2s", estado2);

	printf("Codigo da carta (ex: B02): ");
	scanf(" %9s", codigo2);

	printf("Nome da cidade: ");
	scanf(" %99[^\n]", nomeCidade2);

	printf("Populacao: ");
	scanf(" %d", &populacao2);

	printf("Area (km2): ");
	scanf(" %f", &area2);

	printf("PIB: ");
	scanf(" %f", &pib2);

	printf("Numero de pontos turisticos: ");
	scanf(" %d", &pontosTuristicos2);

	/* Cálculos obrigatórios */
	densidade1 = populacao1 / area1;
	pibPerCapita1 = pib1 / populacao1;

	densidade2 = populacao2 / area2;
	pibPerCapita2 = pib2 / populacao2;

	/* Exibição dos dados das cartas */
	printf("\n===== DADOS DAS CARTAS =====\n\n");

	printf("Carta 1:\n");
	printf("Estado: %s\n", estado1);
	printf("Codigo: %s\n", codigo1);
	printf("Cidade: %s\n", nomeCidade1);
	printf("Populacao: %d\n", populacao1);
	printf("Area: %.2f km2\n", area1);
	printf("PIB: %.2f\n", pib1);
	printf("Pontos turisticos: %d\n", pontosTuristicos1);
	printf("Densidade populacional: %.2f\n", densidade1);
	printf("PIB per capita: %.2f\n", pibPerCapita1);

	printf("\nCarta 2:\n");
	printf("Estado: %s\n", estado2);
	printf("Codigo: %s\n", codigo2);
	printf("Cidade: %s\n", nomeCidade2);
	printf("Populacao: %d\n", populacao2);
	printf("Area: %.2f km2\n", area2);
	printf("PIB: %.2f\n", pib2);
	printf("Pontos turisticos: %d\n", pontosTuristicos2);
	printf("Densidade populacional: %.2f\n", densidade2);
	printf("PIB per capita: %.2f\n", pibPerCapita2);

	/*
	 * Seleção do atributo de comparação usando if/else.
	 * Regra especial: na densidade, menor valor vence.
	 */
	if (atributoComparacao == 1) {
		valorComparacao1 = (float)populacao1;
		valorComparacao2 = (float)populacao2;
		carta1Vence = valorComparacao1 > valorComparacao2;
		sprintf(nomeAtributo, "Populacao");
	} else if (atributoComparacao == 2) {
		valorComparacao1 = area1;
		valorComparacao2 = area2;
		carta1Vence = valorComparacao1 > valorComparacao2;
		sprintf(nomeAtributo, "Area");
	} else if (atributoComparacao == 3) {
		valorComparacao1 = pib1;
		valorComparacao2 = pib2;
		carta1Vence = valorComparacao1 > valorComparacao2;
		sprintf(nomeAtributo, "PIB");
	} else if (atributoComparacao == 4) {
		valorComparacao1 = densidade1;
		valorComparacao2 = densidade2;
		carta1Vence = valorComparacao1 < valorComparacao2;
		sprintf(nomeAtributo, "Densidade Populacional");
	} else {
		valorComparacao1 = pibPerCapita1;
		valorComparacao2 = pibPerCapita2;
		carta1Vence = valorComparacao1 > valorComparacao2;
		sprintf(nomeAtributo, "PIB per capita");
	}

	/* Resultado final da comparação */
	printf("\n===== COMPARACAO DE CARTAS =====\n\n");
	printf("Comparacao de cartas (Atributo: %s):\n\n", nomeAtributo);
	printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, valorComparacao1);
	printf("Carta 2 - %s (%s): %.2f\n\n", nomeCidade2, estado2, valorComparacao2);

	if (carta1Vence) {
		printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
	} else {
		printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
	}

	return 0;
}
