#include <stdio.h>
#include <stdlib.h>

/*

Ej-Cond: 8. Desenvolupa un programa que demani 3 n�meros i que despr�s els mostri per pantalla de menor a
major en l�nies diferents. Si existeixen n�meros iguals, els mostra per pantalla a una mateixa l�nia.

*/

int main ()
{
	//Iniciar variable.
	int n1, n2, n3;
	
	//leer.
	printf("\n\t\t\4 \4 \4 \4 \4 Condicionales - Ex 8 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	printf("\n\t\4 Introduce 3 numeros y te los ordeno \2 (mayor a menor).\n\n");
	
	printf("\n\t\376 1st numero: ");// Utilice /376 en modo decorativo.
		scanf("%i", &n1);
	
	printf("\n\t\376 2nd numero: ");
		scanf("%i", &n2);
	
	printf("\n\t\376 3rd numero: ");
		scanf("%i", &n3);
		
	//Procesar datos con IF
		
		//Condici�n 1 -> Si todos son iguales.	
		if( n1 == n2 && n2 == n3)
			//Posible respuesta 1.
			printf("\n\n\t \20 n1: %i \t \20 n2: %i \t \20 n3: %i\n\n", n1, n2, n3);// Utilice /20 en modo decorativo.

		else
			//condici�n 2.
			if( n3 > n2 && n2 > n1 )
				//Posible respuesta 2.
				printf("\n\n\t \20 n3: %i \n\n\t \20 n2: %i \n\n\t \20 n1: %i\n\n", n3, n2, n1);

		else
			//Condici�n 3.
			if( n1 > n3 && n3 > n2 )
			//Posible respuesta 3.
			printf("\n\n\t \20 n1: %i \n\n\t \20 n3: %i \n\n\t \20 n2: %i\n\n", n1, n3, n2);
		
		else
			//Condici�n 3c: Por si n1 y n3 son iguales.
			if( n1 >= n3 && n3 > n2 )
			//Posible respuesta 3c.
			printf("\n\n\t \20 n1: %i \t \20 n3: %i \n\n\n\t \20 n2: %i\n\n", n1, n3, n2);

		else
			//Condici�n 4.
			if( n2 > n1 && n1 > n3 )
				//Posible respuesta 4.
				printf("\n\n\t \20 n2: %i \n\n\t \20 n1: %i \n\n\t \20 n3: %i\n\n", n2, n1, n3);
		
		else
			//Condici�n 4b: Por si n1 y n3 son iguales.
			if( n2 > n1 && n1 >= n3 )
				//Posible respuesta 4b.
				printf("\n\n\t \20 n2: %i \n\n\n\t \20 n1: %i \t \20 n3: %i\n\n", n2, n1, n3);
								
		else
			//Condici�n 5.
			if( n2 > n3 && n3 > n1 )
				//Posible respuesta 5.
				printf("\n\n\t \20 n2: %i \n\n\t \20 n3: %i \n\n\t \20 n1: %i\n\n", n2, n3, n1);
		
		else
			//Condici�n 5c: Por si n2 y n3 son iguales.
			if( n2 >= n3 && n3 > n1 )
				//Posible respuesta 5c.
				printf("\n\n\t \20 n2: %i \t \20 n3: %i \n\n\n\t \20 n1: %i\n\n", n2, n3, n1);		
							
		else
			//Condici�n 6.
			if( n3 > n1 && n1 > n2)
				//Posible respuesta 6.
				printf("\n\n\t \20 n3: %i \n\n\t \20 n1: %i \n\n\t \20 n2: %i\n\n", n3, n1, n2);
		
		else
			//Condici�n 6b: Por si n1 y n2 son iguales.
			if( n3 > n1 && n1 >= n2)
				//Posible respuesta 6b.
				printf("\n\n\t \20 n3: %i \n\n\n\t \20 n1: %i \t \20 n2: %i\n\n", n3, n1, n2);
		
		else
			if( n1 > n2 && n2 > n3 )
				//Posible respuesta 7.
				printf("\n\n\t \20 n1: %i \n\n\t \20 n2: %i \n\n\t \20 n3: %i\n\n", n1, n2, n3);	
		
		else
			//Condici�n 7b: Por si n2 y n3 son iguales.
			if( n1 > n2 && n2 >= n3)
				//Posible respuesta 7.
				printf("\n\n\t \20 n1: %i \n\n\n\t \20 n2: %i \t \20 n3: %i\n\n", n1, n2, n3);	
								
		else
			//Condici�n 7c
			if( n1 >= n2 && n2 > n3)
				//Posible respuesta 7c: Por si n1 y n2 son iguales.
				printf("\n\n\t \20 n1: %i \t \20 n2: %i \n\n\n\t \20 n3: %i\n\n", n1, n2, n3);
		
	return 0;
}
