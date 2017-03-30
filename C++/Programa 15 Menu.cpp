#include <iostream>		//  Rene Casaña
#include <stdlib.h> 	//  oo   .--.
#include <math.h>			//   \\ (    )_
#include <conio.h>		//    `~~~~~~~~`
#include <math.h>
#include <iomanip>
using namespace std;
void limpiar(){system("cls");}
int main(int argc, char const *argv[])
{

	int menu=0,a=0,b=0,c=0,d=0;
	float x=0;
	while (menu!=-1)
	{
		system ("color 0B");
		cout<<"\t\t\t\t::::::::::\n";
		cout<<"\t\t\t\t:: Menu ::\n";
		cout<<"\t\t\t\t::::::::::\n\n";

		cout<<"\t\t( 1 ) Programa Kilometraje\n";
		cout<<"\t\t( 2 ) Programa Numero menor\n";
		cout<<"\t\t( 3 ) Programa Producto de impares\n";
		cout<<"\t\t( 4 ) Programa Tablas de multiplicar\n";
		cout<<"\t\t[ 5 ] - Salir -\n";
		seleccion:
		cin>>menu;
		if (menu>0 && menu<6)
		{
			if (1==menu) // Kilometraje
			{
				system ("color 0A"); limpiar();
				cout<<"\n\n\t\t::          ---       Programa Kilometraje       ---          ::\n\n";
				int menu=0;
				double x1=0,c1=0,c2=0,e=0;
				system ("color 0A");
				cout<<"\n\n\t\t::          ---       Programa Kilometraje       ---          ::\n\n\n";

				while (a!= -1)
				{
					cout<<"\n\t Escriba los kilometros usados  [-1 Salir]-> ";
					cin>>a;
					if (a!=-1)
					{
						cout<<"\n\t Escriba los litros -> ";
						cin>>b;
						e++;
						x1=a/b;
						cout<<"\n\n\t :: KPL en este reabastecimiento \t"<< fixed << setprecision(2) <<x1<<" :: Reabastecimientos ->"<<e<<endl;
						c1+=a;
						c2+=b;
						x1=c1/c2;
						cout<<"\n\n\t >> TOTAL KPL:\t"<< fixed << setprecision(2) << x1 << endl;
					}
				}
				cout<<"\n\n\n          ---       Presione una tecla para continuar       ---";
				getch();
				limpiar();
			}
			else if (2==menu) // Numero Menor
			{
				system ("color 0C"); limpiar();
				int i=0;
				cout<<"\n\n\t\t::          ---       Programa Numero menor       ---          ::\n\n";
				P2Ingreso:
				cout<<"\t Ingrese un numero -->";
				cin>>a;
				if (a>1)
				{
					x=a; int men=0;
					for ( i=1 ; i < x; ++i)
					{
						cout<<"\t Ingrese un numero -->";
						cin>>a;
						if (a<x)
						{
							men=a;
						}
					}
					cout<<"\nEl numero menor de la serie es -> "<<"[ "<<men<<" ]";
				}
				else
				{
					cout<<"\n\nLa cantidad de numeros a comparar debe ser mayor a 2";
					goto P2Ingreso;
				}
				cout<<"\n\n          ---       Presione una tecla para continuar       ---";
				getch();
				limpiar();
			}
			else if (3==menu) // Producto de Impares
			{
				system ("color 0D"); limpiar();
				cout<<"\n\n\t\t::          ---       Programa Producto de impares       ---          ::\n\n";
				x=0;
				for (int i = 0; i < 15; ++i)
				{
					if (0 != i % 2)
					{
						x=i*i;
						cout<<endl<<i<<" * "<<i<<" = "<<x<<endl;
					}
				}
				cout<<"\n\n\n          ---       Presione una tecla para continuar       ---";
				getch();
				limpiar();
			}
			else if (4==menu) //Tablas de Multiplicar
			{
				system ("color 0E"); limpiar();
				cout<<"\n\n\t\t::          ---       Programa Tablas de Multiplicar       ---          ::\n\n";
				cout<<"\n\n\t\t\tIngrese la tabla que desea ->\n\n";
				cin>>a;
				cout<<"\n\t\t\tIngrese el limite de la table ->\n\n";
				cin>>b;
				for (int i=0 ; i <= b; i++)
				{
					x=i*a;
					cout<<"\t\t"<<i<<" * "<<a<<" = "<<x<<endl;
				}
				cout<<"\n\n\n          ---       Presione una tecla para continuar       ---";
				getch();
				limpiar();
			}
			else if (5==menu)
			{
				goto final;
			}
		}
		else
		{
		cout<<"\n\n\t\t>>>Opcion no valida <<<\n\n\t\t\t Intente de nuevo ->> ";
		goto seleccion;
		}

	}
	getch();
	final:
	limpiar();
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";

	return 0;
}
