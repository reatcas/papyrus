#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main(int argc, char const *argv[])
{   
	int x,y,Area[4][6],Prim=0,Sec=0,Sup=0,Gob=0,Priv=0,Come=0,Otr=0;
	for(x=0;x<=1;x++)
	for(y=0;y<=1;y++)
	{	
		{
			printf("\nI) Nivel educativo:\n");
			printf("1 - Primaria\n2 - Secundaria\n3 - Superior\n");
			scanf("%d",&Area[x][y]);
		}
			if(Area[x][y] == 1)				{Prim++;}	else{Prim == 0;}
				if(Area[x][y] == 2)			{Sec++;}	else{Sec == 0;}
					if (Area[x][y] == 3)	{Sup++;}	else{Sup == 0;}

		  	printf("\n II) Rubro de trabajo:\n");
			printf("1)Gobierno\n2)Empresa Privada\n3)Comercio\n4)Otros\n");
			scanf("%d",&Area[x][y]);
			if(Area[x][y]== 1)					{Gob+=Area[x][y];}		else{Gob == 0;}
				if(Area[x][y]== 2) 				{Priv++;}				else{Priv == 0;}
					if(Area[x][y]== 3) 			{Come++;}				else{Come == 0;}
						if (Area[x][y]== 4) 	{Otr++;}				else{Otr == 0;}   
   	}
   	printf("::::::::::::::::::::::\n");
	printf("::  I - Educacion   ::\n");
	printf("::::::::::::::::::::::\n");
	printf("  Primaria    %d\n",Prim);
	printf("  Secundaria  %d\n",Sec);
	printf("  Superior    %d\n",Sup);
  	
  	printf("::::::::::::::::::::::\n");
	printf("::    II - Rubro    ::\n");
	printf("::::::::::::::::::::::\n");
	printf("  Gobierno          %d\n",Gob);
	printf("  Empresa Privada   %d\n",Priv);
	printf("  Comercio          %d\n",Come);
	printf("  Otros             %d\n",Otr);
	system("pause");
   return 0;
}


