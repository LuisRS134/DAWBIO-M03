#include <stdio.h>

/*Clase 3 

Ej6
: Hacer un programa donde el usuario adivine un numero del 0-99. El numero a de ser generado aleatoriamente
aleatorio como max 100.Se le dira que casi acierta si tiene un max o min 10 

*/

int main()
{
	//valores
	srand(time(NULL));//inicia la rueda de numeros aleatorios
	int valor;
	valor=rand()%100;//genera num aleatorio dentro del intervalo[0-99]
	int num;
	
	printf("\n\t\t\4 \4 \4 \4 \4 Clase 3 - Ex 6 \4 \4 \4 \4 \4\n\n");
	printf("\n\t\4 Escribe un numero(0-99): ");
	scanf("%i", &num);
	
	if(num < 0 || num > 99 )
	{
		printf("\n\n\t\t\376 Error!!!\n\n");
	}
	else
	{	
		if(num==valor)
		{
			printf("\n\n\t\t\376 Acertaste!! \2\n\n");
		
		}
		else
		{	
			if(valor<=num+10 && valor>=num-10)
			{
				printf("\n\n\t\t\376 Casi acertaste!\t\32\tEl valor era %i\n\n", valor);
			}
			else
			{
				printf("\n\n\t\t\376 Lo siento!\t\32\tEl valor era %i\n\n", valor);
			}
				
		}
		
	}
	return valor;	
}
