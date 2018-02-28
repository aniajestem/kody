/*
 * rekurencja4_Laskowska.cpp
 * 
 */


#include <iostream>
using namespace std;

int tab_rek(int tab[], int i)
{
    if ( i == 0)
    {
            return tab [0];
            
    }
        return tab [i-1];
}

int main(int argc, char **argv)
{
	int i =5;
    int tab [i];
    tab [0]= 1;
    
    for ( i =1; i <= 5; i++)
     {
         cout << tab_rek (tab, i) << endl;
         }
	return 0;
}

