#include <stdio.h>

int triangular_superior(int matriz[][16], int Nlinhas){
    for (int i = 1; i < Nlinhas; i++){
        for (int j = 0; j < i; j++){
            if (matriz[i][j] != 0 ){
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
        for (int j = 0 ; j < M; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d ", matriz[i][j]);

        }
    }
    if (triangular_superior(matriz, N) == 1){
        printf("Triangula superior");
    }else{
        printf("Nao eh triangular superior");
    }



    return 0;
}