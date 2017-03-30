#include <stdio.h>		//  oo   .--.
#include <stdlib.h>		//   \\ (    )_
#include <math.h>		//    `~~~~~~~~`

int main()
{
int a[50],n,x=0,suma=0,prom=0;
for(x=0;x<n;x++)
{
printf("nota numero %d:");
scanf("%d",a[x]);
suma = suma + a[x];
//el entero x aumenta en el for
}
prom = suma/n;
printf("promedio notas: %d",prom);
return 0;
}