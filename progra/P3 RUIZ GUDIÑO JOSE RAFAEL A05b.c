#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Act 5b */
typedef struct control{
	int numbempleado;
	char namempleado[50];
	char surnamempleado[50];
	int sueldob;
	int diatrabajado;
	int descuentos;
	int sueldototal;
}c;
int main() {
	c c;
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
           	printf("Ingresar el numero de empleado:\n");
          	scanf("%d",&c.numbempleado);
          	fflush(stdin);
	        printf("Ingresar nombre:\n");
	        gets(c.namempleado);
	        fflush(stdin);
	        printf("Ingresar apellidos:\n");
	        gets(c.surnamempleado);
	        fflush(stdin);
	        printf("Ingresar sueldo base:\n");
	        scanf("%d",&c.sueldob);
	        fflush(stdin);
	        printf("Ingresar dias trabajados:\n");
            scanf("%d",&c.diatrabajado);
            fflush(stdin);
            printf("Ingresar descuentos:\n");
            scanf("%i",&c.descuentos);
            fflush(stdin);
             printf("Ingresar sueldo total:\n");
            scanf("%i",&c.sueldototal);
            fflush(stdin);
		break;
		case 2:
			printf("\n1.Numero de empleado\n");
			printf("2.Nombre\n");
			printf("3.Apellidos\n");
			printf("4.Sueldo base\n");
			printf("5.Dias trabajados\n");
			printf("6.Descuentos\n");
			printf("7.Sueldo Total\n");
			printf("Campo a modificar:");
			scanf("%i",&opc2);
			switch(opc2){
				case 1: printf("Nuevo valor:");
				       scanf("%i",&c.numbempleado);
				break;
				case 2: printf("Nuevo valor:");
				        gets(c.namempleado);
				break;
				case 3: printf("Nuevo valor:");
				        gets(c.surnamempleado);
				break;
				case 4: printf("Nuevo valor:");
			         	scanf("%i",&c.sueldob);
				break;	
				case 5: printf("Nuevo valor:");
				        scanf("%i",&c.diatrabajado);
				break;	
				case 6: printf("Nuevo valor:");
				        scanf("%i",&c.descuentos);
				break;
				case 7: printf("Sueldo total:");
				        scanf("%i",&c.sueldototal);
				break;	
					
			}
			
		break;
		case 3: 
				printf("Numero de empleado: %d\n",c.numbempleado);
				printf("Nombre: %s\n",c.namempleado);
				printf("Apellidos: %s\n",c.surnamempleado);
				printf("Sueldo base: %d\n",c.sueldob);
				printf("Dias trabajados: %d\n",c.diatrabajado);
				printf("Descuentos: %d\n",c.descuentos);
				printf("Sueldo Total: %d\n",c.sueldototal);
		
			
			getch();
		break;
		default:
		break;
	}
}while(opc!=4);
	
	return 0;
}

