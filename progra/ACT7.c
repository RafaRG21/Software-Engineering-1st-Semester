#include <stdio.h>
#include <stdlib.h>


/* ACT 7A*/

int main() {
	int candidato1[7],candidato2[7],candidato3[7],cantidadvpc1,cantidadvpc2,cantidadvpc3,cantidadvt,nmayor1=0,nmayor2=0,nmayor3=0,posi1,posi2,posi3,nmenor1,nmenor2,nmenor3,posim1,posim2,posim3,i;
	printf("Votos del candidato 1:\n\n");
	for(i=0;i<7;i++){
		printf("Ingresar la cantidad de votos de la casilla %d:",i+1);
		scanf("%d",&candidato1[i]);
		cantidadvpc1=cantidadvpc1+candidato1[i];
		if(candidato1[i]>nmayor1){
			nmayor1=candidato1[i];
			posi1=i+1;	   
		}
		if(nmenor1>candidato1[i]){
			nmenor1=candidato1[i];
			posim1=i+1;
		} 
			    
	}

	printf("\nVotos del candidato 2:\n\n");
		for(i=0;i<7;i++){
		printf("Ingresar la cantidad de votos de la casilla %d:",i+1);
		scanf("%d",&candidato2[i]);
		cantidadvpc2=cantidadvpc2+candidato2[i];
			if(candidato2[i]>nmayor2){
			nmayor2=candidato2[i];
			posi2=i+1;
	}
		if(nmenor2>candidato2[i]){
			nmenor2=candidato2[i];
			posim2=i+1;
		} 
}
	printf("\nVotos del candidato 3:\n\n");
		for(i=0;i<7;i++){
		printf("Ingresar la cantidad de votos de la casilla %d:",i+1);
		scanf("%d",&candidato3[i]);
		cantidadvpc3=cantidadvpc3+candidato3[i];
			if(candidato3[i]>nmayor3){
			nmayor3=candidato3[i];
			posi3=i+1;
		}
			if(nmenor3>candidato3[i]){
			nmenor3=candidato3[i];
			posim3=i+1;
		} 
	}
	    cantidadvt=cantidadvpc1+cantidadvpc2+cantidadvpc3;
			printf("Total de votos del candidato 1: %d\n",cantidadvpc1);
			printf("Total de votos del candidato 2: %d\n",cantidadvpc2);
			printf("Total de votos del candidato 3: %d\n",cantidadvpc3);
			printf("Total de votos de la eleccion: %d\n",cantidadvt);
			printf("\nNumero de casilla que obtuvo mas votos el candidato 1: %d\n",posi1);
			printf("Numero de casilla que obtuvo mas votos el candidato 2: %d\n",posi2);
			printf("Numero de casilla que obtuvo mas votos el candidato 3: %d\n",posi3);
			printf("\nNumero de casilla que obtuvo menos votos el candidato 1: %d\n",posim1);
			printf("Numero de casilla que obtuvo menos votos el candidato 2: %d\n",posim2);
			printf("Numero de casilla que obtuvo menos votos el candidato 3: %d\n",posim3);

	if(cantidadvpc1>cantidadvpc2){
		if(cantidadvpc1>cantidadvpc3){
			if(cantidadvpc2>cantidadvpc3){
				printf("El ganador es: Candidato 1\n Segundo lugar: Candidato 2\n Tercer lugar: Candidato 3\n");
			}
			else{ 
			printf("El ganador es: Candidato 1\n Segundo lugar: Candidato 3\n Tercer lugar: Candidato 2\n");
			}
		}
		else{
			printf("El ganador es: Candidato 3\n Segundo lugar: Candidato 1\n Tercer lugar: Candidato 2\n");
		}
	}
	else{
		if(cantidadvpc2>cantidadvpc3){
			if(cantidadvpc1>cantidadvpc3){
				printf("El ganador es: Candidato 2\n Segundo lugar: Candidato 1\n Tercer lugar: Candidato 3\n");
			}
			else{
				printf("El ganador es: Candidato 2\n Segundo lugar: Candidato 3\n Tercer lugar: Candidato 1\n");
			}
		}
		else{
			printf("El ganador es: Candidato 3\n Segundo lugar: Candidato 2\n Tercer lugar: Candidato 1\n");
		}
	}

			
		
	return 0;
}









