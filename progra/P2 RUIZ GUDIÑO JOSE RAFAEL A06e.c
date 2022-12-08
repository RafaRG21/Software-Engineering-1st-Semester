#include <stdio.h>
#include <stdlib.h>

/* ACT6E*/

int main() {
	float sueldo=0, sueldot=0;
	int i;
	for(i=1;i<=10;i++)
	{
		printf("Ingrese sueldo del trabajaador:");
		scanf("%f",&sueldo);
		sueldot=sueldot+sueldo;
	}
	printf("Nomina: %f",sueldot);
	return 0;
}
