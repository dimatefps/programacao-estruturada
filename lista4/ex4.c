#include <stdio.h>
#include <stdlib.h>

void inc(int *x){
    *x += 1;
}


int main(){
    int a = 5;
    inc(&a);
    printf("%d", a);

    return 0;
}