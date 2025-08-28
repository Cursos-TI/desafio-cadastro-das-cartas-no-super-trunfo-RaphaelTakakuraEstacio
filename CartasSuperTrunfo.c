#include <stdio.h>


int main() {
    
    // Variáveis da primeira carta
    char estado;
    char codigo[3];
    char nomeCidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    
    // Variáveis da segunda carta
    char estado2;
    char codigo2[3];
    char nomeCidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Informações da primeira carta
    printf("Digite a letra do estado da primeira carta:\n");
    scanf(" %c", &estado);

    printf("Digite o código do estado da primeira carta:\n");
    scanf(" %s", &codigo);
    getchar();
    
    printf("Digite o nome da cidade da primeira carta:\n");
    fgets(nomeCidade, 20, stdin);

    printf("Digite a população da cidade da primeira carta:\n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade da primeira carta:\n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade da primeira carta:\n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade da primeira carta:\n");
    scanf(" %d", &pontosTuristicos);

    //Informações da segunda carta
    printf("Digite a letra do estado da segunda carta:\n");
    scanf(" %c", &estado2);

    printf("Digite o código do estado da segunda carta:\n");
    scanf(" %s", &codigo2);
    getchar();

    printf("Digite o nome da cidade da segunda carta:\n");
    fgets(nomeCidade2, 20, stdin);

    printf("Digite a população da cidade da segunda carta:\n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade da segunda carta:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade da segunda carta:\n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade da segunda carta:\n");
    scanf(" %d", &pontosTuristicos2);
    
    // Cálculos dependentes de input

    float densidade = (populacao/area);
    float pibpc = (pib/populacao); 
    float densidade2 = (populacao2/area2);
    float pibpc2 = (pib2/populacao2); 
    unsigned long int super = (populacao + area + pib + pontosTuristicos + pibpc + (1/densidade));
    unsigned long int super2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + pibpc2 + (1/densidade2));

    //Exibição da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibpc);

    //Exibição da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibpc2);

    // Confronto das cartas

    printf("Comparação de Cartas:\n");
    printf("Carta 1 (1) X Carta 2 (0)\n");
    printf("População: (%d) venceu\n", (populacao > populacao2));
    printf("Área: (%d) venceu\n", (area > area2));
    printf("PIB: (%d) venceu\n", (pib > pib2));
    printf("Número de Pontos Turísticos: (%d) venceu\n", (pontosTuristicos > pontosTuristicos2));
    printf("Densidade Populacional: (%d) venceu\n", (densidade > densidade2));
    printf("PIB per Capita: (%d) venceu\n", (pibpc > pibpc2));
    printf("Super Poder: (%d) venceu\n\n", (super > super2));

    return 0;
}
