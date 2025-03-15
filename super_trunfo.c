#include <stdio.h>
    int main(){
        //Variaveis da Carta 1
        char estado1[2]; // Estado
        char cdc1[4]; // Codigo da carta
        char ndc1[20]; // Nome da cidade
        unsigned long int populacao1; // População
        int npt1; // Numero de Pontos Turisticos
        float area1; // Area em Km²
        float pib1; // PIB
        float ppc1; // PIB per capita
        float dp1; // Densidade Populacional
        float superpoder1; //Superpoder da carta numero1

        //Variaveis da Carta 2
        char estado2[2]; // Estado
        char cdc2[4]; // Codigo da carta
        char ndc2[20]; // Nome da cidade
        unsigned long int populacao2; // População
        int npt2; // Numero de Pontos Turisticos
        float area2; // Area em Km²
        float pib2; // PIB
        float ppc2; // PIB per capita
        float dp2; // Densidade Populacional
        float superpoder2; //Superpoder da carta numero2

        //Cadastro da carta 1//
        printf("Carta 1\n");
        printf("Escreva o estado: ");
        scanf("%s", estado1); /*Estado*/

        printf("Escreva a primeira letra do estado e um numero de 1 a 4: "); 
        scanf("%s", cdc1); /*Codigo da carta*/

        printf("Escreva a cidade: ");
        scanf("%s", ndc1); /*Nome da cidade*/

        printf("Escreva a quantidade da população: ");
        scanf("%lu", &populacao1); /*População*/

        printf("Escreva a area da cidade: ");
        scanf("%f", &area1); /*Area*/

        printf("Escreva o PIB da cidade: ");
        scanf("%f", &pib1); /*PIB*/

        printf("Escreva o numero de pontos turisticos:");
        scanf("%d", &npt1); /*Numero de pontos turisticos*/

        //Cadastro da carta 2//
        printf("Carta 2\n");
        printf("Escreva o estado: ");
        scanf("%s", estado2); /*Estado*/
        
        printf("Escreva a primeira letra do estado e um numero de 1 a 4: ");
        scanf("%s", cdc2); /*Codigo da carta*/

        printf("Escreva a cidade: ");
        scanf("%s", ndc2); /*Nome da cidade*/

        printf("Escreva a quantidade da população: ");
        scanf("%lu", &populacao2); /*População*/

        printf("Escreva a area da cidade: ");
        scanf("%f", &area2); /*Area*/

        printf("Escreva o PIB da cidade: ");
        scanf("%f", &pib2); /*PIB*/

        printf("Escreva o numero de pontos turisticos: ");
        scanf("%d", &npt2); /*Numero de pontos turisticos*/

        //Densidade Populacional
        dp1 =  populacao1 / area1;
        dp2 =  populacao2 / area2;

        //PIB Per capita
        ppc1 = (pib1 * 1000000) / populacao1;
        ppc2 = (pib2 * 1000000) / populacao2;

        
        //Resultado da comparação entre as cartas
        printf("Carta 1 - %s: %d \n", ndc1, populacao1);
        printf("Carta 2 - %s: %d \n", ndc2, populacao2);
        if (populacao1 > populacao2){
            printf("%s venceu!\n", ndc1);
        } else{
            printf("%s venceu!\n", ndc2);
        }

        return 0;

    }
