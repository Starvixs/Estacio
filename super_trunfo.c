#include <stdio.h>
#include <stdlib.h>
    int main(){
        //Variaveis da Carta 1 e 2
        char estado1[2],estado2 [2]; // Estado 1 e 2
        char cdc1[4], cdc2 [4]; // Codigo da carta 1 e 2
        char ndc1[20],ndc2 [20]; // Nome da cidade 1 e 2
        unsigned long int populacao1, populacao2; // População 1 e 2
        int npt1,npt2; // Numero de Pontos Turisticos 1 e 2
        float area1,area2; // Area em Km² 1 e 2
        float pib1,pib2; // PIB 1 e 2
        float ppc1,ppc2; // PIB per capita 1 e 2
        float dp1,dp2; // Densidade Populacional 1 e 2
        float superpoder1,superpoder2; //Superpoder da carta numero1 1 e 2
        int opcao1;

            //Cadastro da carta 1//
        printf("Carta 1\n");
        printf("Escreva o estado: ");
        scanf("%c", estado1); /*Estado*/

        printf("Escreva o código da cidade: "); 
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
        scanf(" %c", estado2); /*Estado*/
        
        printf("Escreva o código da cidade: ");
        scanf(" %s", cdc2); /*Codigo da carta*/

        printf("Escreva a cidade: ");
        scanf(" %s", ndc2); /*Nome da cidade*/

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
        ppc1 = (pib1 * 1000000000) / populacao1;
        ppc2 = (pib2 * 1000000000) / populacao2;
            //Super Poder das cartas
        superpoder1 = (float)populacao1 + area1 + pib1 +(float)npt1 +ppc1 + (1.0 /dp1);
        superpoder2 = (float)populacao2 + area2 + pib2 +(float)npt2 +ppc2 + (1.0 /dp2);

        printf("Escolha qual atributo quer comparar\n");
        printf(
        "1- População\n"
        "2- Área\n"
        "3- PIB\n"
        "4- Pontos Turísticos\n"
        "5- Densidade populacional\n");
        printf("Escolha seu atributo");
        printf("%d", opcao1);

        switch (opcao1){
        case 1:
        printf("%s vs %s", ndc1, ndc2);
        printf("Atributo usado: População");
        printf("Carta 1 - %lu\n Carta 2 -%lu\n", populacao1, populacao2);
        if (populacao1 > populacao2) {
            printf("Você venceu!");
        } else if (populacao2 > populacao1){
            printf("Você perdeu");
        } else
        printf("Deu empate!");
        break;
        case 2:
        printf("%s vs %s", ndc1,ndc2);
        printf("Atributo usado: Area");
        printf("Carta1 - %.2f km²\n Carta 2 -%.2f km²\n", area1, area2);
        if (area1 > area2){
            printf("Você venceu!");
        } else if (area2 > area1){
            printf("Você perdeu");
        } else {
            printf("Empate");
        }
        break;
        case 3:
        printf("%s vs %s", ndc1,ndc2);
        printf("Atributo usado: PIB");
        printf("Carta1 - %f\n Carta 2 -%f\n", pib1, pib2);
        if (pib1 > pib2){
            printf("Você venceu!");
        } else if (pib2 > pib1){
            printf("Você perdeu");
        } else {
            printf("Empate");
        }
        break;
        case 4:
        printf("%s vs %s", ndc1,ndc2);
        printf("Atributo usado: Pontos turísticos");
        printf("Carta1 - %d\n Carta 2 -%d\n", npt1, npt2);
        if (npt1 > npt2){
            printf("Você venceu!");
        } else if (npt2 > npt1){
            printf("Você perdeu");
        } else {
            printf("Empate");
        }
        break;
        case 5:
        printf("%s vs %s", ndc1,ndc2);
        printf("Atributo usado: Densidade Populacional");
        printf("Carta1 - %.2f km²\n Carta 2 -%.2f km²\n", dp1, dp2);
        if (dp1 > dp2){
            printf("Você venceu!");
        } else if (dp2 > dp1){
            printf("Você perdeu");
        } else {
            printf("Empate");
        }
        break;
        }

        return 0;

    }
