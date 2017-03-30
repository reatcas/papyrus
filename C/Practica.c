#include <stdio.h>		//  oo  .--.
#include <stdlib.h>		//   \ (    )_
#include <math.h>		//    `~~~~~~~~`

int main()
{
	int cisne,gaviota,buho,pollo;
	printf("               ::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("               :: Mi primer programa Programacion Estructurada ::\n");
	printf("               ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
	
	printf("Ingrese un número -->");	scanf("%d", &cisne);
	printf("Ingrese un numero -->");	scanf("%d", &gaviota); printf("\n\n\n");

	buho=cisne+gaviota;				printf("  La suma de %d y %d es:         %d\n\n", cisne, gaviota, buho);
	buho=(cisne+gaviota)/2;			printf("  El promedio de %d y %d es:     %d\n\n", cisne, gaviota, buho);
	buho=cisne*gaviota;				printf("  El producto de de %d y %d es:  %d\n\n\n", cisne, gaviota, buho);
	printf("                     >>>>>>>  Programa Finalizado <<<<<<<\n\n");
	return 0;
}