#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main(int argc, char const *argv[])
{
	int prc,prv,gan,fin;
	printf(":: Super mercados La Colonia :: \n");
	printf( "\n");
	printf( "Ingrese precio de compra\n");
	scanf ("%d",&prc);
	printf( "Ingrese precio de venta\n");
	scanf ("%d",&prv);
	gan = prv - prc;
	if (gan>0)
	{
		printf("Ganancias: %d\n", gan);	
		}
	else
		if (gan < 0)
		{
			printf("Perdidas: %d\n", gan);
		}
		else
		{
			printf("No hay gnancias\n");
		}
	scanf ("%d",&fin);
	scanf ("%d",&fin);
	return 0;
}