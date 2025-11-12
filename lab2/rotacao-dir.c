#include<stdio.h>
#include<string.h>
const int MAXN = 128;


int tamanho(char S[]){
   int i;
   for (i = 0; S[i] != '\0'; i++);
   return i;

}


void rotar_direita( char S[] ){
   /* Completar */
   char novo[MAXN];
   novo[0] = S[tamanho(S)-1];

   for (int i = 0; i <= tamanho(S)-2; i++){
      novo[i+1] = S[i];     
      
   };

   novo[tamanho(S)] = '\0';

   for (int i = 0; i <= tamanho(S) -1; i++){
      S[i] = novo[i];
   }
};

/* Leitura e impressao - use para testar sua funcao */
int main(){
   char S[MAXN];

   scanf("%s", S);
   rotar_direita( S );
   printf("%s\n", S);
   return 0;
}
