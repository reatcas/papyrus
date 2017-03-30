#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	system ("color 8B");
	int ast=0,alm[5]={0,0,0,0,0},cnt=0,n2=0,cnt2=1,may=0;
						//0 1 2 3 4
		while (cnt<5)
			{
				cout<<endl<<"Ingrese nota del alumno "<<cnt2<<" -> ";
				if (0==cnt)	{cin>>n2;alm[cnt]=n2;}
				else		{cin>>alm[cnt];}
				cnt++; cnt2++;
				if (alm[cnt]>n2)	{may=cnt2;}
				else {may=cnt2-1;}
			}
		cnt2=1;	cnt=0;
		
		while (cnt2<=5)
		{
			cout<<endl<<"Alumno "<<cnt2<<" -> ";
			while(alm[cnt]>0){cout<<"*"; alm[cnt]--;}
			cnt2++; cnt++;
		}
		cout<<endl<<"El mayor es el Alumno -> "<<may;
		cout<<endl<<endl<<"  Programa Finalizado ";
	getch();
	return 0;
}