#include <stdio.h>
#include <stdlib.h>

/*Deberes

Ej-Secuenciales:4.-Programa que te pida el precio de un producto. 
Que pida también el IVA que se le aplica y te muestre el precio final

	1.Definimos varaibles
		*Ya que es un precio tendra que ser float.
	
	2.Preguntaremos al usuario los datos y haremos que el programa los lea.
	
	3.Procesaremos los datos obtenidos por el usuario.
		*Procesar la cantidad agregada aparte.
		
	4.Mostraremos los resultados obtenidos 
		*Para una mejor información hacia el usuario le mostraremos la cantidad agregada al precio.
		
*/	
int main()
{
	//Definir variables
		float precio, iva, cant, res;
	
	//Leer
		printf("\n\t\t\4 \4 \4 \4 \4 Secuenciales - Ex 4 \4 \4 \4 \4 \4\n\n");
		
		printf("\n\t\376 Su Precio: ");
			scanf("%f", &precio);
		
		printf("\t\376 Su IVA: ");
			scanf("%f", &iva);
	
	//Procesar datos		
		cant = precio * iva / 100;
			
		res = precio + cant;
	
	//Mostrar resultados	
		printf("\n\t\t\20 Su IVA es : %.2f", iva);
			printf(" %c\n\n", '%');//para poder imprimir %
		
		printf("\t\t\20 La cantidad es : %.2f \44 \n\n", cant);
		
		printf("\t\t\20 Precio final : %.2f \44\n\n", res);
			
    
	
	return 0;	
}
