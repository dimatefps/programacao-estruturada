#include <stdio.h>

int main(void){
    int n;
    int i;
    int contador = 1; 
    int termo, novo_termo = 0;

    printf("n: ");
    scanf("%d", &n);

    
    scanf("%d", &termo);
    for (i = 2; i < n; i++){
        scanf("%d ", &novo_termo);

	    if (novo_termo != termo){
		    contador += 1;
            
        }
        termo = novo_termo;
        }
    printf("%d", contador);


return 0;
}
