#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main(int argc, char const *argv[])
{   
	int x,y,cue,mdar=0,nf=0,ma=0,re=0,ap=0,otr=0,Area[2][2];
	for(x=0;x<2;x++)
	for(y=0;y<2;y++)
	{
			{printf("\nCuenta:\t"); scanf("%d",&cue);}
			printf("\n Calificacion Final del alumno:\t");
			scanf("%d",&Area[x][y]);	mdar=mdar+Area[x][y]/4;
		 	if (Area[x][y]<60) 						{re++;}			else {re == 0;}
			if (Area[x][y]>=90)						{ap++;}			else {ap == 0;}
			if (Area[x][y]>=60 && Area[x][y]<=90)	{otr++;}		else {otr == 0;} 
			if (ma >= Area[x][y]) 					{ma = ma;}		else {ma = Area[x][y];}
	} 
	printf("\n\n Media Aritmética: %d\n",mdar);
	printf("Excelencia   :: %d\n",ap);
	printf("Regular      :: %d\n",otr);
	printf("Reprobados   :: %d\n",re);
	printf("Nota Mayor   :: %d\n",ma);
    system("pause");
   return 0;
}
