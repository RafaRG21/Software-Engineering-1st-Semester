#include <stdio.h>
#include <stdlib.h>

/* ACT 7b */

int main() {
	int numeros[15],i,cantidadn=0,nmayor,nmenor,datobuscar,j;
	float media=0;
	printf("Ingresar la cantidad de numeros:");
	scanf("%d",&cantidadn);
		for(i=0;i<cantidadn;i++){
			printf("Ingresar numero %d :",i+1);
			scanf("%d",&numeros[i]);
			media=media+numeros[i];	
				if(numeros[i]>nmayor){
			nmayor=numeros[i];}
			else if(numeros[i]<nmenor){
			nmenor=numeros[i];	}
	
	}
		printf("Numeros pares:");
		for(i=0;i<cantidadn;i++){
		if(numeros[i]%2==0){
				printf("%d ,",numeros[i]);
				}
			
			}
			
		printf("\nNumero a buscar:");
		scanf("%d",&datobuscar);
		for(i=0;i<cantidadn;i++){
			if(numeros[i]==datobuscar) 	
			printf("\nEl numero se ubica en %i\n",i+1);
			else printf("\nNo se encuentra\n");
			}
		
	media=media/cantidadn;
	
	printf("\nPromedio de los numeros: %f",media);
	printf("\nNumero Mayor: %d",nmayor);
	printf("\nNumero Menor: %d",nmenor);

			
	
	return 0;
}
