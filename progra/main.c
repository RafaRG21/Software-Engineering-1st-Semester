#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void funcionconversion(float l, float *p);
main(){
			float libra, peso;
			printf("Ingrese la cantidad de libras:");
			scanf("%f",&libra);
			if(libra>100){
				funcionconversion(libra,&peso);
				printf("\nLa cantidad de %.2f libras equivale a %.2f pesos",libra,peso);
			}
			else{
			printf("\nValor debajo del rango\nIntente de nuevo\n");
		    }	
		    getch(); }
	void funcionconversion(float l, float *p){
		*p= l*27.65;
	}
