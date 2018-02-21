#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num1, num2, opcion,suma,resta,mult;
	float div;
	
	printf("\n\n\t \4 Bienvenido, introduce valores\n\n");
	
	printf("\n\t\t\376 1er numero: ");
		scanf("%i", &num1);
		
	printf("\n\t\t\376 2nd numero: ");
		scanf("%i", &num2);
		
	system("cls");
	
	do
	{
		printf("\n\t\4 \4 \4 \4 \4 Menu Calculador \4 \4 \4 \4 \4\n\n");
		
		printf("\n\tQue quieres hacer con %i y %i?\n", num1, num2);
		
		printf("\n\t1. Sumar\n\t2. Restar\n\t3. Multiplicar\n\t4. Dividir\n\t5. Salir\n\n");
		
		printf("\n\t \376 Introduzca opcion:");
			scanf("%i", &opcion);
	
		switch(opcion)//version con switch.
		{
			case 1:	system("cls");
					printf("\n\t\tSumando...\n\n");
					suma=num1+num2;
					printf("\n\t\20 Respuesta:\n\n\t\t%i + %i = %i\n\n",num1, num2, suma);
					system("pause");system("cls");
				break;
				
			case 2:	system("cls");
					printf("\n\t\tRestando...\n\n");
					resta=num1-num2;
					printf("\n\t\20 Respuesta:\n\n\t\t%i - %i = %i\n\n",num1, num2, resta);
					system("pause");system("cls");
				break;
				
			case 3:	system("cls");
					printf("\n\t\tMultiplicando...\n\n");
					mult=num1*num2;
					printf("\n\t\20 Respuesta:\n\n\t\t%i * %i = %i\n\n",num1, num2, mult);
					system("pause");system("cls");
				break;
				
			case 4:	system("cls");
					printf("\n\t\tDividiendo...\n\n");
					div=(float)num1/(float)num2;
					printf("\n\t\20 Respuesta:\n\n\t\t%i / %i = %.2f\n\n",num1, num2, div);
					system("pause");system("cls");
				break;
				
			case 5:	system("cls");
					printf("\n\t\tSaliendo...\n\n");
					printf("\n\t\tGracias por tu vista \3.\n\n");
					system("pause");system("cls");
				break;
				
			default: printf("\n\t\tError!!\n\tEscoge otra vez.\n\n");
		}
		
	}while(opcion!=5);
	
	return 0;
}
