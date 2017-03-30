#include <iostream>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`
#include <conio.h>
double x1=0,x2=0,a=0,b=0,c=0;
void bienvenida(){
	cout<<":: Solucionador cuadrático ::\n";
	cout<< "\n");
	cout<<"               ___________ \n";
	cout<<"       -b +- |/ b^2 - 4ac '  \n";
	cout<<"x =   _____________________\n";
	cout<<"                2a\n";
	cout<<"\n:::::::::::::::::::::::::::::::\n\n";}

int main(int argc, char const *argv[])
{
	bienvenida();	
	cout<<"\tValor de a ->";	cin>>a;
	cout<<"\tValor de b ->";	cin>>b;
	cout<<"\tValor de c ->";	cin>>c;
	int ra = pow(b,2)-4*(a*c);
	if(ra < 0)    {cout<<"\t- No tiene Solucion -"<<endl;}
				else{x1 = (-b+sqrt(ra))/(2*a);
					 x2 = (-b-sqrt(ra))/(2*a);
					 if(x1 == x2)	{cout<<"\t\tSolucion unica x1 = " << x1;}
								else{cout<<"\t\tSolucion x1 = " << x1 << endl;
									 cout<<"\t\tSolucion x2 = " << x2 << endl;}}
	getch();
	return 0;
}