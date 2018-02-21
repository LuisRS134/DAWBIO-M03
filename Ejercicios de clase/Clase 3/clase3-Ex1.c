#include <stdio.h>
#define PI 3.1416

/*Clase 3.
 
Ej1: declarar dos varaibles x e y con los valores 10 y 12 .
Mostrar sus operaciones báscias: +, -, *, / y resto de la división
 
*/

int main()
{
	//variables
	int x=200; 
	int y=12;
	int suma, resta, mult, resto;
	float div;
	
	//operacions
	suma =x + y;
	resta = x - y;
	mult= x * y;
	div= (float) x / y;
	resto= x % y;
	
	//resultats
	printf("\n\t\t\4 \4 \4 \4 \4 Clase 3 - Ex 1 \4 \4 \4 \4 \4\n\n");
	printf("\n\t\20 la suma de %d + %d = %d\n\n", x, y, suma);
	printf("\t\20 la resta de %d - %d = %d\n\n", x, y, resta);
	printf("\t\20 la multiplicacion de %d * %d = %d\n\n", x, y, mult);
	printf("\t\20 la division de %d / %d = %.2f\n\n",  x, y,div);
	printf("\t\20 El resto de %d entre %d = %d\n\n",x, y,resto);
	
	return 0;	
}
