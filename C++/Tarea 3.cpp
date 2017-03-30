#include <iostream>		//  oo   .--.
#include <conio.h>		//   \\ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
using namespace std;
int main()
{
	int x, d[2]; const char *cl[1]={"color 8B"};system (cl[0]);
	const char *o[3] = {" es mas grande","  Estos numeros son iguales"," es mas pequeno"};
	cout << "               ::::::::::::::::::::::\n";
	cout << "               ::   Numero Mayor   ::\n";
	cout << "               ::::::::::::::::::::::\n\n";
	for (x=0 ; x<=1; x++) {cout << "Ingrese un numero\n\n     -> ";	cin >> d[x];}
		
	if 		(d[0]>d[1]) 		{cout<<endl<<"   "<<d[0]<<o[0];	cout<<endl<<"   "<<d[1]<<o[2];}
	else if (d[1]>d[0]) 		{cout<<endl<<"   "<<d[1]<<o[0]; cout<<endl<<"   "<<d[0]<<o[2];}
	else						{cout<<endl<<o[1];}
	getch(); return 0;
}