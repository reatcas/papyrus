#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main(int argc, char const *argv[])
{
	double p1,p2,p3,tot,com,fin;
	int vend;
	
	printf (":: Comercial C ::\n");
	printf ( "\n");
	printf ( "Ingrese el numero de vendedor\n");
	scanf ("%c", &vend);
	printf ("\n");
	printf ("Ingrese los precios de venta\n");
	printf ("Producto 1:\n");
	scanf ("%d", &p1);
	printf ("Producto 2:\n");
	scanf ("%d", &p2);
	printf ("Producto 3:\n");
	scanf ("%d", &p3);
 	tot = p1+p2+p3;
	if (tot>300)
	{
		com = tot*0.2;
	}
	else
	{
		com = tot*0.1;
	}
	printf ("=============================\n");
	printf ("   :: Informe de ventas ::\n");
	printf ("=============================\n");
	printf ("Vendedor: %d\n", vend);
	printf ("Total: %d\n", tot);
	printf ("Comision: %d\n", com);
	scanf ("%d",&fin);
	scanf ("%d",&fin);
	return 0;
}