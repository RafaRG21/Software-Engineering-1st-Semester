#include <stdio.h>
#include <stdlib.h>

/* ACT4B*/

int main() {
	int N=0,S=0;
	do{
		printf("Ingrese un numero:");
		scanf("%i",&N);
		S=N+N;
	}
		while(N==0); 
		
		printf("El resultado de la suma es: %i",S);

	return 0;
}
