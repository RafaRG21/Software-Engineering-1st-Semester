#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* ACT PRUWEBA*/
int opc=0, opc2=0,opc2_1,contador=0,r,arreglo,b,i;
char number[20];
typedef struct struct_1{
	char campo1[50];
	char campo2[50];
	char campo3[50];
	char campo4[50];
	char campo5[50];
}array1;
void registro();
int main(){
	array1 a1[20];
	setlocale(LC_ALL,"");
	do{
	
	printf("\n***Submenú 1***\n\n");
			printf("[1] Registro\n");
			printf("[2] Búsqueda\n");
			printf("[3] Eliminación\n");
			printf("[4] Consulta de la información\n");
			printf("[5] Volver al Menú Principal\n");
			printf("Seleccione la opción a elegir:\n");
			scanf("%d",&opc);
			switch(opc){
			case 1: //Registro
				if (contador<20){
					printf("\nCampo 1\n");
					scanf("%d",&a1[contador].campo1);
					fflush(stdin);
					printf("Campo 2\n");
					gets(a1[contador].campo2);
					fflush(stdin);
					printf("Campo 3\n");
					gets(a1[contador].campo3);
					fflush(stdin);
					printf("Campo 4\n");
					gets(a1[contador].campo4);
					fflush(stdin);
					printf("Campo 5\n");
			        gets(a1[contador].campo5);
			contador+= 1;
			
			}else { printf("Ya no hay espacio \n"); }
				break;
			case 2://Búsqueda
				printf("\nIngrese algún dato del registro:\n ");
			gets(number);
			
			for(i=0; i<=contador-1; i++){
				if (number == a1[i].campo1 ){
					arreglo = i;
					b=1;
					do{
				printf("----Datos actuales:---- \n");
				printf("1.- Campo 1: %d \n",a1[arreglo].campo1);
				printf("2.- Campo 2: %s \n",a1[arreglo].campo2);
				printf("3.- Campo 3: %s \n",a1[arreglo].campo3);
				printf("4.- Campo 4: %s \n",a1[arreglo].campo4);
				printf("5.- Campo 5: %s \n",a1[arreglo].campo5);
				printf("6.- Salir\n");
				printf("\nSeleccionas campo a editar:\n");
				scanf("%d", &opc2);
				switch(opc2){

					case 1:
					fflush(stdin);
					printf("Nuevo Campo 1:\n");
					scanf("%d",&a1[arreglo].campo1);	
					break;
					case 2:
						fflush(stdin);
					printf("Nuevo Campo 2:\n");
					gets(a1[arreglo].campo2);
					break;
					case 3:
						fflush(stdin);
					printf("Nueva Campo 3:\n");
					gets(a1[arreglo].campo3);
					break;
					case 4:
						fflush(stdin);
					printf("Nuevo Campo 4: \n");
					gets(a1[arreglo].campo4);
					break;
					case 5: 
						fflush(stdin);
					printf("Nuevo Campo 5: \n");
					gets(a1[arreglo].campo5);
					break;
					case 6:
					break;
					default: printf("\n\nOpción inválida elija de nuevo\n");
						break;
				
			}}while(opc2!=6);}}
			if(b==0){printf ("Intente un dato diferente \n");}
			getch();
			    break;
			
			case 3:
				printf("\nIngrese algún dato del registro:\n ");
			scanf ("%d", &number);
			
			for(i=0; i<=contador-1; i++){
				if (number == a1[i].campo1 || number == a1[i].campo2 || number == a1[i].campo3 || number == a1[i].campo4 || number == a1[i].campo5	){
					arreglo = i;
					b=1;
					
				printf("----Datos del Registro:---- \n");
				printf("Campo 1: %d \n",a1[arreglo].campo1);
				printf("Campo 2: %s \n",a1[arreglo].campo2);
				printf("Campo 3: %s \n",a1[arreglo].campo3);
				printf("Campo 4: %s \n",a1[arreglo].campo4);
				printf("Campo 5: %s \n",a1[arreglo].campo5);
				printf("%cDesea eliminar el registro?\n",168);
				printf("[1] Si\n[2] No\n");
				printf("Opción a elegir:\n");
				scanf("%d",&opc2);
				if(opc==1){
				
					
				}}}
				break;
			case 4:
				if (contador>0){
				
			    printf ("Datos: \n");
				for(i=0; i<=contador-1; i++){
				printf ("Campo 1: %d \n", a1[i].campo1);
				printf ("Campo 2: %s \n", a1[i].campo2);
				printf ("Campo 3: %s \n", a1[i].campo3);
				printf ("Campo 4: %s \n", a1[i].campo4);
				printf ("Campo 5: %s \n", a1[i].campo5);
			
				printf ("-------------------------------- \n");
				
				}
			}else{printf ("No hay Registros  \n");}
				break;
			case 5:
				break;
			default: printf("\n\nOpción inválida elija de nuevo\n");
			    break;
	
}}while(opc!=5);
	return 0;
}

