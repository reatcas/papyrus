#include <iostream>		//  oo   .--.
#include <conio.h>		//   \\ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
using namespace std;
int main()
{
	int x, n[2], re[4]; char i[] = " = ";
	const char *cl[1]={"color 8B"};	system (cl[0]);
	const char *o[4] = {"Suma","Producto","Diferencia","Cociente"};
	cout << "               :::::::::::::::::::::::::::::::\n";
	cout << "               ::   Operaciones Numericas   ::\n";
	cout << "               :::::::::::::::::::::::::::::::\n\n";
	for (x=0 ; x<=1; x++)
	{
		cout << "               ::     Ingrese un numero     ::\n\n     -> "; cin >> n[x];
	}
	re[0]=n[0]+n[1];	re[1]=n[0]*n[1];	re[2]=n[0]-n[1];	re[3]=n[0]/n[1];
	for (x=0 ; x<=4 ; x++)	{cout << o[x] << i << re[x] << endl;}
	getch();
	return 0;
}