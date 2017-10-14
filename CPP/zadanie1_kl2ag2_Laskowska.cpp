/*
 * zadanie1.cpp
 */


#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)

{
	int a = 0 ;
	while (true)
	 {
		 cout << "Podaj liczbę :  "<< endl;
		 cin>> a;
         
		 if (a % a == 0 && a >0)
         
		 cout<< "Kwadrat :  "<<a * a << endl;
		 cout <<  "Pierwiastek :  "<< sqrt(a) << endl;
         
		 break;
		} 
 
	
return 0;
}
