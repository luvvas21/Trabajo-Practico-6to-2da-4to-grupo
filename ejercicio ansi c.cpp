#include <stdio.h>
//declaracion de la funcion linea
void linea (char simbolo) {
	for( int i= 0; i < 20; i++)
	{
		printf( "%c", simbolo);
	}
	printf("\n");
 //nueva linea despues de imprimir los 20 caracteres
}

int main(){

 linea('%');//llama a la funcion linea con el simbolo "%"
 return 0;
}
