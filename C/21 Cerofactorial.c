#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main()
{		
	int sel;
	int num,fac,serie=0,cerof,testcer=0,serie2=0,fin;
	printf("\n");
	printf("     :: Cero Factorial :: \n\n");
	printf("                     n!  \n");
	printf("        (n! - 1) = ----- \n");
	printf("                     n   \n");
	ingreso:
	printf("\n:::::::::::::::::::::::::::::::\n");
	printf("\n::  Ingrese un factorial  ::\n---->");
	scanf("%d", &num); //printf("%d\n",num);
	if (num > 0) /*Si el numero ingresado es mayor a cero"*/
	{
		serie=2; testcer=1; /*Establece la serie en 2 y prueba cerofactorial 1"*/
		while (testcer<num) /*Mientras el resultado sea menor al numero cerofactorial ingresado"*/
		{
			testcer=testcer*serie; //printf("%d\n", testcer); printf("%d\n", serie);
			/*Multiplica testcer por serie hasta aproximarse a num"*/
			serie++;
		}
		if (testcer==num)  /*Si el numero es factorial"*/
		{	
			serie2=serie-1; serie=2;  /*Copia la serie en serie2 y resta 1 ciclo porque el ultimo ciclo dió mayor a num*/ /*Establece serie en 2*/ 
			while (serie2>0) /*Mientras cerofactorial no haya llegado a cero*/ 
			{
				printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("  %d es factorial de %d \n",testcer,serie2);
				printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf(" %d\n",testcer); testcer=testcer/serie2; /*Imprime el ciclo cerofactorial*/ 
				printf("------ = %d\n", testcer);
				printf(" %d\n\n",serie2);
				serie2--;
			}
		}
		else
		{
			printf("El numero ingresado no es factorial\n");
			goto ingreso;
		}
	}
	else
	{
		printf("El numero ingresado no es factorial\n");
		goto ingreso;
	}
	scanf("%d", &fin);
	return 0;
}