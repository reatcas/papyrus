#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main(int argc, char const *argv[])
{
	int n, cnt, fin;
	cnt=0;
	printf(":: Control de Aprobación ::\n");
	printf("\n");
	printf("Ingrese calificación\n");
	while (cnt<20)
	{
		scanf("%d", &n);
		if (n >= 70)
		{
			printf("Aprobado\n");
		}
		else
		{
			printf("Reprobado\n");
		}
		cnt++;
	}
	scanf ("%d",&fin);
	scanf ("%d",&fin);
	return 0;
}