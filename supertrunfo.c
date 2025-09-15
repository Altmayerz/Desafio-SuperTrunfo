#include <stdio.h>

int main() {
    int carta;
    char estado[20];
    char codigo[10];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Digite o número da cidade: ");
            scanf("%d", &carta);
    printf("Digite o estado: ");
            scanf("%s", estado);
    printf("Digite o código da cidade: ");
            scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", nome);
    printf("População: ");
            scanf("%d", &populacao);
    printf("Tamanho da área: ");
            scanf("%f", &area);
    printf("PIB da cidade: ");
            scanf("%f", &pib);
    printf("Pontos turísticos: ");
            scanf("%d", &pontos);
    printf("\n");
    printf("\n");

    int card;
    char state[20];
    char code[10];
    char name[30];
    int population;
    float AREA;
    float PIB;
    int point;

    printf("Digite o número da cidade: ");
            scanf("%d", &card);
    printf("Digite o estado: ");
            scanf("%s", state);
    printf("Digite o código da cidade: ");
            scanf("%s", code);
    printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", name);
    printf("População: ");
            scanf("%d", &population);
    printf("Tamanho da área: ");
            scanf("%f", &AREA);
    printf("PIB da cidade: ");
            scanf("%f", &PIB);
    printf("Pontos turísticos: ");
            scanf("%d", &point);
    printf("\n");
    printf("\n");
    

    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("\n");
    printf("\n");
    printf("Carta: %d\n", card);
    printf("Estado: %s\n", state);
    printf("Código: %s\n", code);
    printf("Nome: %s\n", name);
    printf("População X: %d\n", population);
    printf("Área: %.2fkm²\n", AREA);
    printf("PIB da cidade: %.2f bilhões de reais\n", PIB);
    printf("Pontos turísticos: %d\n", point);

    return 0;
}
