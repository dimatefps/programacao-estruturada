#include <stdio.h>
#include <stdlib.h>

float media(int *p, int n){
    float media = 0;
    for (int i = 0; i < n; i++){
       media += p[i]/(n * 1.0); 
    }
    return media;
}

int main(){
    int n;
    int *p;
    scanf("%d", &n);

    p = malloc(n * sizeof(int));
    if (p == NULL){
        printf("Erro de alocacao\n");
        return 1;
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &p[i]);
    }

    printf("%f", media(p, n));
    
    free(p);

    return 0;
}