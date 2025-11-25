#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int ra;
    char nome[1000];
    char sexo;
    int idade;
} Aluno;

int aluno_cmp(Aluno *a, Aluno *b){

    if (a->ra != b->ra) return 0;
    if (strcmp(a->nome, b->nome) != 0) return 0;
    if (a->sexo != b->sexo) return 0;
    if (a->idade != b->idade) return 0;

    return 1;
}


int main(){

    
    Aluno a;
    a.ra = 112031;
    strcpy(a.nome, "Larissa");
    a.sexo = 'F';
    a.idade = 20;
    
    Aluno b;
    b.ra = 1120223;
    strcpy(b.nome, "Mate");
    b.sexo = 'M';
    b.idade = 21;

    printf("%d",aluno_cmp(&a, &b));
    
    Aluno c;
    c.ra = 1120223;
    strcpy(c.nome, "Mate");
    c.sexo = 'M';
    c.idade = 21;
    
    printf("%d",aluno_cmp(&c, &b));
    


    return 0;
}