#include <stdio.h>

int square (int a) {
    return a * a;
}

int cube(int a) {
    return a * a * a;
}

// eu sei que pode parecer esquisito, mas isso é a definição de uma
 // variável func que é do tipo "função que recebe um parâmetro inteiro
 // e tem um retorno inteiro"

void map (int array [], int n, int func(int)) {
    for (int i = 0; i < n; i++){
        array[i] = func(array[i]);
    }

}

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    map(vet, 5, square);

    for (int i = 0; i < 5; i++)
        printf("%d\n", vet[i]);

    int vet2[5] = {1, 2, 3, 4, 5};

    map(vet2, 5, cube);

    for (int i = 0; i < 5; i++)
        printf("%d\n", vet2[i]);

    return 0;
}
