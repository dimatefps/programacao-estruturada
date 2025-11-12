#include<stdio.h>

int dr[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dc[8] = {0, 0, -1, 1, 1, -1, 1, -1};
char *D[] = { "S", "N", "O", "E", "SE", "SO", "NE", "NO" };


int existe( char matriz[][32], int N, int M, char p[], int r, int c, int dir ){
    /* 
         Lembrete: parametros int sao passados por valor, entao se mudamos o valor 
         deles dentro da funcao, isso nao se reflete quando voltamos da chamada 
    */
    int i;
    for ( i = 0; p[i] != '\0'; ++i ){
        if ( r < 0 || c < 0 || r >= N || c >= M ) /* se estamos fora da matriz e ainda nao completamos a palavra */
            return 0;
        if ( p[i] != matriz[r][c] ) return 0;    /* se nao deu match nos caracteres */
        /* se deu certo, passamos para a proxima posicao na matriz */  
        r = r + dr[ dir ];                      
        c = c + dc[ dir ];
    }
    return 1;
}



int main(){
   int i;
   int N, M;
   /*
      N = numero de linhas
      M = numero de colunas
   */
    scanf("%d %d", &N, &M);
    char matriz[32][32];
    /* leitura da matriz de caracteres */
    for ( i = 0; i < N; ++i )
        scanf("%s", matriz[i]);
    
    /* Leitura das palavras a procurar */
    char palavras[16][16];
    int numP;

    scanf("%d", &numP);
    for ( i = 0; i < numP; ++i )
        scanf("%s", palavras[i]);

    int encontrado;  /* variavel que indica se ja encontramos uma palavra */
    for ( i = 0; i < numP; ++i ){
       int r, c, d;
       encontrado = 0;
       for ( r = 0; r < N && !encontrado; ++r )
         for ( c = 0; c < M && !encontrado; ++c )
            for ( d = 0; d < 8 && !encontrado; ++d )
               if ( existe( matriz, N, M, palavras[i], r, c, d ) ){
                  encontrado = 1;
                  printf("Palavra %s encontrada na posicao (%d, %d) na direcao %s\n", palavras[i], r, c, D[d] );
               }
    }
    return 0;
}

/*
Exemplo de entrada:

6 8
KSCQTZPM
BJBALEIA
NAVIOKMR
BXFHWNGH
LONDABJK
VNARGLUA
5
BALEIA
LUA
MAR
NAVIO
ONDA

*/
