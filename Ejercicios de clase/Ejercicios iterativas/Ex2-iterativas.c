#include <stdio.h>
#include <stdlib.h>

/*

Ej-iterativas: 2. Escriu un programa que demana a l'usuari un valor i quantes vegades ho vol sumar i mostri el resultat
de totes les sumes fins a arribar a les vegades demanades.

*/

int main ()
{
	//Iniciar variable.
	int num, sum, res, i;
	
	//Título.
	printf("\n\t\t\4 \4 \4 \4 \4 Iterativas - Ex 2 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	//Introducción.
	printf("\n\t\4 Introduce un numero y las veces que quieras sumarlo.\n\n");
	
	//Pedir valor a usuario.
	printf("\n\t \376 Numero: ");// Utilice /376 en modo decorativo.
		scanf("%i", &num);
	
	//Pedir cantidad de veces a usuario.
	printf("\n\t \376 Cuantas veces lo quieres sumar?\n\n\t  \32 ");// Utilice /32 en modo decorativo para lo que ponga el usuario.
		scanf("%i", &sum);
	
	printf("\n");//salto de línea.
	
	
	//Procesar datos con FOR.
		
		//Condición: i comienza 0 ; i <= sum(la cantidad de veces) ; i aumenta uno a uno.
		for( i = 0; i < sum; i++ )
		{
			
			//Operación matemática.
			res=num+i;
			
			//Respuesta de la operación anterior.
			printf("\n\t\t\20 %i + %i = %i\n\n", num, i, res);
		
		}
		
}
