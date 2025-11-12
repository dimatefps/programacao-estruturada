#include <stdio.h>
const int MAXN = 128;

int tamanho(char S[]){
   int i;
   for (i=0; S[i] !=0; i++);
   return i;
}

int anagrama( char S[], char T[] ){
   /* Completar */
   int tamS = tamanho(S);
   int tamT = tamanho(T);

   if (tamS != tamT){
      return 0;
   }
   int count = 0;
   for (int i = 0; i < tamS; i++){
      for (int j = 0; j< tamT; j++){
         if (S[i] == T[j]){
            T[j] = '0';
            count += 1;
            break;
         }
      }
   }
   if (count == tamS){
      return 1;
   }else{
      return 0;
   }
}

/* Leitura e impressao - use para testar a funcao */
int main(){
   char S[MAXN], T[MAXN];

   scanf("%s %s", S, T);
   printf("%d\n", anagrama(S, T));
   return 0;
}
