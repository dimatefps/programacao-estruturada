# include <stdio.h>
const int MAXN = 128;

int is_in(int A[], int tamA, int x){
    for (int i = 0; i < tamA; i++){
        if (A[i] == x){
            return 1;
        }
    }
    return 0;
}

int uniao(int A[], int tamA, int B[], int tamB, int C[]){
    int counter = 0;
    for (int k = 0; k < tamA; k++){
        C[counter] = A[k];
        counter += 1;
    }

    for (int i = 0; i < tamB; i++){
        if (is_in(A, tamA, B[i]) == 0){
            C[counter] = B[i];
            counter += 1;                
        }   
    }
    return counter;
}

int main(){
    int tamA, tamB;
    int A[MAXN];
    int B[MAXN];
    int C[2*MAXN];
   
    scanf("%d", &tamA);
    int i;
    for ( i = 0; i < tamA; ++i )
        scanf("%d", &A[i]);
    
    scanf("%d", &tamB);
    for ( i = 0; i < tamB; ++i )
        scanf("%d", &B[i]);

    printf("%d", uniao(A, tamA, B, tamB, C));

    return 0;
}