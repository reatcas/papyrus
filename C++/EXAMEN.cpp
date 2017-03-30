#include <iostream>		//  oo   .--.
#include <conio.h>		//   \ (    )_
#include <stdlib.h>		//    `~~~~~~~~`
#include <math.h>
using namespace std;
void limpiar(){system("cls");}
void continuar()
{
	cout<<"\n\n\n::          --- Presione una tecla para volver al menu ---          ::\n";
	getch();
	system("cls");
}
int main(int argc, char const *argv[])
{
	system ("color 8B"); 
	cout<<"\t\t\t\t::::::::::::::::::::::::::::\n";
	cout<<"\t\t\t\t:: Examen de Programacion ::\n";
	cout<<"\t\t\t\t::::::::::::::::::::::::::::\n\n";

	int sel=0,a=0,b=0,c=0,d=0,e=0;
	float x1=0,x2=0,x3=0,x4=0;
	while (1!=0)
	{
		cout<<"\tSeleccione una opcion (-1 para salir)"<<endl;
		cout<<"\t\t1 - Programa Esfera"<<endl;
		cout<<"\t\t2 - Programa Notas"<<endl;
		cin>>sel;
		if (1==sel)
		{
			limpiar();
			cout<<"\t- Programa Esfera -"<<endl;
			cout<<"\t\tIngrese el radio de la esfera ->"<<endl; cin>>a;
			x1=4*3.1416*(pow(a,2));
			x2=(4/3)*(3.1416*(pow(a,3)));
			cout<<"\t\t\t El area esferica es -> "<<x1<<endl;
			cout<<"\t\t\t El volumen esferico es -> "<<x2<<endl;
			continuar();
		}
		if (2==sel)
			{
				limpiar();
				int x[4][3];
				int p[3]={0,0,0};
				int i=0,j=0;
				cout<<"\t- Programa Notas -"<<endl;
				for ( i = 0; i < 3; ++i)
				{
					cout<<"\t\tAlumno "<< i << endl;
					for (int j = 0; j < 4; ++j)
					{
						cout<<"\t\t\tParcial "<<j<<endl;
						cin>>x[j][i]; p[i]+=x[j][i];
					}
					p[i]=p[i]/4;
				}
				cout<<"\t\t";
				for ( i = 0; i < 4; ++i)
				{
					cout<<"\t["<<i<<"]";
					
				}
				cout<<endl;
				for ( i = 0; i < 3; ++i)
				{
					cout<<"notasAlumnos\t"<<" ["<<i<<"]";
					for ( j = 0; j < 4; ++j)
					{
						cout<<"\t"<<x[j][i];
					}
					cout<<endl;
				}
				for (int n = 0; n < 3; ++n)
				{
					cout<<"\nEl promedio del Alummo ["<<n<<"] es"<<p[n];
				}
				continuar(); 
			}
	}




	getch();
	system("cls"); //Limpia la consola
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"::          ---       Programa Finalizado       ---          ::\n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	getch();
	return 0;
}