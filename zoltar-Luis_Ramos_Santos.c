#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

	M03.PROG-UF1:NF1
		PT1: Pr�ctica de NF1.
		Nombre: Luis Ramos Santos.
		Fecha: 19/10/2017.
		
	Descripci�n:
		-El programa se llama Zoltar speak!. 
		 Este programa Tendra 2 opciones.
			1.Le preguntar� al usuario su deseo y Zoltar le dir� si se cumplir� o no.
			2.Zoltar le preguntar� al usuario su fecha de nacimiento para poder decirle
			  su signo zodiacal y tambien decirle su fortuna.
			   
*/

int main()
{
	//Iniciar variables.
	int opcion;//Para opciones.
	srand(time(NULL));//Generamos una semilla para el n�mero aleatorio.
	int mes, any,suma,res;
		
	//T�tulo.	
	printf("\n\t\t\4 \4 \4 \4 \4 Zoltar peaks!\4 \4 \4 \4 \4\n\n");
	
	//Introducci�n.
	printf("\n\t \4 Bienvenidos, escoge cualquiera de las opciones.\n\n");
	
	printf("\n\t\t1.Demana un desig.\n\n");//Primera opcion.
	
	printf("\n\t\t2.Obrir una galeta de la fortuna.\n\n");//Segunda opcion.
	
	//Le preguntamos al usuario que escoja opci�n.
	printf("\n\t \376 Selecciona una opcion (1 o 2): ");
		scanf("%i", &opcion);
		
		
	//Procesamos datos con IF.
	
		//Men�.
			//Si opci�n es 1.			
			if(opcion==1)
			{
				printf("\n\t Mostrant desig...\n\n");//Decorativo.
				
				//Le pedimos al usuario su deseo.	
				printf("\n\t \376 Demana el teu desig > ");
					scanf("\n");//Para que no se guarde lo introducido.
					
				int desig = rand()%2;//obtener el numero aleatorio.
				
				//IF -->DESEO				
					//condici�n 1.
					if(desig == 1)
					{
						//Respuesta posible 1.
						printf("\n\t \20 El teu desig Si es complira.\n\n");
					}
					else
					{
						//Respuesta posible 2.
						printf("\n\t \20 El teu desig No es complira.\n\n");
					}
			} 
			else
			{
				//Si opci�n es 2.
				if(opcion==2)
				{
					printf("\n\t Obrin...\n\n");//Decorativo.
			 		
			 		//Pedimos al usuario que introduzca su fecha de nacimiento.
			 		printf("\n\t \376 Introdueix la teva data de naixement (mm/aaaa): ");
			 			scanf("%d / %d", &mes, &any);
			 		
			 		//IF---> Data de naixement.
						//Condici�n 1: Por si el usuario se equivoca en el mes.
				 		if(mes==0 || mes==13)
				 		{
				 			//Posible respuesta 1.
				 			printf("\n\t\t \20 Tu mes es erroneo.\n\n");
						}
						else
							//Condici�n 2.
							if(mes==1)
								//Posible respuesta 2.
								printf("\n\t\t \20 El teu signe zodiacal es Capricorn.\n\n");
								
							else
								//Condici�n 3.
								if(mes==2)
									//Posible respuesta 3.
									printf("\n\t\t \20 El teu signe zodiacal es Aquiari.\n\n");	
							
							else
								//Condici�n 4.
								if(mes==3)
									//Posible respuesta 4.
									printf("\n\t\t \20 El teu signe zodiacal es Peixos.\n\n");
			
							else
								//Condici�n 5.
								if(mes==4)
									//Posible respuesta 5.
									printf("\n\t\t \20 El teu signe zodiacal es Aries.\n\n");
				
							else
								//Condici�n 6.
								if(mes==5)
									//Posible respuesta 6.
									printf("\n\t\t \20 El teu signe zodiacal es Taure.\n\n");
				
							else
								//Condici�n 7
								if(mes==6)
									//Posible respuesta 7.
									printf("\n\t\t \20 El teu signe zodiacal es Bessons.\n\n");
					
							else
								//Condici�n 8.
								if(mes==7)
									//Posible respuesta 8.
									printf("\n\t\t \20 El teu signe zodiacal es Cranc.\n\n");
							
							else
								//Condici�n 9.
								if(mes==8)
									//Posible respuesta 9.
									printf("\n\t\t \20 El teu signe zodiacal es LLeo.\n\n");
					
							else
								//Condici�n 10.
								if(mes==9)
									//Posible respuesta 10.
									printf("\n\t\t \20 El teu signe zodiacal es Verge.\n\n");
					
							else
								//Condici�n 11.
								if(mes==10)
									//Posible respuesta 11.
									printf("\n\t\t \20 El teu signe zodiacal es Balansa.\n\n");
								
							else
								//Condici�n 12.
								if(mes==11)
									//Posible respuesta 12.
									printf("\n\t\t \20 El teu signe zodiacal es Escorpi.\n\n");
					
							else
								//Posible respuesta 13.
								printf("\n\t\t \20 El teu signe zodiacal es Sagitari.\n\n");
					
					
				//Operaciones: F�rmula de la fortuna.
					//Para calcular la suma entre mes y any.
					suma=mes+any;
					//Para calcular el resto. 
			 		res=suma%5;
			 	
			 	//IF--> Fortuna.
					//Condici�n 1: Si resto es 0.
				 	if(res==0)
						//Posible respuesta 1.
				 		printf("\n\t\t \20 Fortune: Take care of yourself first. Then help others.\n\n");
		
					else
						//Condici�n 1: Si resto es 1
						if(res==1)
						//Posible respuesta 2
				 		printf("\n\t\t \20 Fortune: Pursue your dreams with vigor.\n\n");
			
					else
						//Condici�n 1: Si resto es 2
						if(res==2)
				 		//Posible respuesta 3
				 		printf("\n\t\t \20 Fortune: Don't wait for success to come - go find it!.\n\n");
				
					
					else
						//Condici�n 1: Si resto es 3
						if(res==3)
				 		//Posible respuesta 4
				 		printf("\n\t\t \20 Fortune: An exciting adventure awaits you.\n\n");
					
					
					else
						//Condici�n 1: Si resto es 4
						if(res==4)
				 		//Posible respuesta 5
				 		printf("\n\t\t \20 Fortune: Face the truth with dignity.\n\n");	

			 }
			 else
			 {
			 	//Por si usuario se equivoca al introducir opci�n.
			 	printf("\n\n\t \20 Lo siento! Se equivoco de opcion.\n\n");
			 }
						
			}
			
}
