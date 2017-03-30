#include <iostream>		//  oo   .--.
#include <conio.h>		//   \\ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
using namespace std;
int main()
{
	const char *cl[1]={"color 8B"};	system (cl[0]);
	int n=1,v=0, d=10000,c=1;
		cout<<"\n\n\tIngrese un numero --->"; cin>>v; cout<<"\n\n\t";
		while (c<=5)
		{
			n=v;		n=n/d;
			if (0==n)	{;}
			else		{cout<<"["<<n<<"]"<<"\t";}
			n=v%d;		v=n;		d=d/10;		c++;
		}
	getch();
	return 0;
}