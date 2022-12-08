#include <stdio.h>
#include <stdlib.h>

/* ACT6f */

int main() {
	int N=0, num=0, cero=0, i;
	printf("Ingresar cantidad de numero enteros:");
	scanf("%i",&N);
	for(i=1;i<=N;i++) {
		printf("Ingresar numero:");
		scanf("%i",&num);
	    if(num=0);{
			cero=cero+1;	
		}
	}
	printf("Cantidad de ceros: %i",cero);
	return 0;
}
