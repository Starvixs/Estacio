#include <stdio.h>
//Função recursiva para a torre
void moverTorre(int casas){
    if (casas > 0 && casas < 9){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
//Função recursiva para o bispo
void moverBispo(int casas){
    if (casas > 0 && casas < 9){
        printf("Cima\n");
        printf("Direita\n");
        moverBispo(casas - 1);    
    }
}
//Função recursiva para a rainha
void moverRainha(int casas){
    if (casas > 0 && casas < 9){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}
    


int main() {
    int escolha;

    do { //Opções para a entrada de qual peça deseja utilizar
        printf("Escolha qual peça quer mover\n"
               "0. Sair do jogo\n"
               "1. Torre\n"
               "2. Bispo\n"
               "3. Rainha\n"
               "4. Cavalo\n");
        scanf("%d", &escolha); //Leitura da peça que deseja escolher

        switch (escolha) { //Menu de escolha pra qual peça deseja escolher
            case 0:printf("Saindo do jogo...\n"); break;
            case 1:
                printf("***Movendo Torre***\n");
                moverTorre(5); //Recursividade da torre
                printf("\n");
                break;

            case 2:
                printf("***Movendo Bispo***\n"); //Recursividade do bispo
                moverBispo(5);
                printf("\n");
                break;

            case 3:
                printf("***Movendo Rainha***\n"); //Recursividade da rainha
                moverRainha(5);
                printf("\n");
                break;

            case 4:
                for (int cavalo = 0; cavalo < 2; cavalo++){
                    printf("Cima\n");
                }
                int j = 0;
                while (j < 1){
                    printf("Esquerda\n");
                    j++;
                }
                printf("\n");
                
                break;
                } //Fecha o Switch

            } while (escolha != 0);
 
        }
