/*
 * największa.cpp

// pobierz trzy liczby całkowite od użytkowanika i wydrukuj największą
*/



#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b,c ;
    a = b = c = 0;
    cout << "Podaj trzy liczby: ";
    cin >> a >> b >> c;



    if (a > b && a > c )
        {
            cout << "Największe a=" << a;
        }
        
    
   if (b > a && b > c )
    
    {
     cout << "Największe b= " << b;
 }
 

     if (c > a && c > b)
     {
     cout << "Największe c=" << c;
     }
    
    
    
    
    // dwie pierwze liczby
    if (a == b && a > c)
    {
        cout << " największe a = b=" << a << b;
        
        
        
        if (c == b && c > a)
        {
             cout<<"największe b i c " << b;
            }
        
        
        
        
    if (c == b && c == a)
        {
            cout << " wszytstkie liczby są równe " << a;
            
            }
    
        }
    
    return 0;
}


