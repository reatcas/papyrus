#include <iostream>		//  oo  .--.
#include <conio.h>		//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	system ("color 8B");
	cout<<"\t\t\t\t::::::::::::::::::::::\n";
	cout<<"\t\t\t\t:: Rene Casaña 7.15 ::\n";
	cout<<"\t\t\t\t::::::::::::::::::::::\n\n";

	int Nmr=0,n[20]={0};
	for (int i = 0; i < 20; ++i) 
	{		
		cout<<"\tIngrese un numero entre 10 y 100 ->";	cin>>Nmr;

		if (Nmr<10)
		{
			cout<<"\t - Solo se permite numeros entre 10 y 100"<<endl;
		}
		else
		{
			if (Nmr>100)
			{
				cout<<"\t - Solo se permite numeros entre 10 y 100"<<endl;
			}	
			else
			{
				n[i]=Nmr;
			}
		}
	}

	cout<<"Los numeros son: "<<endl;

	if(n[0]!=n[1]&&n[0]!=n[2]&&n[0]!=n[3]&&n[0]!=n[4]&&n[0]!=n[5]&&n[0]!=n[6]&&n[0]!=n[7]&&n[0]!=n[8]&&n[0]!=n[9]&&n[0]!=n[10]&&n[0]!=n[11]&&n[0]!=n[12]&&n[0]!=n[13]&&n[0]!=n[14]&&n[0]!=n[15]&&n[0]!=n[16]&&n[0]!=n[17]&&n[0]!=n[18]&&n[0]!=n[19])
	cout<<n[0]<<endl;
	if(n[1]!=n[0]&&n[1]!=n[2]&&n[1]!=n[3]&&n[1]!=n[4]&&n[1]!=n[5]&&n[1]!=n[6]&&n[1]!=n[7]&&n[1]!=n[8]&&n[1]!=n[9]&&n[1]!=n[10]&&n[1]!=n[11]&&n[1]!=n[12]&&n[1]!=n[13]&&n[1]!=n[14]&&n[1]!=n[15]&&n[1]!=n[16]&&n[1]!=n[17]&&n[1]!=n[18]&&n[1]!=n[19])
	cout<<n[1]<<endl;
	if(n[2]!=n[0]&&n[2]!=n[1]&&n[2]!=n[3]&&n[2]!=n[4]&&n[2]!=n[5]&&n[2]!=n[6]&&n[2]!=n[7]&&n[2]!=n[8]&&n[2]!=n[9]&&n[2]!=n[10]&&n[2]!=n[11]&&n[2]!=n[12]&&n[2]!=n[13]&&n[2]!=n[14]&&n[2]!=n[15]&&n[2]!=n[16]&&n[2]!=n[17]&&n[2]!=n[18]&&n[2]!=n[19])
	cout<<n[2]<<endl;
	if(n[3]!=n[0]&&n[3]!=n[1]&&n[3]!=n[2]&&n[3]!=n[4]&&n[3]!=n[5]&&n[3]!=n[6]&&n[3]!=n[7]&&n[3]!=n[8]&&n[3]!=n[9]&&n[3]!=n[10]&&n[3]!=n[11]&&n[3]!=n[12]&&n[3]!=n[13]&&n[3]!=n[14]&&n[3]!=n[15]&&n[3]!=n[16]&&n[3]!=n[17]&&n[3]!=n[18]&&n[3]!=n[19])
	cout<<n[3]<<endl;
	if(n[4]!=n[0]&&n[4]!=n[1]&&n[4]!=n[2]&&n[4]!=n[3]&&n[4]!=n[5]&&n[4]!=n[6]&&n[4]!=n[7]&&n[4]!=n[8]&&n[4]!=n[9]&&n[4]!=n[10]&&n[4]!=n[11]&&n[4]!=n[12]&&n[4]!=n[13]&&n[4]!=n[14]&&n[4]!=n[15]&&n[4]!=n[16]&&n[4]!=n[17]&&n[4]!=n[18]&&n[4]!=n[19])
	cout<<n[4]<<endl;
	if(n[5]!=n[0]&&n[5]!=n[1]&&n[5]!=n[2]&&n[5]!=n[3]&&n[5]!=n[4]&&n[5]!=n[6]&&n[5]!=n[7]&&n[5]!=n[8]&&n[5]!=n[9]&&n[5]!=n[10]&&n[5]!=n[11]&&n[5]!=n[12]&&n[5]!=n[13]&&n[5]!=n[14]&&n[5]!=n[15]&&n[5]!=n[16]&&n[5]!=n[17]&&n[5]!=n[18]&&n[5]!=n[19])
	cout<<n[5]<<endl;
	if(n[6]!=n[0]&&n[6]!=n[1]&&n[6]!=n[2]&&n[6]!=n[3]&&n[6]!=n[4]&&n[6]!=n[5]&&n[6]!=n[7]&&n[6]!=n[8]&&n[6]!=n[9]&&n[6]!=n[10]&&n[6]!=n[11]&&n[6]!=n[12]&&n[6]!=n[13]&&n[6]!=n[14]&&n[6]!=n[15]&&n[6]!=n[16]&&n[6]!=n[17]&&n[6]!=n[18]&&n[6]!=n[19])
	cout<<n[6]<<endl;
	if(n[7]!=n[0]&&n[7]!=n[1]&&n[7]!=n[2]&&n[7]!=n[3]&&n[7]!=n[4]&&n[7]!=n[5]&&n[7]!=n[6]&&n[7]!=n[8]&&n[7]!=n[9]&&n[7]!=n[10]&&n[7]!=n[11]&&n[7]!=n[12]&&n[7]!=n[13]&&n[7]!=n[14]&&n[7]!=n[15]&&n[7]!=n[16]&&n[7]!=n[17]&&n[7]!=n[18]&&n[7]!=n[19])
	cout<<n[7]<<endl;
	if(n[8]!=n[0]&&n[8]!=n[1]&&n[8]!=n[2]&&n[8]!=n[3]&&n[8]!=n[4]&&n[8]!=n[5]&&n[8]!=n[6]&&n[8]!=n[7]&&n[8]!=n[9]&&n[8]!=n[10]&&n[8]!=n[11]&&n[8]!=n[12]&&n[8]!=n[13]&&n[8]!=n[14]&&n[8]!=n[15]&&n[8]!=n[16]&&n[8]!=n[17]&&n[8]!=n[18]&&n[8]!=n[19])
	cout<<n[8]<<endl;
	if(n[9]!=n[0]&&n[9]!=n[1]&&n[9]!=n[2]&&n[9]!=n[3]&&n[9]!=n[4]&&n[9]!=n[5]&&n[9]!=n[6]&&n[9]!=n[7]&&n[9]!=n[8]&&n[9]!=n[10]&&n[9]!=n[11]&&n[9]!=n[12]&&n[9]!=n[13]&&n[9]!=n[14]&&n[9]!=n[15]&&n[9]!=n[16]&&n[9]!=n[17]&&n[9]!=n[18]&&n[9]!=n[19])
	cout<<n[9]<<endl;
	if(n[10]!=n[0]&&n[10]!=n[1]&&n[10]!=n[2]&&n[10]!=n[3]&&n[10]!=n[4]&&n[10]!=n[5]&&n[10]!=n[6]&&n[10]!=n[7]&&n[10]!=n[8]&&n[10]!=n[9]&&n[10]!=n[11]&&n[10]!=n[12]&&n[10]!=n[13]&&n[10]!=n[14]&&n[10]!=n[15]&&n[10]!=n[16]&&n[10]!=n[17]&&n[10]!=n[18]&&n[10]!=n[19])
	cout<<n[10]<<endl;
	if(n[11]!=n[0]&&n[11]!=n[1]&&n[11]!=n[2]&&n[11]!=n[3]&&n[11]!=n[4]&&n[11]!=n[5]&&n[11]!=n[6]&&n[11]!=n[7]&&n[11]!=n[8]&&n[11]!=n[9]&&n[11]!=n[10]&&n[11]!=n[12]&&n[11]!=n[13]&&n[11]!=n[14]&&n[11]!=n[15]&&n[11]!=n[16]&&n[11]!=n[17]&&n[11]!=n[18]&&n[11]!=n[19])
	cout<<n[11]<<endl;
	if(n[12]!=n[0]&&n[12]!=n[1]&&n[12]!=n[2]&&n[12]!=n[3]&&n[12]!=n[4]&&n[12]!=n[5]&&n[12]!=n[6]&&n[12]!=n[7]&&n[12]!=n[8]&&n[12]!=n[9]&&n[12]!=n[10]&&n[12]!=n[11]&&n[12]!=n[13]&&n[12]!=n[14]&&n[12]!=n[15]&&n[12]!=n[16]&&n[12]!=n[17]&&n[12]!=n[18]&&n[12]!=n[19])
	cout<<n[12]<<endl;
	if(n[13]!=n[0]&&n[13]!=n[1]&&n[13]!=n[2]&&n[13]!=n[3]&&n[13]!=n[4]&&n[13]!=n[5]&&n[13]!=n[6]&&n[13]!=n[7]&&n[13]!=n[8]&&n[13]!=n[9]&&n[13]!=n[10]&&n[13]!=n[11]&&n[13]!=n[12]&&n[13]!=n[14]&&n[13]!=n[15]&&n[13]!=n[16]&&n[13]!=n[17]&&n[13]!=n[18]&&n[13]!=n[19])
	cout<<n[13]<<endl;
	if(n[14]!=n[0]&&n[14]!=n[1]&&n[14]!=n[2]&&n[14]!=n[3]&&n[14]!=n[4]&&n[14]!=n[5]&&n[14]!=n[6]&&n[14]!=n[7]&&n[14]!=n[8]&&n[14]!=n[9]&&n[14]!=n[10]&&n[14]!=n[11]&&n[14]!=n[12]&&n[14]!=n[13]&&n[14]!=n[15]&&n[14]!=n[16]&&n[14]!=n[17]&&n[14]!=n[18]&&n[14]!=n[19])
	cout<<n[14]<<endl;
	if(n[15]!=n[0]&&n[15]!=n[1]&&n[15]!=n[2]&&n[15]!=n[3]&&n[15]!=n[4]&&n[15]!=n[5]&&n[15]!=n[6]&&n[15]!=n[7]&&n[15]!=n[8]&&n[15]!=n[9]&&n[15]!=n[10]&&n[15]!=n[11]&&n[15]!=n[12]&&n[15]!=n[13]&&n[15]!=n[14]&&n[15]!=n[16]&&n[15]!=n[17]&&n[15]!=n[18]&&n[15]!=n[19])
	cout<<n[15]<<endl;
	if(n[16]!=n[0]&&n[16]!=n[1]&&n[16]!=n[2]&&n[16]!=n[3]&&n[16]!=n[4]&&n[16]!=n[5]&&n[16]!=n[6]&&n[16]!=n[7]&&n[16]!=n[8]&&n[16]!=n[9]&&n[16]!=n[10]&&n[16]!=n[11]&&n[16]!=n[12]&&n[16]!=n[13]&&n[16]!=n[14]&&n[16]!=n[15]&&n[16]!=n[17]&&n[16]!=n[18]&&n[16]!=n[19])
	cout<<n[16]<<endl;
	if(n[17]!=n[0]&&n[17]!=n[1]&&n[17]!=n[2]&&n[17]!=n[3]&&n[17]!=n[4]&&n[17]!=n[5]&&n[17]!=n[6]&&n[17]!=n[7]&&n[17]!=n[8]&&n[17]!=n[9]&&n[17]!=n[10]&&n[17]!=n[11]&&n[17]!=n[12]&&n[17]!=n[13]&&n[17]!=n[14]&&n[17]!=n[15]&&n[17]!=n[16]&&n[17]!=n[18]&&n[17]!=n[19])
	cout<<n[17]<<endl;
	if(n[18]!=n[0]&&n[18]!=n[1]&&n[18]!=n[2]&&n[18]!=n[3]&&n[18]!=n[4]&&n[18]!=n[5]&&n[18]!=n[6]&&n[18]!=n[7]&&n[18]!=n[8]&&n[18]!=n[9]&&n[18]!=n[10]&&n[18]!=n[11]&&n[18]!=n[12]&&n[18]!=n[13]&&n[18]!=n[14]&&n[18]!=n[15]&&n[18]!=n[16]&&n[18]!=n[17]&&n[18]!=n[19])
	cout<<n[18]<<endl;
	if(n[19]!=n[0]&&n[19]!=n[1]&&n[19]!=n[2]&&n[19]!=n[3]&&n[19]!=n[4]&&n[19]!=n[5]&&n[19]!=n[6]&&n[19]!=n[7]&&n[19]!=n[8]&&n[19]!=n[9]&&n[19]!=n[10]&&n[19]!=n[11]&&n[19]!=n[12]&&n[19]!=n[13]&&n[19]!=n[14]&&n[19]!=n[15]&&n[19]!=n[16]&&n[19]!=n[17]&&n[19]!=n[18])
	cout<<n[19]<<endl;

	getch();
	system("cls"); //Limpia la consola
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	getch();
	return 0;
}