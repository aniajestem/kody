/*
 * rekurencja1_Laskowska.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;

int wart (int a)
{
    if (a == 1) {
        return 1;
    } else { 
        return wart((a-1)+(a*2)+(a-2)) ;
    
    }
}

int main(int argc, char **argv)
{   
    int a;
    cout << "Podaj wyraz ciągu: " ;
    cin >> a ;
    cout << " Wartość tego wyrazu wynosi: " << wart (a);
	
	return 0;
}

