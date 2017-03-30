#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])

{
	int n1,n2,fin;
	n1=0;
	n2=0;
	printf(":: Numero Mayor ::\n");
	printf( "\n");
	printf( "Ingrese un número\n");
	scanf ("%d", &n1);
	printf("Ingrese un número\n");
	scanf("%d", &n2);
		if ( n1 < n2 )
		{
			printf("menor %i\n", n1);
		}
		else
			if ( n1 > n2 )
				{
				printf("MENOR %i\n", n2);
				}
				else 
					{
					printf("Numeros iguales. \n");
					}
	scanf ("%d",&fin);
	scanf ("%d",&fin);
	return 0;
}