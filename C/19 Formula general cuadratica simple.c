#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int a,b,c;
double d1,d2;

void asignacion()
{

}
void bienvenida()
{
	printf(":: Solucionador cuadrático ::\n");
	printf( "\n");
	printf("               ___________ \n");
	printf("       -b +- |/ b^2 - 4ac '  \n");
	printf("x =   _____________________\n");
	printf("                2a\n");
	printf("\n:::::::::::::::::::::::::::::::\n");
}

int main(int argc, char const *argv[])
{


		printf( "\n");
	printf("Valor de a:");
	scanf("%d", &a);
	printf("Valor de b:");
	scanf("%d", &b);
	printf("Valor de c:");
	scanf("%d", &c);
		d1=(-b+(sqrt((b*b)-(4*(a*c))))) / (2*a);
		d2=(-b-(sqrt((b*b)-(4*(a*c))))) / (2*a);
		printf("%.2f\n", d1);
		printf("%.2f\n", d2);
}