#include <stdio.h>
#include <stdlib.h>


int main() {
	char nombre[30],apellidos[30],direccion[60];
	int i, letra=0, categoria;
	printf("\nEscribe tu nombre:");
	gets(nombre);
	printf("\nEscribe tus apellidos:");
	gets(apellidos);
	printf("\nEscribe tu direccion:");
	gets(direccion);
	printf("\n 1- Asistente\n 2- Director\n 3- Mecanico\n Escribe no. de categoria:");
	scanf("%d",&categoria);
	switch(categoria){
		case 1: printf("Categoria 1: Asistente");
		break;
		case 2: printf("Categoria 2: Director");
		break;
		case 3: printf("Categoria 3: Mecanico");
		break;
		default: printf("Categoria inexistente");
		break;
	}
	for(i=0;i<strlen(apellidos);i++){
		if(isalpha(apellidos[i])) 
			letra=letra+1;
	}
	printf("\nNombre: %s",strupr(nombre));
	printf("\nApellidos: %s",strupr(apellidos));
	printf("\nNumero de letras del apellido: %d",letra);
	
	
	return 0;
}
