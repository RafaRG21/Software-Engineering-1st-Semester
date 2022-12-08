#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Actividad 5 A */
struct registro{
	char productcode[40];
	char descripcion[50];
	char marca[20];
	char modelo[20];
	int cantidad;
	char name[40];
};
struct registro r;


int main() {
	int opc,opc2;
	do{
	
	system("cls");
	printf("1.Registro\n");
	printf("2.Edicion\n");
	printf("3.Consulta de la informacion\n");
	printf("Opcion a elegir:");
	scanf("%i",&opc);
	switch(opc){
		case 1:
			fflush(stdin);
           	printf("Ingresar el codigo del producto:\n");
          	gets(r.productcode);
          	fflush(stdin);
	        printf("Ingresar la descripcion del producto:\n");
	        gets(r.descripcion);
	        fflush(stdin);
	        printf("Ingresar la marca del producto:\n");
	        gets(r.marca);
	        fflush(stdin);
	        printf("Ingresar el modelo del producto:\n");
	        gets(r.modelo);
	        fflush(stdin);
	        printf("Ingresar la cantidad del producto:\n");
            scanf("%d",&r.cantidad);
            fflush(stdin);
            printf("Ingresar el nombre del provedor:\n");
            gets(r.name);
            fflush(stdin);
			 
		break;
		case 2:
			printf("\n1.Codigo del producto\n");
			printf("2.Descripcion del producto\n");
			printf("3.Marca del producto\n");
			printf("4.Modelo del producto\n");
			printf("5.Cantidad del producto\n");
			printf("6.Nombre del provedor\n");
			printf("Campo a modificar:");
			scanf("%i",&opc2);
			switch(opc2){
				case 1: printf("Nuevo valor:");
				        gets(r.productcode);
				break;
				case 2: printf("Nuevo valor:");
				        gets(r.descripcion);
				break;
				case 3: printf("Nuevo valor:");
				gets(r.marca);
				break;
				case 4: printf("Nuevo valor:");
			         	gets(r.modelo);
				break;	
				case 5: printf("Nuevo valor:");
				        scanf("%d",&r.cantidad);
				break;	
				case 6: printf("Nuevo valor:");
				        gets(r.name);
				break;	
					
			}
			
		break;
		case 3: 
				printf("Codigo del producto: %s\n",r.productcode);
				printf("Descripcion del producto: %s\n",r.descripcion);
				printf("Marca del producto: %s\n",r.marca);
				printf("Modelo del producto: %s\n",r.modelo);
				printf("Cantidad del producto: %d\n",r.cantidad);
				printf("Nombre provedor: %s\n",r.name);
			
			getch();
			
	
		break;
		default:
			break;
	}
}while(opc!=4);
return 0;
}
