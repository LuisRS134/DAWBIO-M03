#include <stdio.h>

int main(void){
int entero=255;
char letra;
double a;
float decimal=15.5;
short corto2=1287;
short int corto=1287;
long largo=2525;
long int largo2=2525;
signed marca=25;
unsigned sinmarca=25;

printf("El tama�o de un int es:   		%d bytes\n",sizeof(entero));
printf("El tama�o de un char es:  		%d bytes\n",sizeof(letra));
printf("El tama�o de un double es: 		%d bytes\n",sizeof(a));
printf("El tama�o de un float es:  		%d bytes\n",sizeof(decimal));
printf("El tama�o de un short es:  		%d bytes\n",sizeof(corto2));
printf("El tama�o de un short int es:  		%d bytes\n",sizeof(corto));
printf("El tama�o de un long es:  		%d bytes\n",sizeof(largo));
printf("El tama�o de un long int es:  		%d bytes\n",sizeof(largo2));
printf("El tama�o de un signed es:  		%d bytes\n",sizeof(marca));
printf("El tama�o de un unsigned es:  		%d bytes\n",sizeof(sinmarca));
}
