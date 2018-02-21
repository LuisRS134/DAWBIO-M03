#include <stdio.h>
#include <stdlib.h>

/*

Ej-Cond:1. Desenvolupa un programa que demani dos numeros a l'usuari i posteriorment ú escrigui els dos
números ordenats de manera creixent (de menor a major). Ex: Si els números són 3 i 2 => el resultat
serà 2 3

*/

int main()
{
	//Definir variable.
	int num1, num2;
	
	//leer.
	printf("\n\t\t\4 \4 \4 \4 \4 Condicionales - Ex 1 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	printf("\n\n\t\4 Introduce 2 numeros para odenarlos (menor a mayor)\n\n");
	
	printf("\n\t\t\376 1 numero: ");// Utilice /376 en modo decorativo.
		scanf("%i", &num1);
	
	printf("\n\t\t\376 2 numero: ");
		scanf("%i", &num2);
		
		
	//Procesar datos con IF.

		//Condición 1.
		if(num1<num2)
		{
			//Posible 1 respuesta.
			printf("\n\n\t\t\20 El orden es : %i , %i\n\n", num1, num2);// Utilice /20 en modo decorativo.
		}
		else
		{
			//Posible 2 respuesta.
			printf("\n\n\t\t\20 El orden es : %i , %i\n\n", num2, num1);
		}
			
	
	return 0;
}
