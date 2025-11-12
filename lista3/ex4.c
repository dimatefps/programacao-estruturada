#include <stdio.h>

// função para ver se tem um elemento no vetor
int is_in(int matriz[16], int tam, int x){
    for (int i = 0; i < tam; i++){
        if (matriz[i] == x) return 1;
    }
    return 0;
}

int quadrante_valido(int quadrante[][16]){
    int vetor[9];
    int counter = 0;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            vetor[counter] = quadrante[i][j];
            counter +=1;
        }     
    }
    for (int k = 0; k < 9; k++){
            if (!is_in(vetor, 9, k + 1)) return 0;
        }
    
    return 1;
}


int sudoku_valido(int matriz[][16]){
    int quadrante[16][16];


    for (int i = 0; i < 9; i += 3){
        for (int j = 0; j < 9; j += 3){
            for (int qi = 0; qi < 3; qi++){
                for (int qj = 0; qj < 3; qj++){
                    quadrante[qi][qj] = matriz[i+qi][j+qj];
                }
            }
            if (!quadrante_valido(quadrante)) return 0;
        }
    }

    int linha[9];
    int coluna[9];
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            linha[j] = matriz[i][j];
            coluna[j] = matriz[j][i];
        }
        
        for (int k = 0; k < 9; k++){
            if (!is_in(linha, 9, k+1)) return 0;
            if (!is_in(coluna, 9, k+1)) return 0;
        } 
    }
    return 1;
}




int main(){
    int matriz[16][16];
    int Nlin, Ncol;

    scanf("%d %d", &Nlin, &Ncol);
    for (int i = 0; i < Nlin; i++){
        for (int j = 0; j < Ncol; j++){
            scanf("%d", &matriz[i][j]);
        } 
    }

    printf("%d", sudoku_valido(matriz));


    return 0;
}