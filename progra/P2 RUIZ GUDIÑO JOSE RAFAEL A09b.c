#include <stdio.h>
#include <stdlib.h>

/* Act 9b*/

int main() {
	int num[20], i,c, cant,busc,opc;

	
	
	printf("Cuantos elementos quieres en el arreglo?:");
	scanf("%d",&cant);
	if(cant>4){
	if(cant>20){
		printf("La maxima cantidad de numeros son 20");
	}
	else {
	
	for(i=0;i<cant;i++){
		printf("Ingresar numero %d:",i+1);
		scanf("%d",&num[i]);}
     }}
    else{
        printf("Se necesitan minimo 5 numeros");
      
	 }
	 do{
	 
		printf("Ingrese otro numero:");
		scanf("%d",&busc);
		for(i=0;i<cant;i++){
			if(num[i]==busc)
			c++;		
		}
		if(c!=0){
		printf("El numero %d aparece %d veces",busc,c-1);
		printf("\nDeseas repetir la opcion?");
		printf("\n1.Si.");
		printf("\n2.No.");
		printf("\nOpcion a elegir:");
		scanf("%d",opc);
	}
		

	    else {
		printf("El numero %d no aparece en el arreglo",busc);
	}
}
	while(opc!=1);
	return 0;
}
