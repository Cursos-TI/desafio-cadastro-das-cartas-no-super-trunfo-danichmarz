#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    unsigned long populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos auxiliares
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Cálculo do Super Poder aprimorado
    superPoder1 = populacao1 * 0.3f + area1 * 0.1f + pib1 * 0.3f + pontos1 * 0.1f + pibPerCapita1 * 0.15f + (1.0f / densidade1) * 0.05f;
    superPoder2 = populacao2 * 0.3f + area2 * 0.1f + pib2 * 0.3f + pontos2 * 0.1f + pibPerCapita2 * 0.15f + (1.0f / densidade2) * 0.05f;

    // Exibir dados completos
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
           estado1, codigo1, nome1, populacao1, area1, pib1, pontos1, densidade1, pibPerCapita1, superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
           estado2, codigo2, nome2, populacao2, area2, pib2, pontos2, densidade2, pibPerCapita2, superPoder2);

    // Decisão final
    printf("\n=== Resultado Final ===\n");
    if (superPoder1 > superPoder2)
        printf("A Carta 1 (%s) é a vencedora geral!\n", nome1);
    else if (superPoder2 > superPoder1)
        printf("A Carta 2 (%s) é a vencedora geral!\n", nome2);
    else
        printf("Empate geral entre as cartas!\n");

    return 0;
}