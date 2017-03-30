/*
   _____     ________ ________    
  /  |  |    \_____  \\_____  \   
 /   |  |_     _(__  <  _(__  <   
/    ^   /    /       \/       \  
\____   | /\ /______  /______  /  
     |__| \/        \/       \/   

*/
#include <iostream>		//  oo  .--.
#include <conio.h>		//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
using namespace std;

int main()
{
	system ("color 8B");
	int n=0,v=0,d=10000,c=0,x1=0,x2=0,x3=0,x4=0,x5=0;
	cout<<"\t\t\t\t:::::::::::::::::::::::::\n";
	cout<<"\t\t\t\t:: Programa Palindromo ::\n";
	cout<<"\t\t\t\t:::::::::::::::::::::::::\n\n";

	cout<<"\n\n\t\t Ingrese un numero para determinar si es un palindromo\n";
	cin>>v;
	cout<<"\t\t\t\t:::::::::::::::::::::::::\n\n";

	n=v;		x1=n/d;
	if (0==n)	{;}
	else		{cout<<"["<<x1<<"]"<<"\t";}
	n=v%d;		v=n;	d=d/10;

	n=v;		x2=n/d;
	if (0==n)	{;}
	else		{cout<<"["<<x2<<"]"<<"\t";}
	n=v%d;		v=n;	d=d/10;

	n=v;		x3=n/d;
	if (0==n)	{;}
	else		{cout<<"["<<x3<<"]"<<"\t";}
	n=v%d;		v=n;	d=d/10;

	n=v;		x4=n/d;
	if (0==n)	{;}
	else		{cout<<"["<<x4<<"]"<<"\t";}
	n=v%d;		v=n;	d=d/10;

	n=v;		x5=n/d;
	if (0==n)	{;}
	else		{cout<<"["<<x5<<"]"<<"\t";}
	n=v%d;		v=n;	d=d/10;

	if (x1==x5){
		if (x2==x4)	{cout<<"\n\n\n\t :: El numero ingresado SI es un palindromo ::";}
		else 		{cout<<"\n\n\n\t :: El numero ingresado No es un palindromo ::";}}
	else 			{cout<<"\n\n\n\t :: El numero ingresado No es un palindromo ::";}

	getch();
	system("cls"); //Limpia la consola
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	getch();
	return 0;
}