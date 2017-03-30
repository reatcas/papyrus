#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int x=0,v=0,r=0;
	const char *o[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	cout<<"::Calculo de Ventas Anuales ::"<<endl;
	for (x=0;x<=12;x++)
	{
		cout<<"Ventas de "<<o[x]<<" ->"<<endl; cin>>v;
		r+=v; cout<<endl<<endl<<r<<endl<<endl;
	}
	cout<<"El total de ventas en el año es ->"<<r;
	r=r/12;
	cout<<"El promedio de ventas en el año es ->"<<r;
	getch();
	return 0;
}