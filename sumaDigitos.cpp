#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

int numero=0;
int suma=0;


printf("Ingrese un numero entero para sumar sus digitos: ");
scanf("%d", &numero);



while(numero>0){
	suma = suma + numero%10;
	numero = numero/10;
}

printf("el resultado de la suma de digitos es: %d", suma);

	return 0;
}
