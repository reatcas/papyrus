#include <iostream>		//  oo  .--.
#include <conio.h>		//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	system ("color 8B");
	cout<<"\t\t\t\t::::::::::::::::::::::\n";
	cout<<"\t\t\t\t:: Rene Casaña 7.20 ::\n";
	cout<<"\t\t\t\t::::::::::::::::::::::\n\n";

	int  Slc=0,asiento=0,cnt1=1,cnt2=1,cnt3=6;

while(cnt1<11)
{
	cout<<"\tIngrese como desea viajar" <<"  Ticket -> "<<cnt1<<endl;
	cout<<" --1 Primera Clase  --2 Clase Economica  "<<endl;
	cin>>Slc; ++cnt1;

	if(Slc==2)
	{
		if(cnt3>10)
		{
			cout<<"(Cupo Agotado) Quiere ir en primera clase?"<<endl;
			cout<<" --1) Si  --2)No"<<endl;
			cin>>Slc;
			if(Slc==1)
			{
				cout<<"Seleccion: primera clase"<<endl;cout<<"Lugar -> "<<cnt2<<endl;
				cout<<"\n";
			}
			if(Slc==2)
			{
				cout<<"Esperarà 3 Horas para el siguiente vuelo"<<endl;
			}
		}
		else
		{
			cout<<"Seleccion: calse economica"<<endl;cout<<"Lugar -> "<<cnt3<<endl;
			cout<<"\n";	++cnt3;
		}
	}


	if(Slc==1)
	{
		if(cnt2>5)
		{
			cout<<"(Seccion llena) Desea se le asigne a clase economica?"<<endl;
			cout<<"1)Si 2)No"<<endl;
			cin>>Slc;
			if(Slc==1)
			{
				cout<<"Seleccion: la clase economica"<<endl;cout<<"Lugar -> "<<cnt3<<endl;
				cout<<"\n";
			}
			if(Slc==2)
			{
				cout<<" Esperarà 3 Horas para el siguiente vuelo"<<endl;
			}
		}
		else
		{
			cout<<"Seleccion: primera clase"<<endl;cout<<"Lugar -> "<<cnt2<<endl;
			cout<<"\n";		++cnt2;
		}
	}
}


	getch();
	system("cls"); //Limpia la consola
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	getch();
	return 0;
}
