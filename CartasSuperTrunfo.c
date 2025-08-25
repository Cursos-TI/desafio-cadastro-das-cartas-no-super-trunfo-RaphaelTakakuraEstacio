#include <stdio.h>


int main() {
    
    // Variáveis da primeira carta
    char estado;
    char codigo[3];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    
    // Variáveis da segunda carta
    char estado2;
    char codigo2[3];
    char nomeCidade2[20];
    int populacao2;
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
    
    //Exibição da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    //Exibição da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
