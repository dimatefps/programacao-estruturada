#include <stdio.h>

int encontra_sabre(int matriz[][16], int Nlinhas, int Ncol, int *x, int *y){
    for (int i = 1; i < Nlinhas - 1; i++){
        for (int j = 1; j < Ncol - 1; j++){
            if (matriz[i][j] == 42){
                if (
                    matriz[i-1][j-1] == 7
                    && matriz[i-1][j] == 7
                    && matriz[i-1][j+1] == 7
                    && matriz[i][j-1] == 7
                    && matriz[i][j+1] == 7
                    && matriz[i+1][j-1] == 7
                    && matriz[i+1][j] == 7
                    && matriz[i+1][j+1] == 7
                ){
                    *x = i + 1;
                    *y = j + 1;
                    return 1;
                }
            }
        }
    }
    return 0;
}


int main(){
    int terreno[16][16];
    int N, M, x, y;
    
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%d", &terreno[i][j]);
        }
    }
    if (encontra_sabre(terreno, N, M, &x, &y)){
        printf("%d %d", x, y);
    }else{
        printf("Sabre nao encontrado");
    }
    
    return 0;
}