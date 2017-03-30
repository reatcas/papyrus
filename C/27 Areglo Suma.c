#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main(int argc, char const *argv[])
{
	int n, sum=0, c, array[100]
	printf(":::::::::::::::::::::::::\n");
	printf(":: Titulo del programa ::\n");
	printf(":::::::::::::::::::::::::\n\n");
	printf("Numero de enteros a sumar --->"); scanf ("%d", n);
	printf("Ingrese %d enteros\n", n);
	for (c=0;c<n;c++)
	{
		scanf("%d", array [c]);
		sum=sum+array[c];
	}
	printf("Suma: %d\n", sum);
	return 0;
}