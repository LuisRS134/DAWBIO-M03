#include <stdio.h>
#include <stdlib.h>

/*

Ej-iterativas: 3. Escriu un programa que sumi nombres que introdueix l'usuari sempre que el nombre sigui major que
1.

*/

int main ()
{
	//Iniciar variable.
	int num, sum=0;
	
	//Título.
	printf("\n\t\t\4 \4 \4 \4 \4 Iterativas - Ex 3 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	//Introducción.
	printf("\n\t\4 Introduce un numero y lo sumare.\n\n");
	
	//Pedir valor a usuario.
	do
	{
		printf("\n\t \376 Numero: ");// Utilice /376 en modo decorativo.
		scanf("%i", &num);
		
		sum+=num;
		
		printf("\n\t \20 %i", sum);
		
	}while(num > 1);
		
		
}
