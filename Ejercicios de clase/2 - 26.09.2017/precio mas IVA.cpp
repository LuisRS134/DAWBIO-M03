#include <stdio.h>

main(){
	float precio, IVA, total;
	
printf("introduce el valor del producto: ");
scanf("%f",&precio);
printf("\nintroduce el IVA a pagar (8 - 18 - 21)");
scanf("%f",&IVA);
total= ((precio*IVA)/100)+precio;
printf("\n--------------------------------\nEl precio total es de %.2f",total);	
}
