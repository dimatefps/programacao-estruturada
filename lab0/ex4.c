#include <stdio.h>

int main(void){
    int n;
    int invertido = 0;
    int temp;
    
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);

    temp = n;

    while (temp != 0){
        invertido = invertido * 10 + temp % 10;
        temp = (temp - temp % 10) / 10; 
    }

    printf("\nNumero invertido: %d", invertido);


return 0;
}
