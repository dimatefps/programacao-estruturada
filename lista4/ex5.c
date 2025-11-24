#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *revert(char *s){
    char *v;
    int tam = strlen(s);
    v = malloc(tam * sizeof(char));
    
    for (int i = 0; i < tam; i++){
        v[i] = s[tam - i - 1];
    }
    for (int i = 0; i < tam; i++){
        s[i] = v[i];
    }
    free(v);
    return s;
}

int main(){
    char *s;
    s = malloc(100 * sizeof(char));
    scanf(" %s", s);
    
    printf("%s", revert(s));

    return 0;
}