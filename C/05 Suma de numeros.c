#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])
{
	int num, acm,fin;
	acm=0;
	printf(":: Suma de numeros positivos ::\n");
	printf("\n");
	printf("Ingrese un numero\n");
	scanf ("%d", &num);
	while (num != 0)
	{
		if (num>0)
		{
			acm = num + acm;
			scanf("%d", &num);
		}
		else
		{
			printf("No puede ingresar negativos\n");
			scanf("%d", &num);
		}
	}
	printf("La suma total es: %d", acm);
	scanf ("%d",&fin);
	return 0;
}