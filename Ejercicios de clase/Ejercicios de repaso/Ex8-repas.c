#include <stdio.h>
#include <stdlib.h>

int main()
{
	int res,i;
	int num=4;
	
	
	while(num>1 && num<10)
	{
	printf("\n\n\t \376 La tabla de multiplicar del %i |\n",num);
	printf("\t  --------------------------------\n\n");//decorativo.
	
	//Procesamos datos con while.
		//condicion: le indicamos al contador que recorra hasta llegar a 10.
		for(i=0; i<=10; i++)
		{
			//Operción matemática.
			res = num * i;
			//Posible respuesta si efectua correctamente las otras condiciones.
			printf("\t \20  %i * %i = %i\n", num, i, res);
					
			printf("\n");//salto de línea.
					
		}
		num++;
	}
	
	return 0;
}
