#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main()
{		
		int sel;
		int num,fac,serie=0,testcer=0,serie2=0,prim;
		Mprincipal:
		printf("\n::::::::::::::::::::::::::\n");
		printf("::    Menu Principal    ::\n");
		printf("::----------------------::\n");
		printf("::  (1) Factorial       ::\n");
		printf("::  (2) Cero factorial  ::\n");
		printf("::  (3) Primorial       ::\n");
		printf("::    (0) -- salir --   ::\n");
		printf("::::::::::::::::::::::::::\n\n");
		printf("---->");
		scanf("%d", &sel); 	//printf("%d\n", sel);
		switch (sel)
		{
			case 1:
				system("cls");
				Mfac:
				printf("::::::::::::::::::::::::::::::::::\n");
				printf(":: (1) Calcular factorial       ::\n");
				printf("::   (2) <--- Menu principal    ::\n");
				printf("::     (0) -- salir --          ::\n");
				printf("::::::::::::::::::::::::::::::::::\n");
				scanf("%d", &sel); 
				switch (sel)
				{
					case 0:
						goto fin;
					case 1:
						system("cls");
						goto calfac; break;
					case 2:
						system("cls");
						goto Mprincipal; break;
				}
				calfac:
				printf(":::::::::::::::::::::::::::::\n");
				printf("::        Factorial        :: \n");
				printf("::     n! = n * (n-1)      ::\n");
				printf(":::::::::::::::::::::::::::::\n\n");
				printf("  Ingrese un numero entero ---->");
				scanf ("%d", &num);
				if (num > -1)
				{
					fac=num; serie=num;
					while (num>1)
					{
					num--;
					fac=num*fac;
					}
					printf("Factorial: %d\n", fac);
					printf("Serie factorial: { ");
					while (serie>0)
					{
						printf("%d ", serie);
						serie--;
					}
					printf("}\n");
				}
				goto Mprincipal;
				break;
			case 2:
				system("cls");
				Mcerofac:
					printf("::::::::::::::::::::::::::::::::::\n");
					printf(":: (1) Calcular cero factorial  ::\n");
					printf("::   (2) <--- Menu principal    ::\n");
					printf("::     (0) -- salir --          ::\n");
					printf("::::::::::::::::::::::::::::::::::\n");
					scanf("%d", &sel); 
					switch (sel)
					{
						case 0:
							goto fin;
						case 1:
							system("cls");
							goto calccerofac; break;
						case 2:
							system("cls");
							goto Mprincipal; break;
					}
				calccerofac:
				printf("::::::::::::::::::::::::::::::\n");
				printf("::      Cero Factorial      ::\n");
				printf("::                   n!     ::\n");
				printf("::      (n! - 1) = -----    ::\n");
				printf("::                   n      ::\n");
				printf("::::::::::::::::::::::::::::::\n\n");
				printf("      Ingrese un factorial  ---->");
				scanf("%d", &num); printf("%d\n",num);
				if (num > 0)
				{
					serie=2; testcer=1;
					while (testcer<num)
					{
						testcer=testcer*serie;
						serie++;
					}
					if (testcer==num)
					{	
						serie2=serie-1; serie=2;
						while (serie2>0)
						{
							printf("\n");
							printf(":::::::::::::::::::::::::::::\n");
							printf("  %d es factorial de %d \n",testcer,serie2);
							printf(":::::::::::::::::::::::::::::\n");
							printf(" %d\n",testcer); testcer=testcer/serie2; 
							printf("------ = %d\n", testcer);
							printf(" %d\n\n",serie2);
							serie2--;
						}
						printf("===================================\n");
						printf("\n  1 es factorial de 0\n");
						printf("===================================\n");
						printf("       1!    1      \n");
						printf("  0!= --- = --- = 1 \n");
						printf("       1     1     \n\n");
						printf("\n:::::::::::::::::::::::::::::\n");
						printf("\n:: Cerofactorial terminado ::\n");
						printf("\n:::::::::::::::::::::::::::::\n\n");
						goto Mcerofac;
					}
					else
					{
						printf("\nEl numero ingresado no es factorial\n");
						printf("\n...calcule un factorial\n\n");
						goto Mfac;
					}
				}
				else
				{
					printf("\nEl numero ingresado no es factorial\n\n");
					goto Mcerofac;
				}
				break;
			case 3:
				system("cls");
				Mprimorial:
				printf("::::::::::::::::::::::::::::::::::\n");
				printf("::                             ::\n");
				printf("::  (1) Calcular primorial     ::\n");
				printf("::  (2) <--- Menu principal    ::\n");
				printf("::     (0) -- salir --         ::\n");
				printf("::                             ::\n");
				printf("::::::::::::::::::::::::::::::::::\n");
				scanf("%d", &sel); 
				switch (sel)
				{
					case 0:
						goto fin;
					case 1:
						system("cls");
						goto calcprimorial; break;
					case 2:
						system("cls");
						goto Mprincipal; break;
				}
				calcprimorial:
				printf("::::::::::::::::::::::::::::::\n");
				printf("::                          ::\n");
				printf("::         Primorial        ::\n");
				printf("::                          ::\n");
				printf("::     n! = P * (P < P)     ::\n");
				printf("::                          ::\n");
				printf("::::::::::::::::::::::::::::::\n");
				printf("::   Ingrese un Primorial   ::\n---->");
				scanf("%d", &num); //printf("%d\n",num);
				serie=2;
				serie2=2;
				while (num%serie2 != 0) //comprueba mod de numero ingresado en su serie menor
				{
					serie2++;
				}
				if (num==serie2) //si el numero es primo
				{
					serie2=1; serie=1;
					while (serie2<=num) // mientras serie2 sea menor o igual que numero primo
					{
						while (serie%serie2!=0)
						{
							serie++;
						}
						if (serie==serie2)
						{
						prim=serie;
						prim=prim*serie2;
						serie2++;
						}

					}
				}
				else
				{
					system ("cls");
					printf("El número ingresado no es Primo\n");
					goto calcprimorial;
				}
				goto Mprimorial;
				break;
			case 0:
				goto fin;
			default:
				printf("Opcion no valida\n");
				goto Mprincipal;
				break;

		}
	fin:
	return 0;
}