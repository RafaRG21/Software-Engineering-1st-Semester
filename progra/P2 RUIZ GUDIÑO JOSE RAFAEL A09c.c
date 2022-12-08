#include <stdio.h>
#include <stdlib.h>

/* Act 9c*/

int main() {
	int num[15], i,c,opc;
	do{

	for(i=0;i<15;i++){
		printf("Ingresar numero %d:",i+1);
		scanf("%d",&num[i]);}
			for(i=0;i<15;i++){
			if(num[i]==0)
			c++;		
		}
		if(c!=0){
		printf("\nEl numero 0 aparece %d veces",c-1);
			for(i=0;i<15;i++){
			if(num[i]>=1)
			c++;		
		}}
		if(c!=0){
		printf("\nExisten %d numeros positivos",c-1);
	}
	for(i=0;i<15;i++){
			if(num[i]<=-1)
			c++;		
		}
		if(c!=0){
		printf("\nExisten %d numeros negativos",c-1);
	}
		printf("\nDeseas repetir el proceso?");
		printf("\n1.Si.");
		printf("\n2.No.");
		printf("\nOpcion a elegir:");
		scanf("%d",opc);
    }while(opc!=1);
	return 0;
}
 
