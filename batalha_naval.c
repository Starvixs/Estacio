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
    
    
    //Návio Diagonal sendo o 3 o návio
    for (i = 1; i < 4; i++){
        tabuleiro [i][9- i] = 3;
    }
    for (i = 2; i < 5; i++)
    {
        tabuleiro[i][i] = 3;
    }
    //Návio Horizontal sendo o 3 o návio
    for (j = 2; j <= 4; j++) {
    tabuleiro[9][j] = 3;
    }

    //Návio Vertical sendo o 3 o návio
    for (i = 7; i < 10; i++) {
        tabuleiro[i][9] = 3;
    }
    

    //Habilidade Cruz sendo o 5 a habilidade
    for (i = 0; i < 1; i++)
    {
        tabuleiro[4][2] = 5;
    }
    for (i = 0; i < 5; i++)
    {
        tabuleiro[5][i] = 5;
        tabuleiro[6][2] = 5;
    }
    //Habilidade Cone sendo o 5 a habilidade
    tabuleiro[5][6] = 5;

    for (j = 5; j < 8; j++) {
        tabuleiro[6][j] = 5;
    }

    for (j = 4; j < 9; j++) {  
        tabuleiro[7][j] = 5;
    }
    //Habilidade Octaedro sendo o 5 a habilidade
    
    for (i = 0; i < 1; i++)
    {
        tabuleiro[0][3] = 5;
    }
    for (i = 2; i < 5 ; i++)
    {
        tabuleiro [1][i] = 5;
        tabuleiro [2][3] = 5;
    }
    
    
    



    //Imprimir o tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf(" \n");
    }

}
