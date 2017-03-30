#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main()
{		
		int sel;
		char cdn[200];
		int num,fac,serie=0,testcer=0,serie2=0,prim,temp;
		num=13; //printf("%d\n",num);
				serie=2;
				serie2=2;
				while (num%serie2 != 0) //comprueba mod de numero ingresado en su serie menor
				{
					serie2++;
					printf("%d\n", serie2);
				}
				if (num==serie2) //si el numero es primo
				{
					printf(":::::::::::::::::::::::\n");
					serie2=1; serie=1; printf("Serie2: %d Serie: %d\n", serie2, serie);
					while (serie2<=num) // mientras serie2 sea menor o igual que numero primo
					{
						calcular:
						while (serie%serie2!=0)
						{
							serie++;
						}
						if (serie==serie2)
						{
							temp=serie;
							printf("%d\n", temp);
							prim=temp*serie2;
							printf("%d\n", prim);
							serie2++;
							printf("%d\n", serie2);
						}
					}
					printf("Primorial: %d\n", prim);
				}
				else
				{
					system ("cls");
					printf("El número ingresado no es Primo\n");
				}
return 0;
}