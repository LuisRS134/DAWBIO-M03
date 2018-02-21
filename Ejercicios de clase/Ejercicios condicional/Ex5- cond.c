#include <stdio.h>
#include <stdlib.h>

/*

Ej-Cond: 5. Desenvolupa un programa que demani un número a l'usuari del 1 al 5 i digui si és un nombre primer o
no.

*/

int main ()
{
	//Iniciar variable
	int num;
	
	//leer.
	printf("\n\t\t\4 \4 \4 \4 \4 Condicionales - Ex 5 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	printf("\n\t\4 Introduce un numero y te dire si es primo o no.\n");
	
	printf("\n\t\376 Numero: ");// Utilice /376 en modo decorativo.
		scanf("%i", &num);
		
		
	//Procesar datos con IF
		
		//Condición 1: Permitir que escriba del 1 hasta 5 incluidos los dos.	
		if( num >= 1 && num <= 5 )
		{
			//Condición 2.
			if( num == 4 || num == 1)
				//Posible respuesta 2.
				printf("\n\n\t \20 No es primo.\n\n");// Utilice /20 en modo decorativo.
			else
				//Posible respuesta 3.
				printf("\n\n\t \20 Es primo.\n\n");
		}
		else
		{
			//Posible respuesta 1
			printf("\n\n\t \20 Numero no valido.\n\n");
		}
	
	
	return 0;
}
