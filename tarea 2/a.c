#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int edad;
	printf("Ingresa tu edad:");
	scanf("%i",edad);
	if(edad>18) {
	printf("Eres mayor de edad");
	}
	else {
	printf("Eres menor de edad");
	}
	if(edad>80) {
	printf("Estas viviendo horas extras");
    } 
	else {
		printf("Eres adulto");
	}
	return 0;
}
