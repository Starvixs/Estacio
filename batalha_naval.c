#include <stdio.h>
int main(){

    int tabuleiro[10][10];
    int i,j;

    // Representação do tabuleiro sendo 0 a Água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
      }
    
    
    
    //Návio Horizontal
    for (j = 3; j <= 5; j++) {
    tabuleiro[2][j] = 3;
    }
    //Návio Vertical
    for (i = 5; i < 8; i++) {
        tabuleiro[i][7] = 3;
    }


    //Imprimir o tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf(" \n");
    }

}
