/*Escriba un programa que lea cinco enteros y que determine e imprima los enteros mayor y menor en el grupo. Use
solamente las técnicas de programación que aprendió en este capítulo.*/

#include <iostream>
using namespace std;
int main()
{
	int ma=0,me=0, x=1, n[5]={0,0,0,0,0};
	const char *o[4]={"El numero ","mayor ","menor ", "es: "}
	for (x=0; x<=4;x++)
	{
		cout << " ingrese un numero --> "; cin>>n[x];
		if (x<=0) 	{ma=n[x];me=n[x];}
		else		{if (n[x]>=ma)
							{ma=n[x];}
					else	{if (n[x]<=me) {me=n[x];}}}
	}
	cout<<o[0]<<o[1]<<o[3]<<ma;
	cout<<o[0]<<o[2]<<o[3]<<me;
	return 0;
}