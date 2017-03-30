#include <iostream>		//  oo   .--.
#include <conio.h>		//   \\ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
using namespace std;
int main()
{
	int x, n[3]={0,0,0};
	const char *a[3] = {"El ", " en la posicion "};
	const char *o[5] = {"menor es ", "mayor es "};
	ccc:cout << "    Ingrese tres enteros distintos     ::\n\n     -> "; cin >>n[0]>>n[1]>>n[2];
	if (((n[0]==n[1]) || (n[2]==n[1])) || (n[0]==n[2]))
		{cout<<"\n Hay numeros iguales en la serie, intente de nuevo\n\n"; goto ccc;}
	else{if (n[0] > n[1])
		{	
			if (n[0] > n[2])	{cout<<a[0]<<o[1]<<n[0]<<a[1]<<"1\n";}
			if (n[1] < n[2])	{cout<<a[0]<<o[0]<<n[1]<<a[1]<<"2\n";}
			else				{cout<<a[0]<<o[0]<<n[2]<<a[1]<<"3\n";}}
		else
		{	if (n[0] < n[1])
			{
				if (n[0] < n[2])	{cout<<a[0]<<o[0]<<n[0]<<a[1]<<"1\n";}
				if (n[1] > n[2])	{cout<<a[0]<<o[1]<<n[1]<<a[1]<<"2\n";}
				else				{cout<<a[0]<<o[1]<<n[2]<<a[1]<<"3\n";}}}}
	getch();
	return 0;
}