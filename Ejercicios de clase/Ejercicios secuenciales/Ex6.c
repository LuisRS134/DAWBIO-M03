#include <stdio.h>
#include <stdlib.h>

/*Deberes

Ej-Secuenciales:6.-Programa que lee una temperatura en la escala centígrada y nos calcula y escribe su valor en la
escala Fahrenheit. ºC / 100 = (ºF – 32) / 180

	1.Definimos varaibles
	
	2.Preguntaremos al usuario los datos y haremos que el programa los lea.
	
	3.Procesaremos los datos obtenidos por el usuario.
		*Nos ayudamos gracias a la formula que nos dan 
			-> ºC / 100 = (ºF – 32) / 180 => ºF= ªc * 1.8 + 32
		
	4.Mostraremos los resultados obtenidos 
		
*/	
int main()
{
	//Definimos variable
		float cent, fah;
		
	//Leer 
		printf("\n\t\t\4 \4 \4 \4 \4 Secuenciales - Ex 6 \4 \4 \4 \4 \4\n\n");
		
		printf("\n\t\4 Conversor de centigrados a Fahrenheit\n\n");
		
		printf("\n\t\t\376 Centigrados: ");
			scanf("%f", &cent);
			
	//Procesar datos
		fah = cent * 1.8 + 32;
		
	//Mostrar resultados
		printf("\n\t\t\20 %.2f\247c a Fahrenheit son : %.2f \247F\n\n", cent, fah);

	
	return 0;	
}
