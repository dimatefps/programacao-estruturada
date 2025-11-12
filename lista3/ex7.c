#include <stdio.h>
#include <math.h>

int tamanho(char S[]){
    int i;
    for (i = 0; S[i] != '\0'; i++);
    return i;
}


int main(){
    char S[128];
    
    scanf("%s", S);
    
    int N = sqrt(tamanho(S));
    int tam = tamanho(S);

    for (int i = 0; i < tam; i++){
        printf("%c", S[i]);
        if ((i + 1) % N == 0){
            printf("\n");
        }
                
    }
    printf("%d", tamanho(S));
    return 0;
}