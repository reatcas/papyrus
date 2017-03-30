#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])
{
	int n1=1;
	printf(":: Par o Impar ::\n");
	printf( "\n");
	while (n1!=0)
	{
	printf( "Ingrese un numero entero  ");
	scanf ("%d", &n1);
	if  (n1 % 2 == 0)
	{
		printf (":: Par ::\n\n");
	}
	else
		{
				printf (":: Impar ::\n\n");
		}
	}
	printf("\n");
	printf(">>>>>>>  Programa Finalizado <<<<<<<\n");
	return 0;
}