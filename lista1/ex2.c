


# include <stdio.h>

void insere_ordenado(int A[], int tam, int x){
    int aux;
    for (int i = 0; i < tam; i++){
        if (A[i] >= x){
            aux = A[i];
            A[i] = x;
            x = aux;
        }
    }
    A[tam -1] = x;
}


int main(){
    int A[8] = {1,3,5,18,19,25,34};
    int tam = 8;
    int x = 7;
    insere_ordenado(A, tam, x);
    for (int i = 0; i < tam; i++){
        printf("%d, ", A[i]);
    }

    return 0;
}