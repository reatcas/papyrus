/*Una agencia de viejes de vehículos automóviles distribuye quince modelos
y tiene en su planilla, diez vendedores. Se desea un programa que escriba
un informe mensual de las ventas por vendedor y modelo, el cual debe calcular el
numero de automoviles vendidos por cada vendedor, necesita saber cual es el 
vendedor que mas coches ha vendido*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	system ("color 0E");							// Cambia el color a la consola
	int mod[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};	//Array para ventas por modelo de auto
	int vend[10]={0,0,0,0,0,0,0,0,49,0};				// Array para ventas nombre de vendedores
	int tmodv=0,acm=0,acv=0,mayorvend=0;
	// tmodv -- Total Modelos Vendidos
	// acm   -- acumulador modelos
	// acv   -- acumulador vendedores
	// mayorvend -- mejor vendedor
	const char *vendedores[10]=
	// Almacena los nombres de vendedor
	{
		"Luis","Antonio","Jorge",
		"Pedro","Sergio", "Diana",
		"Alonso","Eduardo","Ligia","Dorian"
	};
	const char *modelos[15]=
	// Almacena los modelos de auto
	{
		"Lima","Camaro","Lander",
		"Corolla","Seqoia","Tucson",
		"Elantra","Hilux","Spark",
		"Atrix","Avenger","Amarok",
		"Graph","Lobo","Sentra"
	};

	cout<<"\t\t\t\t:::::::::::::::::::\n";
	cout<<"\t\t\t\t::  Agencia Lino ::\n";
	cout<<"\t\t\t\t:::::::::::::::::::\n\n";
	// Titulo del programa
	cout<<"\n\t A continuacion, ingrese los datos correspondientes al mes actual\n\n";

	for (int i = 0 ; i < 10; ++i)
	//	Hace las 10 iteraciones de ingreso para el vendedor
	{
		cout<<"\n\n Vendedor \t:::\t"<<vendedores[i]<<"\t:::";
		// Indica el Vendedor seleccionado y su nombre 
		for (int j = 0 ; j < 15; ++j)
		{ 	//	Hace las 15 iteraciones de ingreso para modelo de autos
			cout<<"\n Modelo \t>>>\t"<<modelos[j]<<"\t<<<";
			// Indica el modelo de auto 
			cout<<"\n\t\t\t\tVendidos >> ";
			cin>>acm;		// Ingresa la cantidad de unidades vendidas
			mod[j]+=acm;	// Acumula las ventas de este modelo al modelo de vehiculo
			vend[i]+=acm;	// Acumula las ventas de este modelo al nombre de vendedor
			tmodv+=acm;		// Acumula las ventas al total de unidades para el informe
		}
		if (vend[i] > mayorvend)
		{
			mayorvend=vend[i];
		}
		cout<<"\n\n\t\t::::::: Ventas de "<<vendedores[i]<<" finalizado :::::::\n\n";
		// Indica la finalizacion del ciclo para este vendedor	
	}
	cout<<"\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t Presione cualquier tecla para generar informe";
	cout<<"\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	getch(); // Obtiene cualquier tecla
	system("cls"); // Limpia la consola

	cout<<"\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\n\t\t\t -- Informe de Ventas Mensual -- ";
	cout<<"\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	// Inicializa el informe de ventas
	cout<<"\n\n\n\t\t::::::: Vendedores en planilla\n\n";
			for ( int i = 0 ; i < 10; ++i)
			{
				cout<<vendedores[i]<<" >> \t"<<vend[i]<<"\t unidades vendidas\n";
			}
			cout<<"\n\n\t\t::::::: Modelos de Auto \n\n";
			for (int j = 0; j < 15; ++j)
			{
				cout<<"\n Modelo \t"<<modelos[j]<<"\t >> "<<mod[j]<<"\t unidades vendidas \t";
			}
	cout<<"\n\n\n El total de autos vendidos es >>"<<tmodv;
	cout<<"\n\t\t El mejor vendedor es: "<<vendedores[mayorvend]<<" <<";
	cout<<"\n\t\t Felicidades "<<vendedores[mayorvend];
	cout<<endl<<endl<<endl;
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout<<"\n\n\n       Presione cualquier tecla para continuar";
	getch();
	return 0;
}