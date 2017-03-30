#include <iostream>		//  oo  .--.
											//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
using namespace std;


int main()
{
	system ("color 0F");
	int tot=0,sel=0,can=0;
	int pro1c=0,pro1t=0;
	int pro2c=0,pro2t=0;
	int pro3c=0,pro3t=0;
	cout<< " Seleccione un producto (1,2,3)"<<endl;

	for (int i = 0; i < 5; ++i)
	{
		cout<<endl<<" :::::::::::::::::::::::::::::::"<<endl;
		seleccion:
		cout<<endl<<endl<< "   Numero del producto ->"; cin>>sel;

		if (sel==1) {
				system ("color 0D");
					cout<< "   Cantidad ->";
					cin>>can;
					int ptemp=can*2;
					pro1t+=ptemp;
					pro1c+=can;
					}
		if (sel==2)	{
			system ("color 0E");
					cout<< "   Cantidad ->";
					cin>>can;
					int ptemp=can*4;
					pro2t+=ptemp;
					pro2c+=can;
					}
		if (sel==3)	{
			system ("color 0B");
					cout<< "   Cantidad ->";
					cin>>can;
					int ptemp=can*9;
					pro3t+=ptemp;
					pro3c+=can;
					}

	}
	tot=pro1t+pro2t+pro3t;
	system ("color 0F");
	cout<<"   Producto              Cantidad            Total"<<endl;
	cout<<"      1                     "<<pro1c<<"               "<<pro1t<<endl;
	cout<<"      2                     "<<pro2c<<"               "<<pro2t<<endl;
	cout<<"      3                     "<<pro3c<<"               "<<pro3t<<endl;

	cout<<" TOTAL -------------------------------------> "<<tot<<endl<<endl<<endl;

	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";

	return 0;
}
