#include <iostream>		//  oo  .--.
#include <conio.h>		//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int v[5][3];
	system ("color 8B");
	cout<<"\t\t\t\t::::::::::::::::::::::::::::\n";
	cout<<"\t\t\t\t:: Programa Bidimensional ::\n";
	cout<<"\t\t\t\t::::::::::::::::::::::::::::\n\n";

	for (int x = 0; x < 5; ++x)
	{
		for (int y= 0; y < 3; ++y)
		{
			cout<<"Ingrese un numero -> "; cin>>v[x][y];
		}
	}

	cout<<endl<<endl<<"\t";
	for (int i = 0; i < 3; ++i)
	{
		cout<<"\t"<<i;
	}
	cout<<endl;
	for ( x = 0; x < 5; ++x)
	{
		cout<<"\t"<<x;
		for (int y= 0; y < 3; ++y)
		{
			cout<<"\t"<<v[x][y];
		}
		cout<<endl;
	}
	

	getch(); cout<<endl<<endl<<endl;
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	getch();
	return 0;
}