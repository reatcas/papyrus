#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])
{
	int num, cua, fin;
	num=1;
	while (num < 999)
	{
		cua = (num*num);
		printf("El cuadrado de %d", num);
		printf(" es: %d\n", cua);
		num++;
	}
	printf("Programa Finalizado\n");
	scanf ("%d", &fin);
	return 0;
}