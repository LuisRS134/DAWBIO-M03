#include <stdio.h>
#include <stdlib.h>

/*

Ej-iterativas: 5. Escriu un programa que mostri el codi ASCII dels caracters des de l'A fins la Z.

*/

int main ()
{
	//Iniciar variable.
	char letra_may=65;//Igualamos la variable a su referente inicial en ASCII 'A'.
	char letra_min=97;//Igualamos la variable a su referente inicial en ASCII 'a'.
	
	//Título.
	printf("\n\t\t\4 \4 \4 \4 \4 Iterativas - Ex 5 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	//Introducción.
	printf("\n\t\4 Programa que muestra abecedario en ASCII.\n\n");
	
		
	//Procesar datos con while.
		
		//Título del processo.
		printf("\n\t\376 Mayusculas ASCII\n");//Simplemente para una mejor visualización.
			//Condición: Indicamos que el tope a imprimir es 90 que es el equivalente a 'Z'.
			while(letra_may<=90)
			{
				//Mostrar respuesta.
				printf("\20 %c ", letra_may);
				//Contador-> le indico que vaya de uno a uno.
				letra_may++;
			}
			
	printf("\n\n");//Salto de línea.
	
		//Título del processo.
		printf("\n\t\376 Minusculas ASCII\n");
			//Condición: Indicamos que el tope a imprimir es 90 que es el equivalente a 'z'.
			while(letra_min<=122)
			{
				//Mostrar respuesta.
				printf("\20 %c ", letra_min);
				//Contador-> le indico que vaya de uno a uno.
				letra_min++;
			}
}
