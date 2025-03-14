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

        printf("Escreva o numero de pontos turisticos: ");
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

        //Super Poder das cartas
        superpoder1 = (float)populacao1 + area1 + pib1 +(float)npt1 +ppc1 + (1.0 /dp1);
        superpoder2 = (float)populacao2 + area2 + pib2 +(float)npt2 +ppc2 + (1.0 /dp2);

        //Resultado da comparação entre as cartas
        int venceuPopulacao = populacao1 > populacao2;
        int venceuArea = area1 > area2;
        int venceuPib = pib1 > pib2;
        int venceuNpt = npt1 > npt2;
        int venceuPpc = ppc1 > ppc2;
        int venceuDp = dp1 > dp2;
        int venceuSuperpoder = superpoder1 > superpoder2;

        //Imprimir as cartas//
        //Carta 1

        printf("Carta 1:\n"); //Carta 1
        printf("Estado: %s\n", estado1); //Estado
        printf("Codigo da carta: %s\n", cdc1); //Codigo da carta
        printf("Nome da cidade: %s\n", ndc1); //Nome da cidade
        printf("População: %d habitantes\n", populacao1); //População
        printf("Area: %.2f km²\n", area1); //Area
        printf("PIB: %.2f bilhões de reais\n", pib1); //PIB
        printf("Numero de pontos turisticos: %d\n", npt1); //Numero de pontos turisticos
        printf("Densidade Populacional: %.2f hab/km²\n", dp1); //Densidade populacional
        printf("PIB per capita: %.2f reais\n", ppc1); //PIB per capita


        //Carta 2

        printf("Carta2:\n"); //Carta 2
        printf("Estado: %s\n", estado2); //Estado
        printf("Codigo da carta: %s\n", cdc2); //Codigo da carta
        printf("Nome da cidade: %s\n", ndc2); //Nome da cidade
        printf("População: %d habitantes\n", populacao2); //População
        printf("Area: %.2f km²\n", area2); //Area
        printf("PIB: %.2f bilhões de reais\n", pib2); //PIB
        printf("Numero de pontos turisticos: %d\n", npt2); //Numero de pontos turisticos
        printf("Densidade Populacional: %.2f hab/km²\n", dp2); //Densidade populacional
        printf("PIB per capita: %.2f reais\n", ppc2); //PIB per capita

        //Resultado da batalha
        printf("Comparação de cartas: \n");
        printf("População: Carta %d venceu\n", venceuPopulacao); //Vencedor da População
        printf("Area: Carta %d venceu\n", venceuArea); //Vencedor da Area
        printf("PIB: Carta %d venceu\n", venceuPib); //Vencedor do PIB
        printf("Numero de pontos turisticos: Carta %d venceu\n", venceuNpt); //Vencedor da quantidade de pontos turisticos
        printf("PIB per capita: Carta %d venceu\n", venceuPpc); //Vencedor do PIB Per capita
        printf("Densidade Populacional: Carta %d venceu\n", venceuDp); //Vencedor da densidade populacional
        printf("Superpoder: Carta %d venceu\n", venceuSuperpoder); //Vencedor do Super Poder

        return 0;

    }
