# include <stdio.h>

int tamanho(char S[]){
    int i;
    for (i = 0; S[i] != '\0'; i++);
    return i;
}


int palindroma(char S[]){
    int tam = tamanho(S);
    int metade = tam / 2;
    int count = 0;
    for (int i = 0; i < metade; i++){
        if (S[i] == S[tam - i - 1]){
            count += 1;
        }
    }
    if (count == metade){
        return 1;
    }
    return 0;
}


int main(){
    char S[128];
    printf("S: ");
    scanf("%s", S);

    printf("%d", palindroma(S));

    return 0;
}