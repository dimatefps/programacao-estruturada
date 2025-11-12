# include <stdio.h>

int ponto(int A[], int n){
    int i = 0;
    int temp;
    for (int k =0; k < n; k++){
        if (A[k] <=0){
            temp = A[k];
            A[k] = A[i];
            A[i] = temp;
            i +=1;
        }
    }
    return i;
}

int main(){
    int tamA;
    int A[128];

    scanf("%d", &tamA);
    int i;
    for ( i = 0; i < tamA; ++i )
        scanf("%d", &A[i]);

    printf("%d", ponto(A, tamA));


    return 0;
}