#include <stdio.h>
#include <stdlib.h>

/*

Ej-Cond: 2. Desenvolupa un programa que demani un mes i un any, i escrigui el mes anterior i el mes següent.
Ex: Si l’usuari introdueix el mes 10 i l'any 2017, el resultat serà mes anterior: 9/2017 i el mes posterior
11/2017

*/

int main ()
{
	//Definir Variable.
	int mes,any;
	
	//leer.
	printf("\n\t\t\4 \4 \4 \4 \4 Condicionales - Ex 2 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	printf("\n\t\4 Introduce los datos y te dare el anterior y el postior.\n");
	
	printf("\n\n\t\t\376 Mes: ");// Utilice /376 en modo decorativo.
		scanf("%i", &mes);
		
	printf("\n\t\t\376 A\244o: ");// Utilice /244 para agregar la 'ñ'.
		scanf("%i", &any);
	
	
	//Processar datos con IF (anidado).
		
		//Condición 1 por si el usuario introduce un mes que no existe.
		if(mes < 1 || mes > 12)
		{
			//Posible respuesta 1.
			printf("\n\t\t\20 Tu fecha esta mal!\n\n");
		}
		else
		{
			//Condición 2 -> usuario introduce mes: 1 => corregir error en mes y año de fecha anterior.
			if(mes==1)
			{
				//Posible respuestas 2.
				printf("\n\n\t\t\20 Tu Fecha actual es : %.2i-%i\n\n",mes , any);// Utilice /20 en modo decorativo.
				
				printf("\n\t\t\20 Tu Fecha posterior es : %.2i-%i\n\n",mes+1, any);// %.2i para darle un formato al estilo fecha.
				
				//Indicamos mes=12 y año-1 para dar una respuesta correcta.
				mes=12;
				printf("\n\t\t\20 Tu Fecha anterior es : %.2i-%i\n\n",mes , any-1);
				
			}
			else
			{
				//Condición 3 -> usuario introduce mes:12 => corregir error en mes y año de fecha posterior.
				if(mes==12)
				{
					//Posible respuesta 3.
					printf("\n\n\t\t\20 Tu Fecha actual es : %.2i-%i\n\n",mes , any);
				
					printf("\n\t\t\20 Tu Fecha anterior es : %.2i-%i\n\n",mes-1 , any);
				
					//Indicamos mes=1 y año+1 para dar una respuesta correcta.
					mes=1;
					printf("\n\t\t\20 Tu Fecha posterior es : %.2i-%i\n\n",mes, any+1);
				}
				else
				{
					//Posible respuesta 4.
					printf("\n\n\t\t\20 Tu Fecha actual es : %.2i-%i\n\n",mes , any);
				
					printf("\n\t\t\20 Tu Fecha anterior es : %.2i-%i\n\n",mes-1 , any);
				
					printf("\n\t\t\20 Tu Fecha posterior es : %.2i-%i\n\n",mes+1 , any);
				}
			}
		}
	
	return 0;
}
