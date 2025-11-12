// em andamento

#include <stdio.h>

int main(void){
	int n;
	int i = 2;
	int j;
	int contador = 0;
	int aux;

	printf("n: ");
	scanf("%d", &n); 
	
	while (contador < n){	
		aux = 0;
		for (j = 1; j <= i; j++){
			if (i % j == 0){
		 		aux += 1;
		 	}
		}
		if (aux == 2){
		 	contador += 1;
		 	printf("%d\n", i);
		
		}
		
		i += 1;
		
	}

return 0;
}



