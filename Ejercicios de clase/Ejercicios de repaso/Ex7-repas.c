#include <stdio.h>
#include <stdlib.h>

int main()
{
	//iniciar variables.
	int cont=0;
	int num, res;
	
	
	do
	{
		//Título.
		printf("\n\t\t\4 \4 \4 \4 \4 Repaso - Ex 7 \4 \4 \4 \4 \4\n\n");
	
		//Pedimos al usuario q introduzca un numero.
		printf("\n\t \4 Dime un numero (1 a 10): ");
			scanf("%i", &num);
	}while(num>1 || num<10)

	
	//Titulo->para que el usuario vea la tabla de multiplicacion que creo.
	printf("\n\n\t \376 La tabla de multiplicar del %i |\n",num);
	printf("\t  --------------------------------\n\n");//decorativo.
	
	//Procesamos datos con while.
		//condicion: le indicamos al contador que recorra hasta llegar a 10.
		while(cont<=10)
		{
			//Operción matemática.
			res = num * cont;
			//Posible respuesta si efectua correctamente las otras condiciones.
			printf("\t \20  %i * %i = %i\n", num, cont, res);
					
			printf("\n");//salto de línea.
					
			cont++;//le indicamos que va recorrer de uno a uno.
		}
		
	return 0;
}
