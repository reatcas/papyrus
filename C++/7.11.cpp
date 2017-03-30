#include <iostream>		//  oo  .--.
#include <conio.h>		//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	system ("color 8B");
	cout<<"\t\t\t\t:::::::::::::::::::::::::\n";
	cout<<"\t\t\t\t:: Titulo del programa ::\n";
	cout<<"\t\t\t\t:::::::::::::::::::::::::\n\n";


	int num=0,n[5]={0,0,0,0,0},x=0,y=0;

	cout<<" Numeros a ordenar -> "<<endl;
	for(x=0; x<10; x++)
	{
		cout<<x+1<<")";
		cin>>n[x];
		cout<<endl;
	}

	for(x = 0 ; x < 10; ++x)
	{
		for(y = x + 1; y < 10 ; ++y)
		{
			if( n[y] < n[x])
			{
				num = n[y]; 	n[y] = n[x];
				n[x] = n[y];	n[x] = num;
			}
		}
	}

	cout<<" Ordenamiento Final -> "<<endl; 
	for(x = 0; x < 10; ++x)
	{
		cout<<n[x]<<" ";
	}


	system("cls"); //Limpia la consola
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	getch();
	return 0;
}