#include <stdio.h>
#include <stdlib.h>

/* Act 1 A*/

int main() {
	int mA[5][5],mB[5][5],mC[5][5],size,i=0,j=0;
	printf("De que longitud quieres las matrices?:");
	scanf("%d",&size);
	if(size<6){
	
	printf("Ingrese datos de la primera matriz:\n");
	for(i=0;i<size;i++)
	for(j=0;j<size;j++) {
	
		printf("Tabla[%d][%d]:",i+1,j+1);
		scanf("%i",&mA[i][j]);
	}
	printf("Ingrese datos de la segunda matriz:\n");
	
	for(i=0;i<size;i++)
	for(j=0;j<size;j++) {
		printf("Tabla2[%d][%d]:",i+1,j+1);
		scanf("%i",&mB[i][j]);
		mC[i][j]=mA[i][j]+mB[i][j];
	}
	printf("Suma de las matrices\n");
	for(i=0;i<size;i++)
	for(j=0;j<size;j++){
	
	printf("Tabla3[%d][%d]: %d\n",i+1,j+1,mC[i][j]);
}
   }
   else{
   	printf("Numero fuera de rango");
   }
	
	  
	return 0;
}
