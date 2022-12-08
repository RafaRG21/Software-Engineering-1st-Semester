#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*ACT10B*/

int main(void) {
	char cadena[30], cadena2[30];
	int i=0,letra=0,vocal=0,vocal2=0,consonante2=0, vocala=0,vocale=0,vocali=0,vocalo=0,vocalu=0,vtotal=0,consonante=0;
	printf("Escribe una frase no mayor a 30 caracteres:\n");
	gets(cadena);
    printf("Escribe una segunda frase no mayor a 30 caracteres:\n");
    gets(cadena2);
    if(strcmp(cadena,cadena2)==0){
	
    printf("Las dos cadenas son iguales");
    for(i=0;i<strlen(cadena);i++){
		if(isalpha(cadena[i])) {
		
			letra=letra+1;
	}}
	for(i=0;i<strlen(cadena);i++){
		if((cadena[i]=='a')||(cadena[i]=='A')){
			vocala=vocala+1;
		}
	}
	for(i=0;i<strlen(cadena);i++){
		if((cadena[i]=='e')||(cadena[i]=='E')){
			vocale=vocale+1;
		}
	}
	for(i=0;i<strlen(cadena);i++){
		if((cadena[i]=='i')||(cadena[i]=='I')){
			vocali=vocali+1;
		}
	}
	for(i=0;i<strlen(cadena);i++){
		if((cadena[i]=='o')||(cadena[i]=='O')){
			vocalo=vocalo+1;
		}
	}
	for(i=0;i<strlen(cadena);i++){
		if((cadena[i]=='u')||(cadena[i]=='U')){
			vocalu=vocalu+1;
		}
	}	
	vtotal=vocala+vocale+vocali+vocalo+vocalu;
	printf("\nNumero de letras: %d\n",letra);
	printf("\nNumero de \"a\": %d\n",vocala);
	printf("\nNumero de \"e\": %d\n",vocale);
	printf("\nNumero de \"i\": %d\n",vocali);
	printf("\nNumero de \"o\": %d\n",vocalo);
	printf("\nNumero de \"u\": %d\n",vocalu);
	printf("\nNumero total de vocales: %d\n",vtotal);
	printf("\nLongitud de la cadena %d\n",strlen(cadena));
       } else {
	    printf("Las dos cadenas son diferentes");
	    for(i=0;i<strlen(cadena);i++){
	    if(cadena[i] =='A'||cadena[i]=='a'||cadena[i]=='E'||cadena[i]=='e'||cadena[i]=='I'||cadena[i]=='i'||cadena[i]=='O'||cadena[i]=='o'||cadena[i]=='U'||cadena[i]=='u'){
	    	vocal=vocal+1;}
	    	else { 
	    	if(isalpha(cadena[i])){
			consonante =consonante +1;
			}
	    	
		} }
		for(i=0;i<strlen(cadena2);i++){
	    if(cadena2[i] =='A'||cadena2[i]=='a'||cadena2[i]=='E'||cadena2[i]=='e'||cadena2[i]=='I'||cadena2[i]=='i'||cadena2[i]=='O'||cadena2[i]=='o'||cadena2[i]=='U'||cadena2[i]=='u'){
	    	vocal2=vocal2+1;}
	    	else { 
	    	if(isalpha(cadena2[i])){
			consonante2 =consonante2 +1;
			}
	    	
		} }
		printf("\nNumero de consonantes de la primer cadena: %d\n",consonante);
		printf("\nNumero de vocales de la primer cadena: %d\n",vocal);
		printf("\nLongitud de la primer cadena: %d\n",strlen(cadena));
		printf("\nNumero de consonantes de la segunda cadena: %d\n",consonante2);
		printf("\nNumero de vocales de la segunda cadena: %d\n",vocal2);
		printf("\nLongitud de la segunda cadena: %d\n",strlen(cadena2));
}
	getch();
}
