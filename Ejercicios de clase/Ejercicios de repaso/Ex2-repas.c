#include <stdio.h>
#include <stdlib.h>


int main()
{
	int dia;
	do
	{	
		printf("\n\tEl numero del dia de la semana?(1-7) ");
			scanf("%i", &dia);
			printf("\n");
		switch(dia)//version con switch.
		{
			case 1:printf("\t\tEs Lunes.\n\n");break;
			case 2:printf("\t\tEs Martes.\n\n");break;
			case 3:printf("\t\tEs Miercoles.\n\n");break;
			case 4:printf("\t\tEs Jueves.\n\n");break;
			case 5:printf("\t\tEs Viernes.\n\n");break;
			case 6:printf("\t\tEs Sabado.\n\n");break;
			case 7:printf("\t\tEs Domingo.\n\n");break;
			default: printf("\t\tTe equivocaste.\n\n");
		}	
	}while(dia<1 || dia>7);
	
	return 0;
}
