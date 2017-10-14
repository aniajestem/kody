/*
 * zadnie4.cpp
 */


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)

{
int a = 0 ;
int suma=0;
cout<<"Podaj a: "<<endl;
cin>> a;

	while(a > 0)
	
	{
		suma =suma +a %10;
		a/=10;
		cout<< "Suma : "<< suma << a <<endl;
		
	
	}

	return 0;
}
