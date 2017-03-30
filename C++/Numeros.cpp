/* Escriba un programa que reciba 5 numeros enteros, y que determine e imprimia
la cantidad de numeros negativos, positivos, pares e impares de la secuencia.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{	
	system ("color 8B");
	int n1=0,n2=0,n3=0,n4=0,n5=0,neg=0,pos=0,par=0,imp=0;
	cout<<"\n\n\tIngrese un numero ->"; cin>>n1;
	if (0>n1){neg++;} 		if (0<n1){pos++;}
	if (0==n1%2){par++;}	else{imp++;}
	cout<<"\tIngrese un numero ->"; cin>>n2;
	if (0>n2){neg++;}		if (0<n2){pos++;}
	if (0==n2%2){par++;}	else{imp++;}
	cout<<"\tIngrese un numero ->"; cin>>n3;
	if (0>n3){neg++;}		if (0<n3){pos++;}
	if (0==n3%2){par++;}	else{imp++;}
	cout<<"\tIngrese un numero ->"; cin>>n4;
	if (0>n4){neg++;}		if (0<n4){pos++;}
	if (0==n4%2){par++;}	else{imp++;}
	cout<<"\tIngrese un numero ->"; cin>>n5;
	if (0>n5){neg++;}		if (0<n5){pos++;}
	if (0==n5%2){par++;}	else{imp++;}
	
	cout<<endl<<endl<<":::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\tHay "<<pos<<" numeros positivos"<<endl;
	cout<<"\tHay "<<neg<<" numeros negativos"<<endl;
	cout<<"\tHay "<<par<<" numeros pares"<<endl;
	cout<<"\tHay "<<imp<<" numeros impares"<<endl;
	getch();
	return 0;
}