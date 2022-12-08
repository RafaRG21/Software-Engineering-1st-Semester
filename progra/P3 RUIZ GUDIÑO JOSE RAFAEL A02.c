#include <stdio.h>
#include <stdlib.h>

/*ACT 2 */

int main() {
	int opc;
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
		case 1: int funcionspeed(int dist,int time,int speed){
			printf("Ingrese la distancia recorrida en metros");
			scanf("%i",&dist);
			if(dist>10){
			printf("Ingrese el tiempo recurrido");
			scanf("%i",&time);
			    if(time>10){
			speed= dist/time;
			printf("La velocidad es de %im/s",speed);}
			else{printf("Valor debajo del rango\nIntente de nuevo\n");
			}}
			else{
				printf("Valor debajo del rango\nIntente de nuevo\n");
			}
			return speed;
			break;
		}
		case 2: void funcionpromedio(int cant, float media,int i,int num,int cantnum=0 ){
			printf("Cantidad de numeros a sacar promedio");
			scanf("%i",&cant);
			if(cant>5){
				for(i=0;i<cant;i++){
					printf("Ingrese el numero");
					scanf("%i",&num);
					cantnum=cantnum+num;
				}
				media=cantnum/cant;
				printf("El promedio de los numeros es de %f",media);
			}
			else{
			printf("Valor debajo del rango\nIntente de nuevo\n");
			}
			break;
		}
		case 3: int funcionradio(){
			int perimetro; 
			float pi=3.1416, radio;
			printf("Ingrese el perimetro del circulo:");
			scanf("%i",&perimetro);
			radio=(perimetro)/(2*pi);
			printf("El radio es de: %f",radio);
			break;
		}
		case 4: void funcionconversion(){
			float libra, peso;
			printf("Ingrese la cantidad de libras");
			scanf("%f",&libra);
			if(libra>100){
				peso=libra*27.65;
				printf("La cantidad de %f libras equivales a %f pesos",libra,peso);
			}
			else{
			printf("Valor debajo del rango\nIntente de nuevo\n");
		    }
			break;
		}
		default: printf("\nValor fuera de rango\nIntentar nuevamente\n");
	}}
	while(opc==5);
	
	
	return 0;
}
