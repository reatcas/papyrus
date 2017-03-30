/*Se dan 65 notas cuya calificacion oscila entre cero y cien
queremos obtener lo siguiente:
1. Promedio de la clase
2. Numero de Reprobados
3. Numero de Aprobados
4. Numero de alumnos mayor a 90
Lea las notas en un arreglo unidimensional
*/
#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \ (    )_
#include <math.h>		//    `~~~~~~~~`

int main(int argc, char const *argv[])
{
	int pmin,pmax,min,max,cnt=3,nu1=0,nu2=0,ma,me,to,fin,ap=0,re=0,ex=0; int x,Area [5]; float prom=0;
	printf("::::::::::::::::::::::\n");
	printf(":: Notas de Alumnos ::\n");
	printf("::::::::::::::::::::::\n\n");
	printf("Nota 1 --->", x);
	scanf("%d",&nu1);		if (nu1>=90){ex++;	printf("- Excelencia - \n");}
							else if (nu1 >= 70){ap++;	printf("- Aprobado -\n");} else{re++;	printf("- Reprobado -\n");}
	printf("Nota 2 --->", x);
	scanf("%d",&nu2);		if (nu2>=90){ex++;	printf("- Excelencia - \n");}
							else if (nu2 >= 70){ap++;	printf("- Aprobado -\n");} else{re++;	printf("- Reprobado -\n");}
	prom=nu1+nu2;
	if (nu1>=nu2){	max = nu1;	min = nu2;	pmax=1;	}
	if (nu2>=nu1){	max = nu2;	min = nu1;	pmin=1;	}
	for (x=3; x<=5; x++)
	{
		printf("Nota %d --->", x);
		scanf("%d",&Area[x]); nu2=Area[x];
		if (Area[x]>=90)					{ex++;	printf("- Excelencia - \n");}
		else
			if (Area[x] >= 70)				{ap++;	printf("- Aprobado -\n");}
			else							{re++;	printf("- Reprobado -\n");}
		if (nu2>=max)		{if (nu2>min)		{max=nu2;pmax=cnt;}}
		if (nu2<=min)		{if (nu2<max)		{min=nu2;pmin=cnt;}}
		prom=prom+Area[x];
		cnt++;
	}
	to=ap+re;
	prom=(prom/5);
	printf("::::::::::::::::::::::::::::\n");
	printf(":: Promedio   ---> %.2f    \n",prom);
	printf(":: Aprobados  ---> %d\n",ap);
	printf(":: Reprobados ---> %d\n",re);
	printf(":: Excelencia ---> %d\n",ex);
	printf(":: Total      ---> %d\n",to);
	printf(":: Mayor      ---> %d"" Posicion: %d\n", max, pmax);
	printf(":: Menor      ---> %d"" Posicion: %d\n", min, pmin);
	printf("::::::::::::::::::::::::::::\n\n");
	printf(":: Presione Cualquier tecla para continuar ::\n");
	scanf("%d", &fin);
	scanf("%d", &fin);
	return 0;
}