#include<stdio.h>
const int MAXN = 128;

int interseccao( int A[], int tamA, int B[], int tamB, int C[] ){
   /* Completar */
   int count = 0;
   for (int i = 0; i<= tamA - 1; i++){
      for (int j = 0; j<= tamB - 1; j++){
         if (A[i] == B[j]){
            C[count] = A[i]; 
            count += 1;
         };
      }
   }

   // for (int i = 0; i <= tamanho(C) -1; i++){
   //    printf("%d", C[i]);
   // }
   return count;
}



/* Leitura e impressao - use para testar seu programa */
int main(){
   int N, M;
   int A[MAXN];
   int B[MAXN];
   int C[2*MAXN];
   
   scanf("%d", &N);
   int i;
   for ( i = 0; i < N; ++i )
      scanf("%d", &A[i]);
   
   scanf("%d", &M);
   for ( i = 0; i < M; ++i )
      scanf("%d", &B[i]);

   int T = interseccao( A, N, B, M, C );
   for ( i = 0; i < T; ++i )
      printf("%d ", C[i]);
   printf("\n");
   return 0;
}
