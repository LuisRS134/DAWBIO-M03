#include <stdio.h>
#include <stdlib.h>

/*

Ej-Cond: 3. Desenvolupa un programa que demani un any i escrigui si �s de trasp�s o no. Sabem que s�n de
trasp�s tots els anys m�ltiples de 4, excepte els que siguin m�ltiples de 100 sense que siguin
m�ltiples de 400.

*/

int main ()
{
	//Iniciar variable.
	int any;
	
	//leer.
	printf("\n\t\t\4 \4 \4 \4 \4 Condicionales - Ex 3 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	printf("\n\n\t\4 Introduce el a\244o y te dire si es bisiesto.\n\n");// Utilice /244 para agregar la '�'.
	
	printf("\n\t\t\376 A\244o: ");// Utilice /376 en modo decorativo.
		scanf("%i", &any);
	
	//Processar datos con IF.
	
		//Condici�n 1.
		if( any % 4 == 0 && any % 100 != 0 || any % 400 == 0 )
		{
			//Posible respuesta 1.
			printf("\n\n\t\t\20 Es bisiesto\n\n");// Utilice /20 en modo decorativo.
		}
		else
		{
			//Posible respuesta 2.
			printf("\n\n\t\t\20 No es bisiesto\n\n");
		}
		
	return 0;
}
