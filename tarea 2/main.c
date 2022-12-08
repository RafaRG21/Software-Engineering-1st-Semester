#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float sueldob,sueldon,ISR=0,ahorro=0,vivienda=0,sueldot=0;
	printf("Ingrese su sueldo:");
	scanf("%f",&sueldob);
	if(sueldob<6500) 
	{
	sueldon=sueldob*1.075;
    }
	else
	{
	sueldon=sueldob;
    }
	ISR=sueldon*0.02;
	ahorro=sueldon*0.01;
	vivienda=sueldon*0.01;
	sueldot=sueldon-ISR-ahorro-vivienda;
	printf("Su sueldo nuevo es %f\n",sueldon);
	printf("Sus impuestos son %f\n",ISR);
	printf("Su ahorro es de %f\n",ahorro);
	printf("Total de vivienda: %f\n",vivienda);
	printf("Su percepcion final es de: %f",sueldot);
	return 0;
}
