#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	system ("color 8B");
	int hor=0,cuo=0,tot=0;
		while (hor!=-1)
			{
				cout<<endl<<"Introduzca las horas trabajadas (-1 para salir): ";
				cin>>hor;
				if (hor!=-1)
				{
					cout<<endl<<"Introduzca la tarifa por horas del empleado ($00.00): ";
					cin>>cuo;
					if (hor>40)
					{
						tot=hor*cuo;	hor-=40;
						cuo=cuo/2;		hor=hor*cuo;
						tot+=hor;
						cout<<"     El salario es: $"<<tot<<endl;
					}
					else
					{
						tot=hor*cuo;
						cout<<"     El salario es: $"<<tot<<endl;

					}
				}
			}
		cout<<endl<<endl<<"   - Fin - Presione cualquier tecla para salir";
	getch();
	return 0;
}