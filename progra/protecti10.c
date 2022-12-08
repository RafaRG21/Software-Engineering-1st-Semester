#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/* ACT 10*/

int main() {
	char cadena[30];
	int i=0, letra=0,num=0,ocar=0; 
	printf("Escribe algo no mayor a 30 caracteres:\n" );
	gets(cadena);
	for(i=0;i<strlen(cadena);i++){
		if(isalpha(cadena[i])) 
			letra=letra+1;
	}
	for(i=0;i<strlen(cadena);i++){
		if(isdigit(cadena[i])) 
			num=num+1;
	}
	for(i=0;i<strlen(cadena);i++){
		if(ispunct(cadena[i])) 
			ocar=ocar+1;
	}
	printf("Numero de letras: %d\n",letra);
	printf("Numero de digitos: %d\n",num);
	printf("Numero de caracteres distintos: %d\n",ocar);
	ptintf("Longitud de la cadena %i",strlen(cadena));

	printf("Cadena %s",cadena);
	return 0;
}
