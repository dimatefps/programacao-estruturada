// 1. Dado um número inteiro n (pode supor que n ≤ 100), e uma sequência de n números
// inteiros, faça um programa em C que leia esses dados e imprima a menor diferença entre
// qualquer par de números da sequência.
// Por exemplo, se n = 6 e a sequência for 1, 5, 3, 19, 25, 18, então a menor diferença será 1
// (entre 18 e 19).




# include <stdio.h>

int main(){

int N;


printf("N: ");
scanf("%d", &N);

int V[N];
for (int i = 0; i < N ; i++){
    scanf("%d", &V[i]);
}
int menor_global = V[1] - V[0];
int menor_local;

for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
        menor_local = V[i] - V[j];
        if (menor_local < menor_global && menor_local >= 0 && j != i){
            menor_global = menor_local;
        }
        
    }
}

printf("%d", menor_global);

return 0;
}