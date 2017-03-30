#include <iostream>
using namespace std;

// Declara contadores y arrays temporales para operar las fracciones
	int n[3]={0,0,0},d[3]={0,0,0},x=0,y=0,z=2;
// Declara las variables donde se leerán las fracciones a comparar, una vez ingresadas
// solo sirve para volver a obtener su valor.
	int on[2]={0,0},od[2]={0,0};
// Declara como puntero "o" en un array de 6 casillas para llamarlos luego en un ciclo for
// en los procedimientos de salida.
	const char *o[6]={"\t\t- Numerador >\t","\t\t- Denominador >\t","\n\n - Suma:\n", "\n\n - Resta:\n","\n\n - Multiplicacion:\n","\n\n - Division:\n"};	

// Muestra la salida en n y d del array en la casilla [2] como resultado
void Salida()	{cout<<o[z]<<n[2]<<endl<<"----\n"<<d[2];z++;}
// Obtiene del array on[] y od[] las fracciones y las asigna a al array n y d que son
// de utilizacion temporal en un ciclo for.
void obt()		{int zz=0; for (zz=0;zz<=1;zz++)	{n[zz]=on[zz]; d[zz]=od[zz];}}
// Simplifica los valores asignados a las variables num y den y devuelve su resultado a las
// variables temporales n[2] y d[2]
int simp(int num, int den)
{
	if(1==den){n[2]=num; d[2]=den;}
	else{int b=2;
		while(b<=num)
		{
			if(den%b==0 && num%b==0){den=den/b;num=num/b;}
			else{b++;}
		}
	n[2]=num; d[2]=den;
	}
	return 0;
}
int main()
{
	// Obtiene los valores de las fracciones a operar
	for (x=0;x<=1;x++)
		{
			cout<<"\n\n\t- Ingrese una fraccion -\n\n";
			for (y=0;y<=1;y++)
			{
				if (0==y)	{cout<<o[0];cin>>on[x];}
				else 		{cout<<o[1];cin>>od[x];}
			}
		}
	// Procedimientos de suma, resta multiplicacion y division
		suma:	obt();
		if (d[0]=d[1])	{d[2]=d[0];n[2]=n[0]+n[1];}
		else			{d[2]=d[0]*d[1];
		n[0]=(d[2]/od[0])*on[0];
		n[1]=(d[2]/od[1])*on[1];
		n[2]=n[0]+n[1];}
	// Envia el resultado en n[2] y d[2] a simplificación
		simp(n[2],d[2]);
	// Llama el procedimiento de salida
		Salida();
		
		resta: 	obt();
		if (d[0]=d[1])	{d[2]=d[0];n[2]=n[0]-n[1];}
		else			{d[2]=d[0]*d[1];
		n[0]=(d[2]/od[0])*n[0];
		n[1]=(d[2]/od[1])*n[1];
		n[2]=n[0]-n[1];}
		simp(n[2],d[2]);	Salida();
		
		multiplicacion: obt();
		n[2]=n[0]*n[1];	d[2]=d[0]*d[1];
		simp(n[2],d[2]);	Salida();

		division:		obt();
		n[2]=n[0]*d[1];	d[2]=d[0]*n[1];
		simp(n[2],d[2]);	Salida();
	return 0;
}

