#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Actividad 6*/
typedef struct restaurante{
	int numreservacion;
	char name[50];
	char surname[50];
	int npeople;
	char date[20];

}r;
r re[10];
int main() {
	int opc,opc2,i;
	do{
    int nre=0;
	system("cls");
	printf("1.-Registro\n");
	printf("2.-Edicion\n");
	printf("3.-Consulta de la informacion\n");
	printf("4.-Salir\n");
	printf("Opcion a elegir:\n");
	scanf("%d",&opc);
	switch(opc){
		case 1: 
		for(i=0; i<10; i++){
		
		printf("\nNumero de revervacion:\n");
		        scanf("%d",&re[i].numreservacion);
		        fflush(stdin);
		        printf("Nombre:\n");
		        gets(re[i].name);
		        fflush(stdin);
		        printf("Apellidos:\n");
		        gets(re[i].surname);
		        printf("Numero de personas:\n");
		        scanf("%d",&re[i].npeople);
		        fflush(stdin);
		        printf("Fecha:\n");
		        gets(re[i].date);
		        i=10;
		    }
			break;
		case 2: printf("\nIntroduce el numero de reservacion\n");
		        scanf("%d",&nre);
		        for(i=0; i<10; i++){
				if(nre==re[i].numreservacion){
					nre=i;
		        printf("1.-Nombre: %s\n",re[i].name);
		        printf("2.-Apellidos: %s\n",re[i].surname);
		        printf("3.-Numero de personas: %d\n",re[i].npeople);
		        printf("4.-Fecha: %s\n",re[i].date);
		        printf("\nCampo a modificar:\n");}}
		        scanf("%d",&opc2);
		        switch(opc2){
		        	case 1: 
					for(i=0; i<10; i++){
				    if(nre==re[i].numreservacion){
					printf("Nuevo nombre");}
		                   	gets(re[i].name);}
		        		break;
		        	case 2: 
					for(i=0; i<10; i++){
				    if(nre==re[i].numreservacion){
					printf("Nuevo apellido");
		        	        gets(re[i].surname);}}
		        		break;
		        	case 3: 
					for(i=0; i<10; i++){
				    if(nre==re[i].numreservacion){
					printf("Nuevo numero de personas");
		        	        scanf("%d",&re[i].npeople);}}
		        		break;
		        	case 4: 
					for(i=0; i<10; i++){
				       if(nre==re[i].numreservacion){
					printf("Nueva Fecha");
		        	        printf("4.-Fecha: %s\n",re[i].date);}}
		        		break;
				}
			break;
		case 3:
			for(i=0; i<10; i++){
			
				
		       printf("\nNumero de revervacion: %d\n",re[i].numreservacion);
	           printf("Nombre: %s\n",re[i].name);
	           printf("Apellidos: %s\n",re[i].surname);
	           printf("Numero de personas: %d\n",re[i].npeople);
	           printf("Fecha: %s\n",re[i].date);}
			getch();
			break;
		case 4:
			break;
		default: printf("Opcion no valida");
		break;
	}}while(opc!=4);
	
	
	return 0;
}
