#include <stdio.h>

/*Clase 3 

Ej5: Hacer un programa donde el usuario adivine un numero. El numero a de ser generado aleatoriamente
aleatorio como max 10.

*/

int main()
{
	//valores
	srand(time(NULL));
	int valor;
	valor=rand()%10;
	int num;
	
	printf("\n\t\t\4 \4 \4 \4 \4 Clase 3 - Ex 5 \4 \4 \4 \4 \4\n\n");
	 printf("\t\20 Escribe tu numero: ");
	 scanf("%i", &num);
	
	if(num==valor)
	{
		printf("\n\t Adivino!! \2");
	}
	else
	{
		printf("\n\t Lo siento! El valor era %i", valor);
	}
	
	return valor;	
}
