#include <stdio.h>

// Função principal
int main() {
    // Variáveis da Carta 1
    char estado1[3], codigo1[10], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Variáveis da Carta 2
    char estado2[3], codigo2[10], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Variáveis derivadas (calculadas)
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // === Cadastro da Carta 1 ===
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // === Cadastro da Carta 2 ===
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // === Cálculos automáticos ===
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // === Exibição dos dados e resultado ===
    printf("\n=== COMPARAÇÃO DE CARTAS (Atributo: População) ===\n");

    printf("\nCarta 1 - %s (%s): %d habitantes", cidade1, estado1, populacao1);
    printf("\nCarta 2 - %s (%s): %d habitantes", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\n\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\n\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\n\nResultado: Empate!\n");
    }

    return 0;
}