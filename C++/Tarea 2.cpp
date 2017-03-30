#include <iostream>		//  oo   .--.
#include <conio.h>		//   \\ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
using namespace std;
int main()
{	
	int d;	char s1[] = " ", s2[]="->   ";
	const char *cl[1]={"color 8B"};	system (cl[0]);
	cout << "               :::::::::::::::::::::::::::::::::\n";
	cout << "               ::   Operadores de insercion   ::\n";
	cout << "               :::::::::::::::::::::::::::::::::\n\n";

	cout << "Usando una instruccion y un operador de flujo\n";
	cout << "->   1 2 3 4\n\n";

	cout << "Usando una instruccion y 4 operadores\n";
	cout << "->   1 " << "2 "<<"3 "<<"4 \n\n";
	
	cout << "Usando 4 instrucciones\n";
	cout << "->   1 "; cout << "2 "; cout << "3 "; cout << "4 \n\n";

	cout << "Usando ciclo for\n";	
	for (d=0 ; d<=4 ; d++)
	{
		if (d<1)	{cout << s2;}
		else		{cout << d << s1;}
	}
	getch();
	return 0;
}