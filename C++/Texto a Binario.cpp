#include <iostream>		//  oo   .--.
#include <conio.h>		//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <stdio.h>
#include <string.h>
using namespace std;

int main() 
{ 
	system ("color 8B");
	char texto[300]; 
	int cnt=0, num, res, binarios[20], i; 
	system("cls"); 
	cout<<"Introduzca un texto para convertirlo a codigo binario:\n"; 
	gets(texto); 
	while(cnt < strlen(texto)) 
	{ 
		i=1; 
		num = texto[cnt]; 
		while(num>0) 
		{ 
			res = num%2; 
			if(res==0) 
			{ 
				binarios[i]=0; 
				i=i+1; 
			} 
			else 
			{ 
				binarios[i]=1; 
				i=i+1; 
				num=num-1; 
			} 
			num=num/2; 
		} 
		i=i-1; 
		while(i>0) 
		{ 
			cout<<binarios[i]; 
			i=i-1; 
		} 
		cout<<" "; 
		cnt = cnt+1; 
	} 
	getch();
	return 0;
}