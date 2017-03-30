#include <iostream>
using namespace std;
int main()
{
	int x, n[2], re[4]; char i[] = " = ";
	const char *o[4] = {"Suma","Producto","Diferencia","Cociente"};
	for (x=0 ; x<=1; x++)
	{
		cout << "               ::     Ingrese un numero     ::\n\n     -> "; cin >> n[x];
	}
	re[0]=n[0]+n[1];	re[1]=n[0]*n[1];	re[2]=n[0]-n[1];	re[3]=n[0]/n[1];
	for (x=0 ; x<=4 ; x++)	{cout << o[x] << i << re[x] << endl;}
	return 0;
}