# include <stdio.h>

int tamanho(char S[]){
    int i;
    for (i = 0; S[i] != '\0'; i++);
    return i;
}


int subsequencia (char S[], char T[]){
    int tamS = tamanho(S);
    int tamT = tamanho(T);
    
    int count = 0;
    for (int i = 0; i < tamS; i++){
        for (int j = 0; j < tamT; j++){
            if (S[i] == T[j]){
                T[j] = '0';
                count += 1;
                break;
            }
        }
    }
    if (count >= tamS){
        return 1;
    }
    return 0;    
}



int main(){
    char S[128];
    char T[128];
    printf("S: ");
    scanf("%s", S);
    printf("T: ");
    scanf("%s", T);

    printf("%d", subsequencia(S, T));
    return 0;
}