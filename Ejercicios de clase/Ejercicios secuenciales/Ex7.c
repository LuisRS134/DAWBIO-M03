#include <stdio.h>
#include <stdlib.h>

/*Deberes

Ej-Secuenciales:7.-Ahora que introduciendo grados F nos da su equivalente en C.

	1.Definimos varaibles
	
	2.Preguntaremos al usuario los datos y haremos que el programa los lea.
	
	3.Procesaremos los datos obtenidos por el usuario.
		*Nos ayudamos gracias a la formula que nos dan 
			-> ºC / 100 = (ºF – 32) / 180 => ªc=(ªF-32)/1.8
		
	4.Mostraremos los resultados obtenidos 
		
*/	
int main()
{
	//Definimos variable
		float cent, fah;
		
	//Leer 
		printf("\n\t\t\4 \4 \4 \4 \4 Secuenciales - Ex 7 \4 \4 \4 \4 \4\n\n");
		
		printf("\n\t\4 Conversor de Fahrenheit a centigrados \n\n");
		
		printf("\n\t\t\376 Fahrenheit: ");
			scanf("%f", &fah);
			
	//Procesar datos
		cent = (fah - 32) / 1.8;
		
	//Mostrar resultados
		printf("\n\t\t\20 %.2f\247F a centigrados son : %.2f \247c\n\n", fah, cent);

	
	return 0;	
}
