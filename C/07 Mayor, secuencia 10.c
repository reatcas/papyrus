#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])
{
	int nu1,nu2,cnt,max,min,pmax=0,pmin=1,fin;
	cnt=3;
	printf (":: Comparacion de 10 Numeros ::\n");
	printf ("\n");
	printf ("Ingrese numero a comparar\n");
	scanf ("%d", &nu1);
	printf ("Ingrese numero a comparar\n");
	scanf ("%d", &nu2);
			if (nu1>=nu2){
				max = nu1;
				min = nu2;
				pmax=1;
			}
			if (nu2>=nu1){
				max = nu2;
				min = nu1;
				pmin=1;
			}
	while (cnt <= 10)
	{		
			printf ("Ingrese numero a comparar\n");
			scanf ("%d", &nu2);
			if (nu2>=max)
			{
				if (nu2>min)
				{	
				max=nu2;
				pmax=cnt;
				}
			}
			if (nu2<=min)
			{
				if (nu2<max)
				{
				min=nu2;
				pmin=cnt;
				}
			}
		cnt++;
	}
	printf("El mayor es: %d"" en la posicion: %d\n", max, pmax);
	printf("El menor es: %d"" en la posicion: %d\n", min, pmin);
	scanf ("%d", &fin);
	return 0;
}