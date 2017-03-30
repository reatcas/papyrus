#include <iostream>		//  oo   .--.
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
#include <conio.h>
using namespace std;
void limpiar(){clrscr();}
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
				cout<<"\t Ingrese distancia recorrida (Km) -> ";
				cin>>a;
				cout<<"\t Ingrese el combustible consumido (Gal) ";
				cin>>b;
				x=a/b; cout<<"\n\n\t Ha recorrido "<<x<<" Kilometros por galon";
				cout<<"\n\n\n          ---       Presione una tecla para continuar       ---";
				system("PAUSE");
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
				system("PAUSE");
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
				system("PAUSE");
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
				system("PAUSE");
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
	system("PAUSE");
	final:
	limpiar();
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	
	return 0;
}