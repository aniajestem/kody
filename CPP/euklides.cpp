/*
 * euklides.cpp
 * 
 */


#include <iostream>

using namespace std;

int euklides(int x, int y)
{
    while(x != y)
    {
        if(x > y)
            x = x - y;
        else
            y = y - x;
    }
    return x;
}

int main(int argc, char **argv)
{
    int x = 0;
    int y = 0;
    
        cout<< "Podaj pierwsza liczbe: ";
        cin >> x;
        cout<< "Podaj druga liczbe: ";
        cin >> y;
    
        cout<< "NWD = "  <<euklides(x,y);
    
	return 0;
}
