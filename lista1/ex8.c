# include <stdio.h>

int contido(int A[], int tamA, int B[], int tamB){
    int counter = 0;
    for (int i = 0; i < tamB; i++){
        for (int j = 0; j < tamA; j++){
            if (B[i] == A[j]){
                A[j] = 0;
                counter += 1;
                break;
            }
        }
    }
    if (counter == tamA){
        return 1;
    }
    return 0;
}

int main(){
    int B[10] = {1,2,3,4,5,6,7,8,9,10};
    int A[5] = {2,5,6,7,9};
    int tamB = 10;
    int tamA = 5;
    printf("%d", contido(A, tamA, B, tamB));

    return 0;
}
