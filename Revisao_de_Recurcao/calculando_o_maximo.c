#include <stdio.h>

int maximo(int *v, int n){
    if (n==1)
        return v[0];
    int m = maximo(v, n - 1);
    return v[n - 1] > m ? v[n - 1] : m;
}

int main(){
    int v[10] = {1, 2, 3, 45, 4, 5, 6, 7, 8, 10};
    printf("%d", maximo(v, 10));
}