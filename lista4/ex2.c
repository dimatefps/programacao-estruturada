#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    char *V;
    scanf("%d", &n);
    V = malloc(n*sizeof(char));


    for (int i = 0; i < n; i++){
        scanf(" %c", &V[i]);
    }

    for (int i = 0; i < n; i++){
        printf("entrada %d, conteudo %c, endereco %lu\n", i, V[i], (unsigned long)&V[i]);
    }
    free(V);
    return 0;
}