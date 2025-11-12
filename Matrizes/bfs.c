#include<stdio.h>

int main(){
    int numV;
    int numA;
    int A[16][16] = {0};
    int i, j, u, v;
    scanf("%d %d", &numV, &numA);
    /* leitura da matriz de adjacencia */
    for ( i = 0; i < numA; ++i ){
        scanf("%d %d", &u, &v);
        A[u][v] = 1;
    }

    int distancia[16];
    for ( i = 0; i < numV; ++i )
        distancia[i] = -1;  /* indica que nao foi calculado  */


    /* Vamos a calcular as distancias */
    int inicio;
    int d;
    scanf("%d", &inicio);
    distancia[inicio] = 0;
    int faltam = numV - 1; 
    for ( d = 1; d < numV && faltam > 0; ++d ){
        /* descobrir quem esta a distancia d */
        for ( i = 0; i < numV; ++i )
            if ( distancia[i] == d - 1 ){
                /* tentamos descobrir novos vertices */
                for ( v = 0; v < numV; v++ )
                    if ( A[i][v] && distancia[v] == -1 ){
                        /* descobrimos alguem novo */
                        distancia[v] = d;
                        faltam--;
                    }
            }
    }

    for ( i = 0; i < numV; ++i )
        printf("distancia[%d] = %d\n", i, distancia[i]);

    return 0;
}

/*
Exemplo de entrada:

7 11
0 2
0 3
1 0
1 5
1 6
2 1
3 4
4 0
4 2
5 3
5 6
0

*/
