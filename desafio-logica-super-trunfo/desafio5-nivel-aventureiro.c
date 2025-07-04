#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;

    int opcao;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (letra A a H): ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Nº de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (letra A a H): ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Nº de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo da densidade demográfica
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Menu interativo
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\n=== COMPARAÇÃO ===\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n", nome2);

    switch (opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("PIB:\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pontos2 > pontos1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu! (menor densidade)\n", nome1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu! (menor densidade)\n", nome2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}