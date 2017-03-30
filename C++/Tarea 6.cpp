#include <iostream>   //  oo   .--.
#include <conio.h>    //   \\ (    )_
#include <stdlib.h>   //    `~~~~~~~~`
using namespace std;
const char *x[2]={"-","*"};
int c=0;
void a1(){for(c=1;c<=1;c++) {cout<<x[1];}}
void e1(){for(c=1;c<=1;c++) {cout<<x[0];}}
void a2(){a1();a1();}		void e2(){e1();e1();}
void a3(){a1();a2();}		void e3(){e1();e2();}
void a4(){a2();a2();}		void e4(){e2();e2();}
void a5(){a3();a2();}		void e5(){e3();e2();}
void a6(){a3();a3();}		void e6(){e3();e3();}
void a7(){a5();a2();}		void e7(){e5();e2();}
void a8(){a5();a3();}		void e8(){e5();e3();} 
void a9(){a7();a2();}		void e9(){e7();e2();}	
void a10(){a7();a3();}		void e10(){e7();e3();}		
void a11(){a7();a4();}		void e11(){e7();e4();}	
void nvl(){cout<<endl;}

int main()
{
	a9();e9();a3();e10();a1();e9();e2();a1();							nvl();
	a1();e7();a1();e7();a1();e5();a1();e7();a3();e9();a1();e1();a1();	nvl();
	a1();e7();a1();e6();a1();e7();a1();e5();a5();e7();a1();e3();a1(); 	nvl();
	a1();e7();a1();e6();a1();e7();a1();e7();a1();e8();a1();e5();a1();	nvl();
	a1();e7();a1();e6();a1();e7();a1();e7();a1();e7();a1();e7();a1();	nvl();
	a1();e7();a1();e6();a1();e7();a1();e7();a1();e8();a1();e5();a1();	nvl();
	a1();e7();a1();e6();a1();e7();a1();e7();a1();e9();a1();e3();a1();	nvl();
	a1();e7();a1();e7();a1();e5();a1();e8();a1();e10();a1();e1();a1();	nvl();
	a9();e9();a3();e10();a1();e11();a1();								nvl();
return 0;
}