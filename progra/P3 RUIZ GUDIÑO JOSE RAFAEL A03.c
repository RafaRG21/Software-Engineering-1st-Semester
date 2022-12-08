#include <stdio.h>
#include <stdlib.h>

/*ACT 3*/
void funcionvelocidad(float a, float *b);
void funcionmedia(float *x, float y);
void funcionradio(float *c, float d);
void funcionconversion(float l, float *p);
main() {
	int opc,limite=5,i;
	float dist, time, cant,num,cantnum=0, pi=3.1416, perimetro,libra,peso;
	
	do{
	
	printf("\nMENU PRINCIPAL\n");
	printf("\n1.Calculo de velocidad\n");
	printf("\n2.Promedio de numeros enteros\n");
	printf("\n3.Cálculo del radio de un círculo\n");
	printf("\n4.Conversión de libras a pesos\n");
	printf("\n5.Salir\n");
	printf("\nOpcion a elegir\n");
	scanf("%i",&opc);
	switch(opc){
		case 1: 
		   
	printf("Ingrse la distancia en metros:");
	scanf("%f",&dist);
	if(dist>10){
		printf("\nIngrese la velocidad:");
		scanf("%f",&time);
		if(time>10){
			funcionvelocidad(dist,&time);
			printf("\nLa velocidad es de %.2f m/s",time);
		}
		else{
			printf("\nValor debajo del rango");
		}
	}
	else{
		printf("\nValor debajo del rango");
	}
			break;
		
		case 2: 
			printf("\nCantidad de numeros a sacar promedio:");
			scanf("%f",&cant);
			if(cant>5){
				for(i=0;i<cant;i++){
					printf("\nIngrese el numero:");
					scanf("%f",&num);
					cantnum=cantnum+num;
				}
				funcionmedia(&cantnum,cant);
				printf("\nEl promedio de los numeros es de: %.2f",cantnum);
			}
			else{ printf("\nValor debajo de rango");
			}
			break;
		
		case 3: 
			printf("Ingrese el perimetro del circulo:");
			scanf("%f",&perimetro);
			funcionradio(&perimetro,pi);
			printf("El radio es de: %.2f",perimetro);
			break;
		
		case 4: 
			printf("Ingrese la cantidad de libras:");
			scanf("%f",&libra);
			if(libra>100){
				funcionconversion(libra,&peso);
				printf("\nLa cantidad de %.2f libras equivale a %.2f pesos",libra,peso);
			}
			else{
			printf("\nValor debajo del rango\nIntente de nuevo\n");
		    }
			break;
		
		default: printf("\nValor fuera de rango\nIntentar nuevamente\n");
	}
	}while(opc==5);
	
	
	getch();
}
void funcionvelocidad(float a, float *b){
        *b= a / *b;	
}
void funcionmedia(float *x, float y){
		*x= *x / y;
	}
void funcionradio(float *c, float d){
		*c= *c / 2 * d;
}
void funcionconversion(float l, float *p){
		*p= l*27.65;
	}
