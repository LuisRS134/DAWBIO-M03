#include <stdio.h>
#include <stdlib.h>

/*

Ej-iterativas: 17.Escriu un programa que llegeixi un número N més gran que 0 i calculi la seguent suma : 1+2+......+N

*/

int main ()
{
	int n,i,suma=0;

	printf("N: ");
	scanf("%i", &n);
	
	for(i=1; i<=n; i++)
	{
		printf("%i ",i);
		suma+=i;
		printf("\n\n%i + = %i",i, suma);
	}


	return 0;
}
