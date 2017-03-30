#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])
{
	double n1,n2,fin;
	n1 = 0;
	n2 = 0;
	printf(":: Numero Mayor ::\n");
	printf( "\n");
	printf( "Ingrese un numero\n");
	scanf ("%d", &n1);
	printf("Ingrese un numero\n");
	scanf("%d", &n2);
	if ( n1 > n2 )
	{
		printf("El numero mayor es: %i\n", n1);
	}
	else
			if ( n1 < n2 )
		{
			printf("El numero mayor es: %i\n", n2);
		}
		else 
		{
			printf("Numeros iguales. \n");
		}
	printf("\n", n1, n2);
	scanf ("%d",&fin);
	scanf ("%d",&fin);
	return 0;	
}