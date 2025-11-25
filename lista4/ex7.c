#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char **nomes;
    int tam;
    int cap;
} Turma;

void turma_matricula(Turma *turma, char *nome){
    if (turma->tam == turma->cap){
        turma->cap *= 2;
        
        char **temp;
        temp = malloc(turma->cap * sizeof(char*));
        for (int i = 0; i < turma->tam; i++){
            
            temp[i] = turma->nomes[i];
        }  
        free(turma->nomes);

        turma->nomes = temp;
        }

    else{
        turma->nomes[turma->tam] = malloc(strlen(nome) + 1);
        strcpy(turma->nomes[turma->tam], nome);
        turma->tam += 1;
        
    }


}

void turma_lista(Turma *turma){
    for (int i = 0; i < turma->tam; i++){
        printf("%s\n", turma->nomes[i]);
    }
}

void turma_jubila(Turma *turma, char *nome){
    for (int i = 0; i < turma->tam; i++){
        if (strcmp(nome, turma->nomes[i]) == 0){

        }
    }
}

int main(){
    Turma NA1;
    NA1.tam = 0;
    NA1.cap = 1; 
    
    NA1.nomes = malloc(NA1.cap * sizeof(char*));
    
    char *nome1, *nome2;

    nome1 = malloc(1000 * sizeof(char));
    nome2 = malloc(1000 * sizeof(char));
    
    
    strcpy(nome1,"Marcos");
    strcpy(nome2,"Renzo");

    turma_matricula(&NA1, nome1);
    turma_matricula(&NA1, nome2);

    turma_lista(&NA1);

    free(nome1);
    free(nome2);

    return 0;
}
