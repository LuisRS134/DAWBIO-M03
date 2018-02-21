#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, num;
	
	printf("\n\tIntroduce numero: ");
		scanf("%i", &num);
		
	printf("\n");	
	
    for (i=1; i<=num; i++) {/*Fila = 1*/
        for(j=1; j<=i; j++){/*Imprime las columnas de la fila i*/
            printf("   %i ", j);
        }
        printf("\n");
    }
	
	return 0;
}
