#include <stdio.h>

int campo_minado(int matriz[][16], int Nlinhas, int Ncol){
    int final[16][16];
    for (int i = 0; i < Nlinhas; i++){
        for (int j = 0; j < Ncol; j++){
            
            int soma = 0;
            
            if (matriz[i][j] == 0){
                if (i - 1 >= 0){
                    if (matriz[i-1][j] == 1){
                        soma +=1; 
                    };
                }if (i + 1 <Nlinhas){
                    if (matriz[i+1][j] == 1){
                        soma +=1;
                    }
                }if (j - 1 >= 0){
                    if (matriz[i][j-1] == 1){
                        soma +=1;
                    }
                }if (j + 1 <Ncol){
                    if (matriz[i][j+1] == 1){
                        soma +=1;
                    }
                }
                        
                final[i][j] = soma;
            }else{
                final[i][j] = 9;
            }
        }
    }
    for (int i = 0; i < Nlinhas; i++){
        for (int j = 0; j < Ncol; j++){
            if (final[i][j] == 9){
                printf("* ");
            }else{
                printf("%d ", final[i][j]);
            }
        }
        printf("\n");
    }
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

    campo_minado(matriz, N, M);

    return 0;
}