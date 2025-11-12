#include <stdio.h>

float media_vetor(int V[128], int n){
    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += V[i];
    }
    float media = soma / (n * 1.0);

    return media;
}



int main(){
    int n;
    scanf("%d", &n);
    int V[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &V[i]);
    }
    printf("Media: %f", media_vetor(V, n));

    return 0;
}