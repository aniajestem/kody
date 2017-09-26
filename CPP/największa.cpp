/*
 * największa.cpp

// pobierz dwie liczby całkowite od użytkowanika i wydrukuj największą
*/



#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b;
    a = b =0;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    if (a > b) 
    
    {
     cout << "Większe a= ";
     cout << a;
    } else if (b > a)
    
    
    if (b > a) 
    {
     cout << "Większe b= ";
     cout << b;
    } else // if (a == b)
    
    
    if (a == b) 
    {
     cout << "Równe, a=" << a << ", b=" << b;
 
    }
    return 0;
}
