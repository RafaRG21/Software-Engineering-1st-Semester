#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int opc;
	float r,r2,a,pi=3.1416,acirculo,aesfera,atriangulo;
	do{
    printf("\n1. Area de un circulo\n");
    printf("2. Area de una esfera\n");
	printf("3. Area de un triangulo equilatero\n");
	printf("4. Salir\n"); 
	printf("Opcion a elegir:");  
	scanf("%d",&opc);
	switch(opc){
		case 1: printf("Ingresa el radio del circulo:");
		scanf("%f",&r);
		acirculo= (pi)*(r*r);
		printf("Area: %f",acirculo);
		break;
		case 2:printf("Ingresa el radio:");
		scanf("%f",&r2);
		aesfera=(4*pi)*(r2*r2);
		printf("Area de la esfera: %f",aesfera);
		return;
		case 3: printf("Ingresa el area del triangulo:");
		scanf("%f",&a);
		atriangulo= (sqrt(0.75))*(a*a);
		printf("Area del triangulo: %f",atriangulo);
		break;
		case 4: break;
		default: printf("Opcion no valida");
		   break;
	
	}
	
	fflush(stdin);
	
}while (opc!=4);
	return 0;
}
