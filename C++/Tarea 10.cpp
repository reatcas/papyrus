/*Escriba un programa que lea dos enteros, determine si el primero es un múltiplo del segundo e imprima el resultado.
[Sugerencia: use el operador de módulo.]*/

#include <iostream>
using namespace std;
void fn() {cout<<endl;}
int main()
{
	int n[3]={1,0,0};
	const char *o[3]={" es multiplo de "," no"," porque "};
	for (n[0]=1; n[0]<=2;n[0]++)
	{
		cout << "\n Ingrese un numero --> "; cin>>n[n[0]];
	}
	if (0==n[2]%n[1])	{fn(); cout<<n[2] <<o[0] <<n[1];fn(); 	cout <<o[2] <<n[2] <<"/" <<n[1] <<" = "<< n[2]%n[1];}
		else 			{fn(); cout<<n[2] <<o[1] <<o[0];fn();	cout <<o[2] <<n[2] <<"/" <<n[1] <<" != 0";}
	return 0;
}