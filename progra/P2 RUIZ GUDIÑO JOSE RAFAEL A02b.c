
#include <stdio.h>
#include <stdlib.h>

/*ACT 1A*/

int main() {
	int suma=0;
		printf("Ingresar numero a sumar:");
		scanf("%i",&suma);
	while(suma<=100){
			suma=suma+suma;
	}
	printf("El resultado es %i",suma);
	return 0;
}
