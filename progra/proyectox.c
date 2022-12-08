#include <stdio.h>
#include <stdlib.h>
void Ventas(int *nvendedor);
void ventaspro(int *ventasvendedor);
void mejorventa(int *dia);
void Ventatotal(int *totalventa,int *toventa);
void mejorvendedor(int *vendedor1,int *vendedor2,int *vendedor3,int *bn1,int *bn2,int *bn3);
void pay(int *bono1,int *bono2,int *bono3);
/* ACT 4*/
 int vendedor=1;
 int i;
 main() {
	int VendedorA [6];
	int VendedorB [6];
	int VendedorC [6];
	int bonoA=0,bonoB=0,bonoC=0;
	int toventaA=0,toventaB=0,toventaC=0;
	printf("\n\n****Natural Products Inc.****\n\n**Ventas del establecimiento**\n");
	Ventas(VendedorA);
	Ventas(VendedorB);
	Ventas(VendedorC);
	ventaspro(VendedorA);
	ventaspro(VendedorB);
	ventaspro(VendedorC);
	mejorventa(VendedorA);
	mejorventa(VendedorB);
	mejorventa(VendedorC);
    Ventatotal(VendedorA,&toventaA);
    Ventatotal(VendedorB,&toventaB);
    Ventatotal(VendedorC,&toventaC);
    mejorvendedor(&toventaA,&toventaB,&toventaC,&bonoA,&bonoB,&bonoC);
    pay(&bonoA,&bonoB,&bonoC);
    

    

}
void Ventas(int *nvendedor){	
	printf("Vendedor %i:\n",vendedor);
	for(i=0;i<6;i++){
		printf("Introducir las ventas del dia %i:",i+1);
		scanf("%i",&nvendedor[i]);
	}}
void ventaspro(int *ventasvendedor){	
	float promedio=0;
	
	for(i=0;i<6;i++){
		promedio+=ventasvendedor[i];	
	}
	promedio/=6;
	printf("El promedio de ventas del vendedor %i son de:%.2f\n",vendedor,promedio);	
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
	printf("El TOTAL de ventas del Vendedor %i son:%i\n",vendedor,*toventa);
	vendedor++;
}
void bestseller(int *vendedor1,int *vendedor2,int *vendedor3,int *bn1,int *bn2,int *bn3){
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
void pay(int *bono1,int *bono2,int *bono3){
	float pagobonus=0;
	
	pagobonus=1000*1.1*1.02;
	
	if(*bono1>0){
		printf("Su sueldo base del vendedor 1 es $1000 + bonus de venta del 10%% ($1100) + bonus de empleado del mes de 2%%, en TOTAL: %0.2f\n",pagobonus);		
	}
	else{
		printf("Su sueldo base del vendedor 1 es $1000 y usted no obtuvo ningun bonus\n");
	}
	if(*bono2>0){
		printf("Su sueldo base del vendedor 2 es $1000 + bonus de venta del 10%% ($1100) + bonus de empleado del mes de 2%%, en TOTAL: %0.2f\n",pagobonus);		
	}
	else{
		printf("Su sueldo base del vendedor 2 es $1000 y usted no obtuvo ningun bonus\n");
	}
	if(*bono3>0){
		printf("Su sueldo base del vendedor 3 es $1000 + bonus de venta del 10%% ($1100) + bonus de empleado del mes de 2%%, en TOTAL:%0.2f\n",pagobonus);		
	}
	else{
		printf("Su sueldo base del vendedor 3 es $1000 y usted no obtuvo ningun bonus\n");
	}
}
