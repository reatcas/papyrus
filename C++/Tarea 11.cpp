#include <iostream>
using namespace std;
int main()
{
	int x[4]={1,0,0,1}, y=0;
	const char *c[2]={" ","*"};
	while (x[3]<=8){
		while (x[0]<=16){
			for (x[1]=1;x[1]<=1;x[0]++)	{cout << c[1]; x[1]++;}
			for (x[2]=1;x[2]<=1;x[0]++)	{cout << c[0]; x[2]++;}}
				cout<<endl; x[3]++; x[0]=1;
		while (x[0]<=16){
			for (x[1]=1;x[1]<=1;x[0]++)	{cout << c[0]; x[1]++;}
			for (x[2]=1;x[2]<=1;x[0]++)	{cout << c[1]; x[2]++;}}
				cout<<endl; x[3]++; x[0]=1;}
	getch();
	return 0;
}