#include <stdio.h>
#include <stdlib.h>

/*ACT4A*/

int main() {
	int n=0,s=0;
	do{
		n=n+2;
		printf("%i\n",n);
		s=s+n;
		
	}while(n<50);
		printf("La suma es: %i\n",s);

	return 0;
}
