#include <stdio.h>
#include <stdlib.h>

/*

Ej-Cond: 6. Desenvolupa un programa que demani un número a l'usuari i digui si és parell o senar.

*/

int main ()
{
	//Iniciar variable
	int num;
	
	//leer.
	printf("\n\t\t\4 \4 \4 \4 \4 Condicionales - Ex 6 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	printf("\n\t\4 Introduce un numero y te dire si es par o impar.\n");
	
	printf("\n\t\376 Numero: ");
		scanf("%i", &num);
		
		
	//Procesar datos con IF
		
		//Condición 1: Si el resto de num/2 es igual == 0 sera par.
		if( num % 2 == 0)
		{
			//posible respuesta 1.
			printf("\n\n\t \20 Es par.\n\n");
		}
		else
		{
			//Posible respuesta 2.
			printf("\n\n\t \20 Es impar. \n\n");
		}
	
	
	return 0;
}
