#include <stdio.h>
#include <stdlib.h>

/*ACT 1 b */

int main() {
	int exam[5][5],i=0,j=0;
	float alumnos,tipoexa,mayor=0;
		printf("Ingrese datos de la primera matriz:\n");
	for(i=0;i<5;i++)
	for(j=0;j<5;j++) {
	
		printf("Tabla[%d][%d]:",i+1,j+1);
		scanf("%i",&exam[i][j]);
	}
	for(i=0;i<5;i++){
	alumnos=0;
	for(j=0;j<5;j++)
	alumnos+=exam[i][j];
	tipoexa+=exam[j][i];
	printf("Promedio alumno %d: %f\n",i+1,alumnos/5);
}
	for(i=0;i<5;i++){
	tipoexa=0;
	for(j=0;j<5;j++)
	tipoexa+=exam[j][i];
	printf("Promedio Examen tipo %d: %f\n",i+1,tipoexa/5);
	if(tipoexa>mayor)
	mayor=tipoexa;
}
printf("Promedio de examen mas alto: %f",mayor/5);
	
	return 0;
}
