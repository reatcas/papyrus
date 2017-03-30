#include <iostream>		//  oo   .--.
#include <conio.h>		//   \\ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
using namespace std;
int main()
{
	double r, re[3],pi=3.1416; const char *cl[1]={"color 8B"};	system (cl[0]);
	const char *a[1] = {" El "};
	const char *o[5] = {"diametro ","area ", "perimetro ", "del circulo es: ", " unidades cuadradas - u^2 -"};
	cout << "               ::::::::::::::::::::::::::::\n";
	cout << "               ::   Datos de un circulo  ::\n";
	cout << "               ::::::::::::::::::::::::::::\n\n"; 	ingreso:	
	cout << "    Ingrese longitud del radio     ::\n\n     -> ";	cin >>r;
	if (r>0)	{re[0]= r*2;		re[1]= pi*pow(r,2);		re[2]= 2 * pi * r;
		cout<<a[0]<<o[0]<<o[3]<<re[0]<<endl;
		cout<<a[0]<<o[1]<<o[3]<<re[1]<<o[4]<<endl;
		cout<<a[0]<<o[2]<<o[3]<<re[2]<<endl;}
	else{cout<<" - error - \n\n   El radio debe ser mayor a cero - 0 -\n"; goto ingreso;}

	getch();
	return 0;
}