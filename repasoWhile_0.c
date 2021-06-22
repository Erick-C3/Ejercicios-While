#include <stdio.h>
#include <stdbool.h>

int main(){

	bool condicion = true;
	int convertir = 0;
	// >=
	while( condicion ){

		printf("Hola\n");
		scanf("%i", &convertir);
		condicion = convertir;// corte interno

	}



	return 0;
}