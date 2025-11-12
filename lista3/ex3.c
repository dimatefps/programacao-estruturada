#include <stdio.h>

int esta_contida(int matrizA[][16], int NlinA, int NcolA, int matrizB[][16], int NlinB, int NcolB){
    for (int ai = 0; ai <= NlinA - NlinB; ai++){
        for (int aj = 0; aj <= NcolA - NcolB; aj++){
            int contador = 0;
            for (int bi = 0; bi < NlinB; bi++){
                for (int bj = 0; bj < NcolB; bj++){
                    if (matrizB[bi][bj] == matrizA[ai+bi][aj+bj]){
                        contador += 1;
                    }
                }
            }
            if (contador == NlinB*NcolB){
                return 1;
            }     



        }
    }
    return 0;
}









int main(){
    int matrizA[16][16], matrizB[16][16];
    int NlinA, NcolA, NlinB, NcolB;

    scanf("%d %d", &NlinA, &NcolA);
    for (int i = 0; i < NlinA; i++){
        for (int j = 0; j < NcolA; j++){
            scanf("%d", &matrizA[i][j]);
        } 
    }

    scanf("%d %d", &NlinB, &NcolB);
    for (int i = 0; i < NlinB; i++){
        for (int j = 0; j < NcolB; j++){
            scanf("%d", &matrizB[i][j]);
        } 
    }

    printf("%d", esta_contida(matrizA, NlinA, NcolA, matrizB, NlinB, NcolB));

    return 0;
}