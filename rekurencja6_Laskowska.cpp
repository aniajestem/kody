/*
 * rekurencja4_Laskowska.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;


int nwd (int x, int y)
{
    if (y == 0)
        return x;
    else
        return nwd (y, x% y) ;
    }
    

int main(int argc, char **argv)
{
    int x,y;
    cout << "Podaj dwie liczby: " ;
    
    cin >> x >> y;
    
    cout << "nwd (" << x << " , " << y << ") = " << nwd (x,y) << endl ;
	
	return 0;
}

