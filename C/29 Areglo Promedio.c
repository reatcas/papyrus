#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>			//    `~~~~~~~~`
int main ()
{
	int i,arreglo [5]; char na[50];
	int fin;
	float ma=0;
	{
	printf("\nIngrese Nombre: ");
	scanf("%s",&na);
	}
	for (i=0; i<=4; i++)
	{
		printf("Ingrese Nota:\n");
		scanf("%d",&arreglo[i]);
		ma=ma+arreglo[i];
	}
	{
	ma=(ma/5);
	printf("Media Aritmètica:%.2f \n",ma);
	printf("Presione Cualquier tecla para continuar ::\n");
	scanf("%d", &fin);
	scanf("%d", &fin);
	}
return 0;
}
