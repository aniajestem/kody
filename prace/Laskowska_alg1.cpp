/*
 * Laskowska_alg2.cpp
 * 

 * 
 */

using namespace std;

#include <iostream>

int main(int argc, char **argv)
{
    int a = 0;
    int i=2;
    do {
        cout << "Podaj liczbę od 0 do 100: " ;
        cin >> a;
        } while (a < 0 || a > 100);
        
        while (a!=i) {
            
            if (i<a){
                
                cout << "Liczna jest nieparzysta ";
                break;
                }
                
                i= i+2;
            
            }
	if (a == i) {
        cout << "Liczba jest parzysta";
            }
    
	return 0;
}

