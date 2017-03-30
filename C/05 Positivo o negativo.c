#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])
{
	int num=1,fin;
	printf(":: Positivo (+) ó Negativo (-) ::\n");
	printf( "\n");
	while (num!=0)
	{	
		printf( "Ingrese un numero  ");
		scanf ("%d", &num);
		printf( "\n");
	if (num>0)
	{
		printf("Positivo\n");
	}
	else 
		if (num<0)
		{
			printf("Negativo\n");
		}
	
	}
	printf("Programa Finalizado");
	return 0;
}