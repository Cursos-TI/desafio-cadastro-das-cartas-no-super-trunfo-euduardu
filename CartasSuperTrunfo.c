#include <stdio.h>

int main() {
    int NrPontosTuristicos, NrPontosTuristicos2;
    float areakm, Pib, areakm2, Pib2;
    unsigned long int populacao, populacao2;
    char NomedaCidade[50], NomedaCidade2[50];
    char CodigoCarta[50], CodigoCarta2[50];
    char Estado[50], Estado2[50];

    float DensidadePopulacional, DensidadePopulacional2;   
    float Pibpercapita, Pibpercapita2;  
    float inversoDensidadePopulacional, inversoDensidadePopulacional2;  
    float superpoder1, superpoder2;

    printf("Insira dados da carta 1:\n");
    printf("Qual nome da cidade: \n");
    scanf("%s", NomedaCidade);
    printf("Qual a população: \n");
    scanf("%lu", &populacao);
    printf("Qual a área km2: \n");
    scanf("%f", &areakm);
    printf("PIB: \n");
    scanf("%f", &Pib);
    printf("Código: \n");
    scanf("%s", CodigoCarta);
    printf("Quantos pontos turísticos tem: \n");
    scanf("%d", &NrPontosTuristicos);
    printf("Qual Estado: \n");
    scanf("%s", Estado);

    DensidadePopulacional = (float)populacao / areakm;
    Pibpercapita = Pib / (float)populacao;
    inversoDensidadePopulacional = 1.0f / DensidadePopulacional;
    superpoder1 = (float)populacao + areakm + Pib + NrPontosTuristicos + Pibpercapita + inversoDensidadePopulacional;

    printf("Insira dados da carta 2:\n");
    printf("Qual nome da cidade: \n");
    scanf("%s", NomedaCidade2);
    printf("Qual a população: \n");
    scanf("%lu", &populacao2);
    printf("Qual a área km2: \n");
    scanf("%f", &areakm2);
    printf("PIB: \n");
    scanf("%f", &Pib2);
    printf("Código: \n");
    scanf("%s", CodigoCarta2);
    printf("Quantos pontos turísticos tem: \n");
    scanf("%d", &NrPontosTuristicos2);
    printf("Qual Estado: \n");
    scanf("%s", Estado2);

    DensidadePopulacional2 = (float)populacao2 / areakm2;
    Pibpercapita2 = Pib2 / (float)populacao2;
    inversoDensidadePopulacional2 = 1.0f / DensidadePopulacional2;
    superpoder2 = (float)populacao2 + areakm2 + Pib2 + NrPontosTuristicos2 + Pibpercapita2 + inversoDensidadePopulacional2;

    printf("\nComparação de Cartas:\n");

    // População
    printf("População: Carta 1 venceu (%d)\n", (populacao > populacao2) ? 1 : 0);

    // Área
    printf("Área: Carta 1 venceu (%d)\n", (areakm > areakm2) ? 1 : 0);

    // PIB
    printf("PIB: Carta 1 venceu (%d)\n", (Pib > Pib2) ? 1 : 0);

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (NrPontosTuristicos > NrPontosTuristicos2) ? 1 : 0);

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (DensidadePopulacional < DensidadePopulacional2) ? 1 : 0);

    // PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (Pibpercapita > Pibpercapita2) ? 1 : 0);

    // Super Poder
    printf("Super Poder: carta 1 venceu  (%d)\n", (superpoder1 > superpoder2) ? 1 : 0);

    return 0;
}

