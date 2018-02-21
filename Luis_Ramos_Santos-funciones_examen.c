#include <stdio.h>
#include <stdlib.h>

//Funciones.
void emp_autobuces(int precio, int personas);
void media(int num);
void cel_fah();
void rombo (int num);

//Main.
int main ()
{
	//Iniciar variables.
	int val1, val2, opcion;
	
	//Cree un menu para que sea mejor su visualización.
	do
	{
		printf("\n\t\t\4 \4 \4 \4 \4 Funciones \4 \4 \4 \4 \4\n\n");
		
		printf("\n\t1.\tExercici 1\n\t2.\tExercici 2\n\t3.\tExercici 3\n\t4.\tExercici 4\n\t5.\tSalir\n\n");
			printf("\t\376 Introduzca su opcion: ");
				scanf("%i",&opcion);
				
		switch(opcion)
		{
			case 1:	system("cls");printf("\n\n\t\20 Mostrando Ex1...\n\n");
					emp_autobuces(val1,val2);
					system("pause");system("cls");
					break;
					
			case 2:	system("cls");printf("\n\n\t\20 Mostrando Ex2...\n\n");
					media(val1);
					system("pause");system("cls");
					break;
					
			case 3:	system("cls");printf("\n\n\t\20 Mostrando Ex3...\n\n");
					cel_fah();
					system("pause");system("cls");
					break;
					
			case 4:	system("cls");printf("\n\n\t\20 Mostrando Ex4...\n\n");
					rombo(val1);
					system("pause");system("cls");
					break;
					
			case 5:	system("cls");printf("\n\n\t\20 Saliendo...\n\n");
					printf("\n\t\tGracias por su visita \3\n\n");
					system("pause");system("cls");
					break;
			
			default: system("cls");printf("\n\n\tError!!\n\n\t\tVuelva a intentarlo.\n\n");
					 system("pause");system("cls");
		}
		
	}while(opcion!=5);
	
	return 0;
}

//Reducir el if ***
void emp_autobuces(int precio, int personas)
{
	//Iniciar Variables.
	double p_desc,p_total;
	
	//Título.
	printf("\n\t\t\4 \4 \4 \4 \4 Ex 1 \4 \4 \4 \4 \4\n\n");	
	
	//Pedimos al usuario que introduzca valores.
	printf("\n\t \376 Precio del billete: ");
		scanf("%i", &precio);
		
	printf("\n\t \376 N\247 personas: ");
		scanf("%i", &personas);
	
	//Procesamos datos con IF
		
		//Condicion 1 =>Personas o el precio no puedan ser negativas
		if(personas<=0 || precio<=0)
		{
			//Posible respuesta 1.
			printf("\n\tSe equivoco.\n\n");
		}	
		else
		{
			//Condición 2=> Si persona es mayor a 50.
			if(personas>50)
			{
				//Operacion->efectuar el descuento del 30%.
				p_desc= precio-(precio*0.3);
				p_total= p_desc*personas;
				printf("\n\t\t \20 Precio con descuento: %.2f \44 \n\n", p_desc);
				printf("\n\t\t \20 Precio del importe en grupo: %.2f \44 \n\n\n", p_total);
			}	
			else
			{
				//Condición 3 => Si persona es pequeña o igual 25  y es mayor o igual 50.
				if(personas>=25 && personas<=50)
				{
					//Operacion->efectuar el descuento del 25%
					p_desc= precio-(precio*0.25);
					p_total= p_desc*personas;
					printf("\n\t\t \20 Precio con descuento: %.2f \44 \n\n", p_desc);
					printf("\n\t\t \20 Precio del importe en grupo: %.2f \44 \n\n\n", p_total);
				}
				else
				{
					//Condición 4 => Si persona es pequeña o igual 10 y es mayor o igual 24.
					if(personas>=10 && personas<=24)
					{
						//Operacion->efectuar el descuento del 15%
						p_desc= precio-(precio*0.15);
						p_total= p_desc*personas;
						printf("\n\t\t \20 Precio con descuento: %.2f \44 \n\n", p_desc);
						printf("\n\t\t \20 Precio del importe en grupo: %.2f \44 \n\n\n", p_total);
					}
					else
					{
						//Condición 5 => Si persona es menor a 10.
						//Operacion->No efectuamos descuento.
						p_total=precio*personas;
						printf("\n\t\t \20 Precio del importe en grupo: %.2f \44 \n\n\n", p_total);
					}
				}
			}
		}
	
}

void media(int num)
{
	double media;
	int sum=0,cont=0;

	printf("\n\t\t\4 \4 \4 \4 \4 Exercici 2 \4 \4 \4 \4 \4\n\n");
		
	do
	{
		
		printf("\n\tIntroduzca un numero: ");
			scanf("%i", &num);
			
			if(num!=-1){
				sum+=num;
				cont++;
			}	
	}while(num!=-1);
	media=sum/cont;
	printf("\n\t\20 La media es: %.2f\n\n",media);
	
}

void cel_fah()
{
	int cent=30;//iniciamos desde 30.
	double fah;
	
	//Título
	printf("\n\t\t  \4 \4 \4 \4 \4 Exercici 3 \4 \4 \4 \4 \4\n\n");
	//Subtítulo
	printf("\n\n\t\t Celsius\t|\tFahrenheit\n");
	printf("\t\t---------\t       ------------");
	
	//Procesamos datos con While
	
		//Condicion=> Mostrara las temperaturas que estan entre 30 y 50. 
		while(cent>=30 && cent<=50)
		{
			//Operacion para calcular fahrenheit.
			fah = cent * 1.8 + 32;
			//Respuestas.
			printf("\n\t\t \20 %i \247c\t|\t \20 %.1f \247F\n", cent, fah);
			cent++;//Indicamos que vaya de una a una.
		}
		printf("\n\n\n");
}

void rombo (int num)
{
	//Iniciar variables.
	int i, j;
	
	//Título.
	printf("\n\t\t\4 \4 \4 \4 \4 Exercici 4 \4 \4 \4 \4 \4\n\n");	
	
	//Pedimos al usuario que introduzca su valor.
    printf("\n\n\t \376 Introduzca el tama\244o del rombo: ");
  		scanf("%d",&num);
  		
	printf("\n");
	
	//Procesamos datos con FOR
		/*
		int k;
		
		for(i=1; i<=10; i++)
		{
			for(j=1; j<=i; j++)
			{
			printf("*");
			}
		}
		//Imprimir esoacios en blanco delante dependiendo de la linea.
		printf("\n\n");
		for(i=10; i>=1; i--)
		{
			for(k=0; k<10-i; k++)
			{
				printf(" ");
			}
		}
		//Imprimimos los asteriscos dependiendo de la linea
		for(j=i; j>1; j--)
		{
			printf("*");
		}
		*/
		//Condición 1: Le indicamos la altura que tendra.
		for ( i = num ; i >=0 ; i-- )
	   	{
	   		
		   	for ( j = num - 1 ; j >= 0 ; j--)
		      {
		      	 if(j>=i)
				 	printf("*");
				 else 
				 	printf(" ");
			  }
		      printf("\n");
	   	}
	   	
   printf("\n");
   
	   for(i=1; i<=num; i++)
		{
			for(j=1; j<=num; j++)
			{
			 if(j>=i)
			 	printf("*");
			 else 
			 	printf(" ");
			}
			printf("\n");
		}
		printf("\n\n\n");
}
