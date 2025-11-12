#include<stdio.h>

float somaquadrado( int matriz[][16], int Nlinha, int NCol, int i, int j ){
    int linha;
    int coluna;
    int soma = 0;
    int contador = 0; /* quantos elementos tenho em volta */
    for ( linha = i - 1; linha <= i + 1; ++linha )
        for ( coluna = j - 1; coluna <= j + 1; ++coluna ){
            /* a posicao existe ?  */
            if ( linha >= 0 && coluna >= 0 & linha < Nlinha && coluna < NCol ){
                soma += matriz[linha][coluna];
                contador++;
            }
        }
    return (float)soma / contador;
}

int main(){
    int imagem[16][16];
    int N;  /* num. de linhas */
    int M; /* num colunas */

    scanf("%d %d", &N, &M);
    int i, j;
    for ( i = 0; i < N; i++ )
        for ( j = 0; j < M; j++ )
            scanf("%d", &imagem[i][j]);
    
    float H[16][16];
    for ( i = 0; i < N; i++ )
        for ( j = 0; j < M; j++ )
            H[i][j] = somaquadrado(imagem, N, M, i, j);

    for ( i = 0; i < N; i++ ){
        for ( j = 0; j < M; j++ ){
            printf("%.3f ", H[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*

Exemplo de entrada:

5 5
4 10 8 6 2
7 6 12 5 1
0 4 8 5 1
1 9 2 3 4 
8 10 1 2 4

*/
