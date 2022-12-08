#include <stdio.h>
#include <stdlib.h>

/* ACT 7b */

int main() {
	int numeros[15],i,cantidadn=0;
	float media=0;
	printf("Ingresar la cantidad de numeros:");
	scanf("%d",&cantidadn);
		for(i=0;i<cantidadn;i++){
			printf("Ingresar numero %d :",i+1);
			scanf("%d",&numeros[i]);
			media=media+numeros[i];	
		}
		printf("Numeros pares:\n");
		for(i=0;i<cantidadn;i++){
		if(numeros[i]%2==0){
				printf("%d\n",numeros[i]);
				}
			}
	media=media/cantidadn;
	printf("media: %f",media);
			
	
	return 0;
}
