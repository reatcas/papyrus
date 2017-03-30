/*Utilice un arreglo unidimensional para resolver el siguiente problema.
Una compañía paga a sus vendedores por comisión. Los vendedores reciben $200 por semana más 
9% de sus ventas totales de esa semana. Por ejemplo, un vendedor que acumule $5000 en ventas en una
semana, recibirá $200 más 9% de $5000, o un total de $650. Escriba un programa (utilizando un
arreglo de contadores) que determine cuántos vendedores recibieron salarios en cada uno de los
siguientes rangos (suponga que el salario de cada vendedor se trunca a una cantidad entera):

a) $200-299
b) $300-399
c) $400-499
d) $500-599
e) $600-699
f) $700-799
g) $800-899
h) $900-999
i) $1000 en adelante*/



#include <iostream>		//  oo   .--.
#include <conio.h>		//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	system ("color 8B");
	int Sl[9],Sm,num,ven;
	const char *n[9]={" Ventas del ","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo","-> "};
	const char *o[9]={"$200-299","$300-399","$400-499","$500-599","$600-699","$700-799","$800-899","$900-999","$1000 en adelante"};
	cout<<"\t\t\t\t:::::::::::::::::::::::::::::::\n";
	cout<<"\t\t\t\t:: Programa Ventas semanales ::\n";
	cout<<"\t\t\t\t:::::::::::::::::::::::::::::::\n\n";
	cout<<" Numero de empleados -> "; int E; cin>>E; num=E; --num;

	for (int i = 1; i <= E; ++i)
	{			
		cout<<"---> Empleado #"<<i<<"  -  "<<num<<" restantes";
		for (int i = 1; i <= 7; ++i)
		{
			cout<<n[0]<<n[i]; cin>>ven; Sm+=ven;
		}
		cout<<" Total esta semana: "<<Sm<<endl;

		if (Sm<299)			{++Sl[0];
			else {if (Sm<399)		{++Sl[1];
				else {if (Sm<499)			{++Sl[2];
					else {if (Sm<599)				{++Sl[3];
						else {if (Sm<699)					{++Sl[4];
							else {if (Sm<799)						{++Sl[5];
								else {if (Sm<899)							{++Sl[6];
									else {if (Sm<999)								{++Sl[7];
										else{									{++Sl[8];
										}
									}
								}
							}
						}
					}
				}
			}
		}
		Sm=Sm*0.09; Sm+=200;
		cout<<"\n Total de este empleado -> "<<Sm<<endl; --num;
	}
	cout<<"\n\t - Informe de Ventas - ";
	for (int j = 0; j < 9; ++j)
	{
		cout<<"\n\n\tRango de Ventas de "<<o[j]<<" - "<<Sl[j]<<endl;
	}
	getch();
	system("cls"); //Limpia la consola
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	getch();
	return 0;
}