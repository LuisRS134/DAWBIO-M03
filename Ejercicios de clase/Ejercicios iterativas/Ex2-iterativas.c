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
	
	//T�tulo.
	printf("\n\t\t\4 \4 \4 \4 \4 Iterativas - Ex 2 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	//Introducci�n.
	printf("\n\t\4 Introduce un numero y las veces que quieras sumarlo.\n\n");
	
	//Pedir valor a usuario.
	printf("\n\t \376 Numero: ");// Utilice /376 en modo decorativo.
		scanf("%i", &num);
	
	//Pedir cantidad de veces a usuario.
	printf("\n\t \376 Cuantas veces lo quieres sumar?\n\n\t  \32 ");// Utilice /32 en modo decorativo para lo que ponga el usuario.
		scanf("%i", &sum);
	
	printf("\n");//salto de l�nea.
	
	
	//Procesar datos con FOR.
		
		//Condici�n: i comienza 0 ; i <= sum(la cantidad de veces) ; i aumenta uno a uno.
		for( i = 0; i < sum; i++ )
		{
			
			//Operaci�n matem�tica.
			res=num+i;
			
			//Respuesta de la operaci�n anterior.
			printf("\n\t\t\20 %i + %i = %i\n\n", num, i, res);
		
		}
		
}
