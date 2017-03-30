#include <iostream>		//  oo  .--.
#include <conio.h>		//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
#include <string>
using namespace std;

int main()
{
	system ("color 8B");
	cout<<"\t\t\t\t:::::::::::::::::::::::::\n";
	cout<<"\t\t\t\t::    Numeros mayores  ::\n";
	cout<<"\t\t\t\t:::::::::::::::::::::::::\n\n";

	int n[10]={0,0,0,0,0,0,0,0,0,0}, ma[2]={0,0};
	
	for (int i = 0; i < 10; ++i)
	{
		cout<<"Ingrese un numero -> "; cin>>n[i];
		if 	(n[i]>=ma[0] 	&& n[i]>=ma[1])		{ma[0]=n[i];}
		if	(n[i]<ma[0] 	&& n[i]>=ma[1])		{ma[1]=n[i];}}
	for (int j = 9; j >= 0; --j)
	{
		if 	(n[j]>=ma[0] 	&& n[j]>=ma[1])		{ma[0]=n[j];}
		if	(n[j]<ma[0] 	&& n[j]>=ma[1])		{ma[1]=n[j];}}

	cout<<"\n\tEl primer numero mayor es ->\t"<<ma[0];
	cout<<"\n\tEl segundo numero mayor es ->\t"<<ma[1];
	getch();
	system("cls"); //Limpia la consola
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"\t::          ---       Programa Finalizado       ---          ::\n";
	cout<<"\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout<<"\t::     ---  Presione cualquier tecla para continuar  ---     ::\n";
	getch();
	return 0;
}