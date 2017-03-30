#include <iostream>		//  oo   .--.
#include <conio.h>		//   \\ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
using namespace std;
int main()
{
	int x, n[3]={0,0,0}, re[3]={0,0,0}; char i[] = " = ";
	const char *cl[1]={"color 8B"};	system (cl[0]);
	const char *a[3] = {"El ","La ", " en la posicion "};
	const char *o[5] = {"suma es ","promedio es ","producto es ","menor es ", "mayor es "};
	cout << "               :::::::::::::::::::::::::::::::::\n";
	cout << "               ::   Operaciones Numericas 2   ::\n";
	cout << "               :::::::::::::::::::::::::::::::::\n\n"; 	ingreso:	
	cout << "    Ingrese tres enteros distintos     ::\n\n     -> ";	cin >>n[0]>>n[1]>>n[2];
	re[0]= (n[0] + n[1]) + n[2];		re[1]= re[0]/3;		re[2]= n[0] * n[1] * n[2];
	cout<<a[1]<<o[0]<<re[0]<<endl;	cout<<a[0]<<o[1]<<re[1]<<endl;	cout<<a[0]<<o[2]<<re[2]<<endl;
	if (((n[0]==n[1]) || (n[2]==n[1])) || (n[0]==n[2]))	{cout<<"\n Hay numeros iguales en la serie, intente de nuevo\n\n"; goto ingreso;}
	else{
		if (n[0] > n[1])
		{	
			if (n[0] > n[2])	{cout<<a[0]<<o[4]<<n[0]<<a[2]<<"1\n";}
			if (n[1] < n[2])	{cout<<a[0]<<o[3]<<n[1]<<a[2]<<"2\n";}
			else				{cout<<a[0]<<o[3]<<n[2]<<a[2]<<"3\n";}}
		else
		{	if (n[0] < n[1])
			{
				if (n[0] < n[2])	{cout<<a[0]<<o[3]<<n[0]<<a[2]<<"1\n";}
				if (n[1] > n[2])	{cout<<a[0]<<o[4]<<n[1]<<a[2]<<"2\n";}
				else				{cout<<a[0]<<o[4]<<n[2]<<a[2]<<"3\n";}}}}
	getch();
	return 0;
}