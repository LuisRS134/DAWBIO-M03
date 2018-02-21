#include <stdio.h>
#include <stdlib.h>
/*al reves el triangulo*/
int main()
{
	int i, j, num;
	
	printf("\n\tIntroduce numero: ");
		scanf("%i", &num);
		
	printf("\n");	
	
    for (i=1; i<=num; i++) {/*Fila*/
        for(j=1; j<=i; j++){/*Columna*/
            printf("   * ", j);
        }
        printf("\n");
    }
	
	return 0;
}
