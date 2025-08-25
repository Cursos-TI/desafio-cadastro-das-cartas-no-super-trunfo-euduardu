#include <stdio.h>

int main() {
    int NrPontosTuristicos, NrPontosTuristicos2;
    float areakm, Pib, populacao, areakm2, Pib2, populacao2;
    char NomedaCidade[50], NomedaCidade2[50];
    char CodigoCarta[50], CodigoCarta2[50];
    char Estado[50], Estado2[50];

    float DensidadePopulacional, DensidadePopulacional2;   
    float Pibpercapita, Pibpercapita2;  



    printf("Insira dados da carta 1:\n");
    printf("Qual nome da cidade: \n");
    scanf("%s", NomedaCidade);
    
    printf("Qual a população: \n");
    scanf("%f", &populacao);

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
    
    Pibpercapita = Pib / populacao;
    DensidadePopulacional = populacao / areakm;


    printf("Qual a população: %f - área km2: %f\n", populacao, areakm);
    printf("Cidade %s - pontos turísticos %d - Código da carta: %s\n", NomedaCidade, NrPontosTuristicos, CodigoCarta);
    printf("PIB %f - Estado %s\n", Pib, Estado);

    printf("Densidade populacional: %f\n", DensidadePopulacional);
    printf("PIB per capita: %f\n", Pibpercapita);




    printf("Insira dados da carta 2:\n");


    printf("Qual nome da cidade: \n");
    scanf("%s", NomedaCidade2);
    
    printf("Qual a população: \n");
    scanf("%f", &populacao2);

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

    Pibpercapita2 = Pib2 / populacao2;
    DensidadePopulacional2 = populacao2 / areakm2;

    

    printf("Qual a população: %f - área km2: %f\n", populacao2, areakm2);
    printf("Cidade %s - pontos turísticos %d - Código da carta: %s\n", NomedaCidade2, NrPontosTuristicos2, CodigoCarta2);
    printf("PIB %f - Estado %s\n", Pib2, Estado2);
    printf("Densidade populacional: %f\n", DensidadePopulacional2);
    printf("PIB per capita: %f\n", Pibpercapita2);

    return 0;
}

