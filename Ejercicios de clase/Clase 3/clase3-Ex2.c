#include <stdio.h>


/*Clase 3.
 
Ej2:Declara x = 2 e y = 55. Intercambiar los valores.

*/

int main()
{
	//variables
	int x=2;
	int y=55;
	int aux;
	
	//operacions
	aux = x;
	x = y;
	y = aux;
	
	//resultats
	printf("\n\t\t\4 \4 \4 \4 \4 Clase 3 - Ex 2 \4 \4 \4 \4 \4\n\n");
	printf("\n\t\20El nuevo valor de x: %d\n\n",x);
	printf("\t\20El nuevo valor de y: %d\n", y);
	
	return 0;	
}
