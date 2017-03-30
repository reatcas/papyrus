#include <iostream>		//  oo  .--.
#include <conio.h>		//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int v[12]={0,0,0,0,0,0,0,0,0,0,0,0},s[2]={0,0},t=0;
	system ("color 8B");
	const char *n[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	cout<<"\t\t\t\t:::::::::::::::::::::\n";
	cout<<"\t\t\t\t:: Programa Ventas ::\n";
	cout<<"\t\t\t\t:::::::::::::::::::::\n\n";

	for (int i = 0; i < 12; ++i)
	{
		cout<<"Ingrese las ventas de "<<n[i]<<" ->"; cin>>v[i];
		if (i<6)	{s[1]+=v[i];}
		else 		{s[2]+=v[i];}
	}
	t=s[1]+s[2];
	s[1]=s[1]/6;
	s[2]=s[2]/6;
	cout<<endl<<endl<<"\t\t\t\t-- Totales --"<<endl;
	cout<<"\t\tPromedio Semestre 1: "<<s[1]<<endl;
	cout<<"\t\tPromedio Semestre 2: "<<s[2]<<endl;
	cout<<"\t------> Total de ventas anual: "<<t<<endl;

	getch(); cout<<endl<<endl<<endl;
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	getch();
	return 0;
}