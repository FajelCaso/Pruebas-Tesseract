#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	
	int i,numParentesis, parejas, j;
	
	printf("Ingrese numero de parejas de parentesis");
	scanf("%d", &numParentesis);
	
	if(numParentesis==0){
		printf("Por favor elija un numero mayor a 0 ");
	}
	
		for(i=1; i<=numParentesis; i++){
		printf("{}");
	}
	
	printf(", ");
	
	
	for(i=1; i<=numParentesis; i++){
		printf("{");
	}
	
	for(i=1; i<=numParentesis; i++){
		printf("}");
	}
	printf("\t");
	
	
	parejas=numParentesis*2;
	
	printf("\n el numero de parentesis es: %d", parejas);
	printf("\t");

}

	
