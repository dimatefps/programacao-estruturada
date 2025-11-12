#include <stdio.h>



int soma_projecao(int matriz[][16], int N){
    int area_xy = N*N;

    int area_xz, area_yz;
    int maior_linha_global = 0;
    int maior_coluna_global = 0;
    int soma_linha = 0;
    int soma_coluna = 0;

    for (int i = 0; i < N; i++){
        int item_linha_local;
        for (int j = 0; j < N; j++){
            item_linha_local = matriz[i][j];
            if (item_linha_local > maior_linha_global){
                maior_linha_global = item_linha_local;
            }
        }
        soma_linha += maior_linha_global;
        maior_linha_global = 0;
    }
    for (int i = 0; i < N; i++){
        int item_coluna_local;
        for (int j = 0; j < N; j++){
            item_coluna_local = matriz[j][i];
            if (item_coluna_local > maior_coluna_global){
                maior_coluna_global = item_coluna_local;
            }
        }
        soma_coluna += maior_coluna_global;
        maior_coluna_global = 0;
    }
    area_xz = soma_coluna;
    area_yz = soma_linha;

    int soma_areas = area_xy + area_xz + area_yz;

    return soma_areas;
}





int main(){
    int matriz[16][16];
    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("%d", soma_projecao(matriz, N));
    return 0;
}