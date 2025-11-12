#include <stdio.h>


int main(){
    int n;

    scanf("%d", &n);
    char V[n];

    for (int i = 0; i < n; i++){
        scanf(" %c", V[i]);
    }

    for (int i = 0; i < n; i++){
        printf("entrada %d, conteudo %c, endereco %p\n", i, V[i], (unsigned long)&V[i]);
    }
    return 0;
}