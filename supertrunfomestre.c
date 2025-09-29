#include <stdio.h>

int main() {
    int carta1, carta2;
    char estado1[20], estado2[20];
    char codigo1[10], codigo2[10];
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // DADOS CARTA 1
    printf("Digite o número da cidade: ");
    scanf("%d", &carta1);
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Tamanho da área: ");
    scanf("%f", &area1);
    printf("PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);
    printf("\n\n");

    // DADOS CARTA 2
    printf("Digite o número da cidade: ");
    scanf("%d", &carta2);
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Tamanho da área: ");
    scanf("%f", &area2);
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);
    printf("\n\n");

    // Cálculos
    float PPC1 = pib1 / populacao1;
    float PPC2 = pib2 / populacao2;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float superpoder1 = (float) populacao1 + area1 + pib1 + pontos1 + (area1 / populacao1) + PPC1;
    float superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + (area2 / populacao2) + PPC2;

    //RESUMO DOS DADOS INSERIDOS NA CARTA 1
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código da cidade: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("PIB per capita:  %.2f\n", pib1 / populacao1);
    printf("Densidade populacional:  %.2f\n", populacao1 / area1);
    printf("\n");
    printf("\n");
    //RESUMO DADOS INSERIDOS CARTA 2
            printf("Carta: %d\n", carta2);
            printf("Estado: %s\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Nome: %s\n", nome2);
            printf("População X: %d\n", populacao2);
            printf("Área: %.2fkm²\n", area2);
            printf("PIB da cidade: %.2f bilhões de reais\n", pib2);
            printf("Pontos turísticos: %d\n", pontos2);
            printf("PIB per capita:  %.2f\n", pib2 / populacao2);
            printf("Densidade populacional:  %.2f\n", populacao2 / area2);
    printf("\n");
        printf("\n");
            printf("Duelo de cartas: \n");
                printf("População: carta 1 venceu: %d\n", populacao1 > populacao2);
                    printf("Área: carta 1 venceu: %d\n", area1 > area2);
                        printf("PIB: carta 1 venceu: %d\n", pib1 > pib2);
                    printf("Pontos Turisticos: carta 1 venceu: %d\n", pontos1 > pontos2);
                printf("Densidade populacional: carta 1 venceu: %d\n",densidade1 > densidade2);
            printf("PIB per capita: carta 1 venceu: %d\n", PPC1 > PPC2);
    printf("\n");
    printf("\n");

    printf("O poder da carta 1 é: %.5f\n", superpoder1);
    printf("O poder da carta 2 é: %.5f\n", superpoder2);


    return 0;
}
