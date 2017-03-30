#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])
{
	int dc, r;
	int fin, sel;
	void diametro()
	{		
		scanf ("%d", &dc);
		printf("%d\n", dc );
		r = (dc / 2);
		printf("radio: %d\n", r);	
	}
	void circunferencia()
	{	
		scanf ("%d", &dc);
		printf("%d\n", dc );
		r = dc/(2*3.1416);
		printf("radio: %d\n", r);
	}
void seleccion()
	{
		printf( ":: Seleccione formula ::\n");
		printf( "(1) Diametro:       r= D/2\n");
		printf( "(2) Circunferencia: r= C/2*pi\n");
		scanf ("%d", &sel);
	}
	printf(":: Calculo de radio ::\n");
	printf( "\n");
	seleccion();
switch (sel)
{
	case 1:
		printf(":: Selecciono Diametro :: \n""Longitud: ");
		diametro();
		break;
	case 2:
		printf(":: Selecciono Circunferencia ::\n""Longitud: ");
		circunferencia();
		break;
	default:
		printf(" ::  Seleccion no valida  ::\n");
		seleccion();
		break;
}
	scanf("%d", &fin);
	return 0;
}
