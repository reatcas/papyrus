#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main(int argc, char const *argv[])
{
	int pos, neg, num,fin;
	pos=0;
	neg=0;
	printf(":: Positivos y negativos en secuencia ::\n");
	printf("\n");
	printf("Ingrese un numero positivo o negativo\n");
	printf("...para finalizar la secuencia, ingrese 0 (cero)\n");
	scanf ("%d", &num);
	while (num != 0)
	{
		if (num > 0)
		{
			pos=pos+1;
		}
		else
		{
			neg=neg+1;
		}
		scanf ("%d", &num);
	}
	printf("Hay %d", pos);
	printf(" positivos y %d", neg);
	printf(" negativos\n");
	scanf ("%d",&fin);
	scanf ("%d",&fin);
	return 0;
}