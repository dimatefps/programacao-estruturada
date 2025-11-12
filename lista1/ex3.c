# include <stdio.h>

int remove_ordenado(int A[], int tam, int x){
    int B[tam];
    int count = 0;
    for (int i = 0; i < tam; i++){
        if (A[i] != x){
            B[count] = A[i];
            count += 1;
        }
    }
    for (int i = 0; i < tam; i++){
        if (i < count){
            A[i] = B[i];
        }else{
            A[i] = 0;
        }
        
    }
    return count;
}

int main(){
    int A[13] = {2,4,6,8,10,12,15,15,14,16,15,18,20};
    int x = 15;
    int tam = 13;

    printf("%d\n", remove_ordenado(A, tam, x));
    int i = 0;
    
    while (A[i] != 0){
        printf("%d, ", A[i]);
        i +=1;
    }

    return 0;
}