#include <stdio.h>
#include <stdlib.h>

/*

Ej-iterativas: 4. Escriu un programa que demani una lletra i mostri l'abecedari des d'aquesta lletra fins a la Z.

*/

int main ()
{
	//Iniciar variable.
	char letra;
	
	//Título.
	printf("\n\t\t\4 \4 \4 \4 \4 Iterativas - Ex 4 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
	
	//Introducción.
	printf("\n\t\4 Introduce una letra y te dare el abecedario desde tu letra.\n\n");
	
	//Pedir valor a usuario.
	printf("\n\t \376 Letra: ");// Utilice /376 en modo decorativo.
		scanf("%c", &letra);
	
		
	//Procesar datos con while.
		
		//Condición: letra <= el caracter z
			// Utilice toupper("variable")-->por si el usuario introduce en minus. o mayus.
		while(toupper(letra)<='Z')
		{
			//Mostrar respuesta.
			printf("\n\t\t \20 %c\n\n", letra);
			//Contador-> le indico que vaya de uno a uno.
			letra++;
		}
	
}
