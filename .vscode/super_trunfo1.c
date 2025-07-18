#include <stdio.h>

int main(){

    // Variedade para a carta 01

    char estado1; 
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Variedade para a carta 02

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

// Cadastrando a Carta 01

printf ("----- Carta 01 -----\n");

printf("Digite o Estado:  ");
scanf("%c", &estado1);

printf("Digite a Código:  ");
scanf("%s", codigo1);

printf("Digite a Cidade:  ");
scanf("%[^\n]", cidade1);

printf("Digite o População:  ");
scanf("%d", &populacao1);

printf("Digite o Área km:  ");
scanf("%f", &area1);

printf("Digite o Pib:  ");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos Turisticos:  ");
scanf("%d", &pontosTuristicos1);

densidade1 = (float)populacao1 / area1; 
pibPerCapita1 = (pib1 * 1000000000) / populacao1;
superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

// Exibindo Carta 01

printf("\n\n --- Carta 01 ---\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %C\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km2\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

// Cadastrando Carta 02

printf("\n\n--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
 
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

// Exibindo Carta 02

printf("\n\n--- Carta 2 Cadastrada ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // A BATALHA FINAL: COMPARAÇÕES
    
    printf("\n\n--- Comparacao de Cartas ---\n");

    // Comparando População: Maior vence
    printf("Populacao: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu (%d)\n", 1);
    } else {
        printf("Carta 2 venceu (%d)\n", 0);
    }

    // Comparando Área: Maior vence
    printf("Area: ");
    if (area1 > area2) {
        printf("Carta 1 venceu (%d)\n", 1);
    } else {
        printf("Carta 2 venceu (%d)\n", 0);
    }

    // Comparando PIB: Maior vence
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu (%d)\n", 1);
    } else {
        printf("Carta 2 venceu (%d)\n", 0);
    }

    // Comparando Pontos Turísticos: Maior vence
    printf("Pontos Turisticos: ");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 venceu (%d)\n", 1);
    } else {
        printf("Carta 2 venceu (%d)\n", 0);
    }

    // Comparando Densidade: MENOR vence
    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("Carta 1 venceu (%d)\n", 1);
    } else {
        printf("Carta 2 venceu (%d)\n", 0);
    }

    // Comparando PIB per Capita: Maior vence
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu (%d)\n", 1);
    } else {
        printf("Carta 2 venceu (%d)\n", 0);
    }

    // Comparando Super Poder: Maior vence
    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu (%d)\n", 1);
    } else {
        printf("Carta 2 venceu (%d)\n", 0);
    }


    return 0;
    
}