#include <stdio.h>

int main() {
    int escolha;

    do {
        printf("Escolha qual peça quer mover\n"
               "1. Torre\n"
               "2. Bispo\n"
               "3. Rainha\n"
               "4. Sair do jogo\n");
        scanf("%d", &escolha); //Leitura da peça que deseja escolher

        switch (escolha) { //Menu de escolha pra qual peça deseja escolher
            case 1:
                for (int torre = 0; torre < 5; torre++) { // Peça, Quantidade de movimentos da peça, e a Movimentação da peça
                    printf("Direita\n");
                }
                break;

            case 2:
                for (int bispo = 0; bispo < 5; bispo++) { // Peça, Quantidade de movimentos da peça, e a Movimentação da peça
                    printf("Cima\n");
                    printf("Direita\n");
                }
                break;

            case 3:
                for (int rainha = 0; rainha < 8; rainha++) { // Peça, Quantidade de movimentos da peça, e a Movimentação da peça
                    printf("Esquerda\n");
                }
                break;

            case 4:
                printf("Saindo do jogo..."); 
                break;

            default:printf("Erro: Numero não identificado!\n"); break;
        }

    } while (escolha != 4);

    return 0;
}
