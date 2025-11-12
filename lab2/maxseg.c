#include<stdio.h>
const int MAXN = 128;

int soma( int A[], int a, int b ){
   /* Completar */
   int soma = 0;
   for (int i = a; i <= b; i++){
      soma += A[i];
   }
   return soma;
}

int maxseg( int A[], int N ){
   /* Completar */
   int max_global = 0;
   int max_local;
   for (int i = 0; i < N - 1; i++){
      for (int j = i + 1; j < N; j++ ){
         max_local = soma(A, i, j);
         if (max_local > max_global){
            max_global = max_local;
         }
      }
   }
   return max_global;
}

/* Leitura e impressao - use para testar sua funcao */
int main(){
   int N;
   int A[MAXN];
   int i;

   scanf("%d", &N);
   for ( i = 0; i < N; ++i )
      scanf("%d", &A[i]);
   printf("Maior segmento: %d\n", maxseg(A, N));
}
