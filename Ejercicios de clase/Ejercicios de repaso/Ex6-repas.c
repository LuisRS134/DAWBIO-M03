#include <stdio.h>
#include <stdlib.h>
/*piramide*/
int main()
{
	//Iniciar variable.
	int i, j, num;
	int fila=0; int columna=0; int altura=0;
   printf("\n\n\tEscriba el numero de renglones para la piramide: ");
   //scanf("%d",&num);
	scanf("%d",&altura);
	printf("\n");
  /* for ( i = num ; i >=0 ; i-- )
   {
      for ( j = 0 ; j <=num ; j++ )
      {
      	 if(j>=i)
		 	printf("*");
		 else 
		 	printf(" ");
	  }
        
      for ( j = num - 1 ; j >= 0 ; j--)
      {
      	 if(j>=i)
		 	printf("*");
		 else 
		 	printf(" ");
	  }
    
      printf("\n");
   }
	
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			printf(" ");
			printf("*",i+2);
		}
		printf("\n");
	}*/
	for(fila=0; fila<=altura; fila++)
	{
		for(columna=1; columna<=altura-fila; columna++)
		{
			printf(" ");
		}
		for(columna=1; columna <= fila*2+1; columna++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
