#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/* ACT 10A*/

int main(void) {
	char cadena[30];
	int i=0, letra=0,num=0,ocar=0,opcion; 
	do{
	printf("Escribe algo no mayor a 30 caracteres:\n" );
	gets(cadena);
	letra=0;
	for(i=0;i<strlen(cadena);i++){
		if(isalpha(cadena[i])) 
			letra=letra+1;
	}
	num=0;
	for(i=0;i<strlen(cadena);i++){
		if(isdigit(cadena[i])) 
			num=num+1;
	}
	ocar=0;
	for(i=0;i<strlen(cadena);i++){
		if(ispunct(cadena[i])) 
			ocar=ocar+1;
	}
	printf("Numero de letras: %d\n",letra);
	printf("Numero de digitos: %d\n",num);
	printf("Numero de caracteres distintos: %d\n",ocar);
	printf("Longitud de la cadena %i\n",strlen(cadena));

	printf("Cadena en mayuscula %s",strupr(cadena));
	printf("\nDeseas repetir el proceso?:\n");
	printf("1.Si\n2.No\n");
    scanf("%d",&opcion);
    fflush(stdin);
    system("cls");
    } while (opcion==1);
	getch();
}
