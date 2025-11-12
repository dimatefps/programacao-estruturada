#include <stdio.h>

int toeplitz(int matriz[][16], int Nlinhas, int Ncol){
    for (int i = 0; i < Nlinhas - 1; i++){
        for (int j = 0; j < Ncol - 1; j++){
            if (matriz[i][j] != matriz[i+1][j+1]){
                return 0;
            }

        }
    }
    return 1;
}





int main(){
    int matriz[16][16];
    int N, M;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("%d", toeplitz(matriz, N, M));


    return 0;
}