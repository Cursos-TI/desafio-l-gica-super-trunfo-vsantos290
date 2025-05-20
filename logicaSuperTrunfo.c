#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado[3];
    char codigo[10];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
} Carta;

int main() {
    // Declaração das duas cartas
    Carta carta1, carta2;

    printf("=== Cadastro das Cartas Super Trunfo ===\n\n");

    // Entrada de dados da Carta 1
    printf("---- Carta 1 ----\n");
    printf("Estado (sigla): ");
    scanf(" %2s", carta1.estado);
    printf("Código da carta: ");
    scanf(" %9s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada de dados da Carta 2
    printf("\n---- Carta 2 ----\n");
    printf("Estado (sigla): ");
    scanf(" %2s", carta2.estado);
    printf("Código da carta: ");
    scanf(" %9s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculo dos atributos derivados
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Exibição das cartas
    printf("\n=== Informações das Cartas ===\n");

    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s (%s)\n", carta1.cidade, carta1.estado);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: R$ %.2f\n", carta1.pibPerCapita);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s (%s)\n", carta2.cidade, carta2.estado);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: R$ %.2f\n", carta2.pibPerCapita);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    // ================================
    // Atributo escolhido: População
    // ================================
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("%s (%s): %lu habitantes\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("%s (%s): %lu habitantes\n", carta2.cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
