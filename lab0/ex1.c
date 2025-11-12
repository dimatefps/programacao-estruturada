#include <stdio.h>

int main(void){
int a;

scanf("%d", &a);

if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0){
printf("bissexto");
}
else{
printf("nao bissexto");
}
return 0;
}
