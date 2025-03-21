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
        superpoder1 = populacao1 + area1 + pib1 +npt1 +ppc1 + (1.0 /dp1);
        superpoder2 = populacao2 + area2 + pib2 +npt2 +ppc2 + (1.0 /dp2);

        //Definições para o switch
        int opcao1, opcao2;
        float jogador1A, jogador2A, jogador1B, jogador2B, soma1, soma2; //Atributo A = Primeiro atributo | Atributo B = Segundo atributo e a soma dos atributos
        int dsd1 = 0, dsd2 = 0;

        printf("Escolha o primeiro atributo para comparar\n");
        printf(
        "1- População\n"
        "2- Área\n"
        "3- PIB\n"
        "4- Pontos Turísticos\n"
        "5- Densidade populacional\n");
        printf("Escolha seu atributo: ");
        scanf("%d", &opcao1);

        switch (opcao1){
        case 1: jogador1A = populacao1; jogador2A = populacao2; //População
        
        break;

        case 2: jogador1A = area1; jogador2A = area2; //Area
        break;

        case 3: jogador1A = pib1; jogador2A = pib2; //PIB
        break;

        case 4: jogador1A = npt1; jogador2A = npt2; //Numeros de pontos turisticos
        break;

        case 5: jogador1A = dp1; jogador2A = dp2; 
        break;
        }

        printf("Escolha o segundo atributo para comparar\n");
        printf(
        "1- População\n"
        "2- Área\n"
        "3- PIB\n"
        "4- Pontos Turísticos\n"
        "5- Densidade populacional\n");
        printf("Escolha seu atributo: ");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1){
            printf("Erro!: Você escolheu o mesmo atributo que o primeiro");
        }

        switch (opcao2) {

        case 1: jogador1B = populacao1; jogador2B = populacao2; //População
        break;
        case 2: jogador1B = area1; jogador2B = area2; //Area
        break;
        case 3: jogador1B = pib1; jogador2B = pib2; //PIB
        break;
        case 4: jogador1B = npt1; jogador2B = npt2; //Numeros de pontos turisticos
        break;
        case 5: jogador1B = dp1; jogador2B = dp2;  //Densidade populacional
        break;
        default: printf("Erro!: Você escreveu uma opção invalida"); return 1;
        }

        soma1 = (dsd1 ? -jogador1A : jogador1A) + (dsd2 ? -jogador1B : jogador1B);
        soma2 = (dsd1 ? -jogador2A : jogador2A) + (dsd2 ? -jogador2B : jogador2B);

        printf("*** Resultado ***\n");
        printf("%s = %.2f + %.2f = %.2f\n", ndc1, jogador1A, jogador1B, soma1);
        printf("%s = %.2f + %.2f = %.2f\n", ndc2, jogador2A, jogador2B, soma2);

        if (soma1 > soma2){
            printf("Carta 1 ganhou!!\n");
        } else if (soma2 > soma1) {
            printf("Carta 2 ganhou!!\n");
        } else {
            printf("Houve um empate!!");
        }

        return 0;

    }
