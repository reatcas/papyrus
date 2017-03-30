#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])
{
	int cnt,n1,n2,n3,ap,re,cue,med;
	cnt=1;
	ap=0;
	re=0;
	while (cnt<=50)
	{
		//Presentacion
		printf("====================\n");
		printf("Alumno numero:  ");
		printf("%d\n", cnt);
		printf("Numero de cuenta: ");
		scanf ("%d", &cue);
		printf("\n");
		//Ingreso de notas
		printf("Nota 1: ");
		scanf ("%d", &n1);
		printf("Nota 2: ");
		scanf ("%d", &n2);
		printf("Nota 3: ");
		scanf ("%d", &n3);
		med=(n1+n2+n3)/3;
			if (med >= 70)
			{
				ap++;
				printf("Aprobado: %d\n", med);
			}
			else
			{
				re++;
				printf("Reprobado: %d\n", med);
			}
		cnt++;
	}
	printf("Aprobados: ");
	printf("%d\n", ap);
	printf("Reprobados: ");
	printf("%d\n", re);
	printf("\n");
	printf(">>>>>>>  Programa Finalizado <<<<<<<\n");
	return 0;
}