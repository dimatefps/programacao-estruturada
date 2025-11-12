#include<stdio.h>

int existe_dominante( int matriz[][16], int Nlinha, int NCol){
    int i;
    int j;
    for ( i = 0; i < Nlinha; i++ )
        for ( j = 0; j < NCol; j++ ){
            int dominante = 1;
            
            for (int di = -1; di <= 1; di++){
                for (int dj = -1; dj <= 1; dj++){
                    if (di == 0 && dj == 0) continue;

                    int ni = i + di;
                    int nj = j + dj;

                    if (ni >= 0 && ni < Nlinha && nj >= 0 && ni < NCol){
                        if (matriz[ni][nj] > matriz[i][j]){
                            dominante = 0;
                            break;
                        }
                    }
                }
                if (!dominante) break;
            }
        if (dominante) return 1;
        }
    return 0;
}

int main(){
    int matriz[16][16];
    int N;  /* num. de linhas */
    int M; /* num colunas */

    scanf("%d %d", &N, &M);
    int i, j;
    for ( i = 0; i < N; i++ )
        for ( j = 0; j < M; j++ )
            scanf("%d", &matriz[i][j]);
    
    // for ( i = 0; i < N; i++ ){
    //     for ( j = 0; j < M; j++ ){
    //         printf("%d ", matriz[i][j]);
    //     }
    //         printf("\n");
    // }
    
    if (existe_dominante(matriz, N, M) == 1){
        printf("Existe dominante");
    }else{
        printf("Nao existe dominante");
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

3 3 
4 10 8
7 6 12
0 4 8



*/
