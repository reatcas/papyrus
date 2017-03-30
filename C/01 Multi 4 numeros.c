#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])
{
	int n,res=1, cnt=1;
	printf( "\n");
	printf(":: Multiplicar 4 números ::\n");
	printf( "\n");
	while (cnt <=4)
	{
		printf("Ingrese número %d\n", cnt);
		scanf ("%d", n)
		res=n*res;
	}
	printf("Resultado: %d\n", res);
	printf("\n");
	printf(">>>>>>>  Programa Finalizado <<<<<<<\n");
	return 0;
}