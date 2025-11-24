#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb){
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}



int main(){
    int a = 5;
    int b = 7;
    swap(&a, &b);

    printf("a: %d\n", a);
    printf("b: %d\n", b);


    return 0;
}