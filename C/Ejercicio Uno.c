#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>			//    `~~~~~~~~`

int main(int argc, char const *argv[])
{
	int x,y,bdg,ma=0,V=0,Area[4][2];
	printf(":::::::::::::::\n");
	printf(":: Almacenes ::\n");
	printf(":::::::::::::::\n\n");
	for(x=0;x<=1;x++)
	{
		printf("  \n Almacen Número -> ");
		scanf("%d",&bdg);
		for(y=0;y<=2;y++)
	   		{
				printf("\n Ventas -> ");
				scanf("%d",&Area[x][y]);
			   	V=V+Area[x][y];
	   		}
		printf("\nAlmacen         ->%d\n",bdg);
	    printf("\nVentas Totales  ->%d\n",V);
	    if (ma>=V){ma=ma;}	else{ma=V;}
		V=0;
	}
	printf("\n Almacen numero %d",bdg);
	printf(" Su mayor venta semanal es: %d\n",ma);
	system("pause");
	return 0;
	}
