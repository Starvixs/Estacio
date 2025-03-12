#include <stdio.h>
    int main(){
        //Variaveis da Carta 1
        char estado1[2]; // Estado
        char cdc1[3]; // Codigo da carta
        char ndc1[20]; // Nome da cidade
        int populacao1; // População
        int npt1; // Numero de Pontos Turisticos
        float area1; // Area em Km²
        float pib1; // PIB

        //Variaveis da Carta 2
        char estado2[2]; // Estado
        char cdc2[3]; // Codigo da carta
        char ndc2[20]; // Nome da cidade
        int populacao2; // População
        int npt2; // Numero de Pontos Turisticos
        float area2; // Area em Km²
        float pib2; // PIB

        //Cadastro da carta 1//
        printf("Carta 1\n");
        printf("Escreva o estado: ");
        scanf("%s", estado1);

        printf("Escreva a primeira letra do estado e um numero de 1 a 4: "); 
        scanf("%s", cdc1); /*Codigo da carta*/

        printf("Escreva a cidade: ");
        scanf("%s", ndc1); /*Nome da cidade*/

        printf("Escreva a quantidade da população: ");
        scanf("%d", &populacao1); /*População*/

        printf("Escreva a area da cidade: ");
        scanf("%f", &area1); /*Area*/

        printf("Escreva o PIB da cidade: ");
        scanf("%f", &pib1); /*PIB*/

        printf("Escreva o numero de pontos turisticos: ");
        scanf("%d", &npt1); /*Numero de pontos turisticos*/

        //Cadastro da carta 2//
        printf("Carta 2\n");
        printf("Escreva o estado: ");
        scanf("%s", estado2);
        
        printf("Escreva a primeira letra do estado e um numero de 1 a 4: ");
        scanf("%s", cdc2); /*Codigo da carta*/

        printf("Escreva a cidade: ");
        scanf("%s", ndc2);

        printf("Escreva a quantidade da população: ");
        scanf("%d", &populacao2);

        printf("Escreva a area da cidade: ");
        scanf("%f", &area2);

        printf("Escreva o PIB da cidade: ");
        scanf("%f", &pib2);

        printf("Escreva o numero de pontos turisticos: ");
        scanf("%d", &npt2);

        //Imprimir as cartas//

        printf("Carta1: \n");
        printf("Estado: %s\n", estado1);
        printf("Codigo da carta: %s\n", cdc1);
        printf("Nome da cidade: %s\n", ndc1);
        printf("População: %d habitantes\n", populacao1); 
        printf("Area: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Numero de pontos turisticos: %d\n", npt1);

        printf("Carta2: \n");
        printf("Estado: %s\n", estado2);
        printf("Codigo da carta: %s\n", cdc2);
        printf("Nome da cidade: %s\n", ndc2);
        printf("População: %d habitantes\n", populacao2);
        printf("Area: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Numero de pontos turisticos: %d\n", npt2);

        return 0;

    }