#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main(int argc, char const *argv[])
{
	int n, nota; char nmbr[50];
	printf("       :::::::::::::::::::::::::\n");
	printf("       ::   Notas de alumnos  ::\n");
	printf("       :::::::::::::::::::::::::\n\n");
	numerodealumnos:
	printf(" Numero de alumnos --> "); scanf("%d", &n);
	if (n>0)
	{
		for (n; n>0; n--)
		{
			printf("Alumno numero    %d   \n              --------", n);
			printf("Nombre --->"); scanf ("%s", &nmbr);
			printf ("Nota --->");	scanf ("%d", &nota);
			if (nota>94)
			{
				printf(" :: A ::\n");
			}
			else
			{
				if (nota>81)
				{
					printf(" :: B ::\n");
				}
				else
				{
					if (nota>71)
					{
						printf(" :: C ::\n");
					}
					else
					{
						if (nota>61)
						{
							printf(" :: D ::\n");
						}
						else
						{
							if (nota>51)
							{
								printf(" :: E ::\n");
							}
							else
							{
								if (nota>0)
								{
									printf(" :: F ::\n");
								}
								else
								{
									if (nota<0)
									{
										goto error;
									}
								}
							}
						}
					}
				}
			}
		}
		goto fin;
	}
	else
	{	
		error:
		printf("       :::::::::::::::::::\n");
		printf("       ::   >> ERROR << ::\nm");
		printf("       :::::::::::::::::::\n\n");
		printf(":: El valor debe ser positivo ::\n");
		goto numerodealumnos;
	}
	fin:
	printf(" :: Programa Finalizado ::\n");
	return 0;
}