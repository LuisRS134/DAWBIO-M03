#include <stdio.h>
#define DOL 1.1729
/*Deberes

Ej-Secuenciales:5.-Programa que haga la conversión de euros a dolares.

	1.Definimos varaibles
		*Ya que es una cantidad de moneda tendra que ser float.
		*Haremos un define 
	
	2.Preguntaremos al usuario los datos y haremos que el programa los lea.
	
	3.Procesaremos los datos obtenidos por el usuario.
		
	4.Mostraremos los resultados obtenidos 
		
*/	
int main()
{
	//Definimos variables
		float euro, res;
		
	//Leer 
		printf("\n\t\t\4 \4 \4 \4 \4 Secuenciales - Ex 5 \4 \4 \4 \4 \4\n\n");
		
		printf("\n\t\4 Conversor de euro a dolar\n\n");
		
		printf("\n\t\t\376 Su cantidad: ");
			scanf("%f", &euro);
			
	//Procesar datos
		res = euro * DOL;
		
	//Mostrar resultados
		printf("\n\t\t\20 conversion final = %.2f \44\n\n", res);
		
		ç
	return 0;	
}
