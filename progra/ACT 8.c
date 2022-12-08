#include <stdio.h>
#include <stdlib.h>

/* ACT 8*/

int main() {
	int o,numeros[20],f=0,n,i,o2=0,f2=0;
	for(i=0; i<20; i++){
	numeros[i]=0;}
	do{
	if (f2==1){
        for(i=0; i<20; i++){
        if(numeros[i]==0){
			do{
			numeros[i]=numeros[i+1]; i++;}
			while(i<20);}}
			    numeros[19]=0;
}
    printf("\n\n1.Capturar un numero."); 
    printf("\n2.Hacer lista de los numeros."); 
    printf("\n3.Buscar un numero."); 
    printf("\n0.Salir."); 
    printf("\nSelecciona una opcion: "); 
    scanf("%i", &o);
    switch (o){
        case 1:
        if(numeros[19]>0){
            printf("No se pueden tener mas de 20 numeros. Borra uno para agregar mas.");}
        for(i=0; i<20; i++){
        if(numeros[i]==0){
            printf("\nDame el numero: "); 
            scanf("%i", &numeros[i]); i=20;}}
            break;
        case 2:
        for(i=0; i<20; i++){
            if(numeros[i]!=0){
                printf("\n[%i]: %i", i, numeros[i]);}}
                break; 
        case 3:
		printf("\nEscribe el numero que quieres buscar: "); 
        scanf("%i", &n);
        for(i=0; i<20; i++){
        if(n==numeros[i]){
            f=1; 
            i=20;}}
		if(f==1){
            printf("\n1.Imprimir la posicion del numero"); 
            printf("\n2.Borrar numero"); 
            printf("\n3.Cambiar numero"); 
            printf("\n4.Volver al menu principal"); 
            printf("\n\nSelecciona una opcion: "); 
            scanf("%i", &o2);
        switch (o2) { 
            case 1:
            for(i=0; i<20; i++){
            if(n==numeros[i]){
                printf("\nLa posicion del numero %i esta ubicado en la posición [%i]", numeros[i], i);}}
                break;

            case 2:
            for (i=0; i<20; i++){
            if(n==numeros[i]){
                numeros[i]=0; 
                printf("\nNumero borrado exitosamente"); 
                f2=1;}}
                break;
            case 3:
            for (i=0; i<20; i++){
            if(n==numeros[i]){
                printf("\n¿Cuál es el nuevo valor que quieres dar al numero %i ubicado en la posicion %i?: ", numeros[i], i); 
                scanf("%i", &n);
                numeros[i]=n; 
                printf("\nNumero cambiado");}}
                break;
            case 4:
            break;
            default:
            printf("\nOpcion no existente."); 
            break;}}

            else{
                printf("\nNumero no encontrado.");}
                break; 
				default:
				printf("\nOpcion no existente."); 
				break;}} 
				while(o!=0);
				
	return 0;
}

