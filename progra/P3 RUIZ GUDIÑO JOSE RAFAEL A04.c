#include <stdio.h>
#include <stdlib.h>
void Ventas(int *nvendedor);
void ventaspro(int *ventasvendedor);
void mejorventa(int *dia);
void Ventatotal(int *totalventa,int *toventa);
void mejorvendedor(int *vendedor1,int *vendedor2,int *vendedor3,int *bn1,int *bn2,int *bn3);
void pago(int *bono1,int *bono2,int *bono3);
/* ACT 4*/
 
 int i,vendedor=1;
 main() {
	int VendedorA [6],VendedorB [6],VendedorC [6],bonoA=0,bonoB=0,bonoC=0,toventaA=0,toventaB=0,toventaC=0;
	printf("\n\n****Natural Products Inc.****\n\n**Ventas del establecimiento**\n");
	Ventas(VendedorA);
	ventaspro(VendedorA);
	mejorventa(VendedorA);
	Ventatotal(VendedorA,&toventaA);
	Ventas(VendedorB);
	ventaspro(VendedorB);
	mejorventa(VendedorB);
	Ventatotal(VendedorB,&toventaB);
	Ventas(VendedorC);
	ventaspro(VendedorC);
	mejorventa(VendedorC);
    Ventatotal(VendedorC,&toventaC);
    mejorvendedor(&toventaA,&toventaB,&toventaC,&bonoA,&bonoB,&bonoC);
    pago(&bonoA,&bonoB,&bonoC);
    
}
void Ventas(int *nvendedor){

	printf("Vendedor %i:\n",vendedor);
	for(i=0;i<6;i++){
		printf("Introducir las ventas del dia %i:",i+1);
		scanf("%i",&nvendedor[i]);
	}
	}
void ventaspro(int *ventasvendedor){

	float promedio=0;

	
	for(i=0;i<6;i++){
		promedio+=ventasvendedor[i];	
	}
	promedio/=6;
	printf("El promedio de ventas del vendedor %i es de:%.2f\n",vendedor,promedio);	
}
void mejorventa(int *dia){
	int mejor=0;
	int d_ia=0;
	
	for(i=0;i<6;i++){
		if(dia[i]>mejor){
			mejor=dia[i];
			d_ia=i+1;
		}
	}
	printf("La mejor venta del vendedor %i fue el dia:%i\n",vendedor,d_ia);
}

void Ventatotal(int *totalventa,int *toventa){
	for(i=0;i<6;i++){
		*toventa+=totalventa[i];	
	}
	printf("El total de ventas del vendedor %i es de:%i\n",vendedor,*toventa);
	vendedor++;
	
}
void mejorvendedor(int *vendedor1,int *vendedor2,int *vendedor3,int *bn1,int *bn2,int *bn3){
	if(*vendedor1>=*vendedor2&&*vendedor1>=*vendedor3){
		printf("***El vendedor 1 fue el que tuvo mayor ventas***\n");
		*bn1=1;	
	}
	if(*vendedor2>=*vendedor1&&*vendedor2>=*vendedor3){
		printf("***El vendedor 2 fue el que tuvo mayor ventas***\n");
		*bn2=1;
	}
	if(*vendedor3>=*vendedor2&&*vendedor3>=*vendedor1){
		printf("***El vendedor 3 fue el que tuvo mayor ventas***\n");
		*bn3=1;
	}
}
void pago(int *bono1,int *bono2,int *bono3){
	float pagobonus=0,pagobonussemana=0;
	
	pagobonus=1000*1.08;
	pagobonussemana=1000*1.1;
	
	if(*bono1>0){
		printf("El sueldo base del vendedor 1 es $1000 + bono 8%% + bono 2%% de empleado de la semana: %.2f\n",pagobonussemana);		
	}
	else{
		printf("El sueldo base del vendedor 1 es $1000 + bono 8%%: %.2f\n",pagobonus);
	}
	if(*bono2>0){
		printf("El sueldo base del vendedor 2 es $1000 + bono 8%% + bono 2%% de empleado de la semana: %.2f\n",pagobonussemana);		
	}
	else{
		printf("El sueldo base del vendedor 2 es de $1000 + bono 8%%: %.2f\n",pagobonus);
	}
	if(*bono3>0){
		printf("El sueldo base del vendedor 3 es $1000 + bono 8%% + bono 2%% de empleado de la semana: %.2f\n",pagobonussemana);		
	}
	else{
		printf("El sueldo base del vendedor 3 es $1000 + bono 8%%: %.2f\n",pagobonus);
	}
}
