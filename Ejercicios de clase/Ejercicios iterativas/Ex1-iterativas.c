#include <stdio.h>
#include <stdlib.h>

/*

Ej-iterativas: 1. Escriu un programa que mostri els nombres de l'1 al 10.

*/

int main ()
{
	//Iniciar variable.
	int i;
	int opcion;
	
	do //Utilice un do while solo para que sea mas comodo al visializarlo.
	{
		//Título.
		printf("\n\t\t\4 \4 \4 \4 \4 Iterativas - Ex 1 \4 \4 \4 \4 \4\n\n");// Utilice /4 en modo decorativo.
		
		//Introducción.	
		printf("\n\t\4 Programa que utiliza While y for.\n\n");
		
		//Opción 1.
		printf("\n\t\t1. Ejemplo con For\n\n");
		
		//Opción 2.
		printf("\n\t\t2. Ejemplo con While\n\n");
		
		//Opción 3.
		printf("\n\t\t3. Salir\n\n");
			//Pider al usuario que introduzca su opción
			printf("\n\t\376 Introduzca su opcion: ");// Utilice /376 en modo decorativo.
				fflush(stdin);//limpia el buffer de entrada estándar del teclado.
				scanf("%i", &opcion);
				
		switch(opcion)
		{
			//Opción 1.
			case 1: system("cls");// Para que sea mas facil de ver.
					printf("\n\n\tMostrando ejemplo con For...\n\n");
					printf("\n\t\t\20 For:\n");// Utilice /20 en modo decorativo.
					
					//Procesar datos con FOR.
					
						//Condición: i comienza 1 ; i <= 10 ; i aumenta uno a uno .
						for( i = 1; i <= 10; i++ )
						{
							printf("\n\t\t %i\n", i);
						}
						printf("\n\n\n");//Salto de línea. 
						system("pause");system("cls");
					break;
					
			//Opción 2.
			case 2: system("cls");
					printf("\n\n\tMostrando ejemplo con While...\n\n");
					
					//Iniciar variable que hace de contador.
					int cont=1;
					printf("\n\t\t\20 While:\n");
					
					//Procesar datos con WHILE.
					
						//Condición: cont <= 10.
						while( cont <= 10)
						{
							printf("\n\t\t %i\n", cont);
							cont++; ; //cont aumenta uno a uno .
						}
						printf("\n\n\n");
						system("pause");system("cls");
					break;
					
			//Opción 3.
			case 3: system("cls");
					printf("\n\n\tSaliendo...\n\n");
					printf("\n\n\tGracias por su visita \3\n\n");// Utilice /3 en modo decorativo.
					system("pause");system("cls");
					break;
					
			//Opción 4: Para indicar que el usuario se equivoco de opción.		
			default: system("cls");
					 printf("\n\n\tError!!!\n\n\t\20 Por favor introduzca otra opcion.\n\n");
					 system("pause");system("cls");
					 break;	
		}
	}while(opcion != 3);//Si opcion != 3 saldra del bucle.
	
	
	
	return 0;
}
