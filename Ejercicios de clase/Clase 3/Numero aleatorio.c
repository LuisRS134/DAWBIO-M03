#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Numero aleatorio*/

int main()
{
	srand(time(NULL));//generamos una semilla para el numero aleatorio
	int test = rand();//obtener el numero aleatorio
	
	printf("El numero aleatorio de test vale %d\n", test);
	printf("La comanda RAND_MAX vale %d\n", RAND_MAX);
	
	return 0;	
}
