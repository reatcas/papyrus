#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
int main(int argc, char const *argv[])
{
	int cnt, not, cie, cer, otr, fin;
	cnt=20;
	cie=0;
	cer=0;
	otr=0;
	printf(":: Calificaciones 100 alumnos ::\n");
	printf("\n");
	while (cnt >= 0)
	{
		printf("Ingrese nota\n");
		scanf ("%d", &not);
		printf("Notas Restantes: %D\n", cnt);
		if (not == 0)
		{
			cer = cer + 1;
		}
		else{
			if (not == 100)
			{
				cie = cie + 1;
			}
			else{
				otr=otr+1;
			}
		}
		cnt--;
		printf("Cien:   %d\n", cie);
		printf("Cero:   %d\n", cer);
	}
	printf("===========================\n");
	printf("Notas con cero (0):       %d\n", cer);
	printf("Notas con cien (100):     %d\n", cie);
	printf("Notas restantes:          %d\n", otr);
	printf("===========================\n");
scanf ("%d",&fin);
scanf ("%d",&fin);
return 0;
}