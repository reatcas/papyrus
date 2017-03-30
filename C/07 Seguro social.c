#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main(int argc, char const *argv[])
{
	int sue,seg,fin;
	printf(":: Seguro Social :: \n");
	printf( "\n");
	printf( "Ingrese el sueldo mensual\n");
	scanf ("%d",&sue);
	if (sue<600)
	{
		seg= sue*0.035;
	}
	else
	{
		seg=21;
	}
	printf("Sueldo: %d\n",sue );
	printf("Deduccion: %d\n", seg);
	sue = sue-seg;
	printf("Sueldo neto: %d\n", sue);
	scanf ("%d",&fin);
	scanf ("%d",&fin);
	return 0;
}