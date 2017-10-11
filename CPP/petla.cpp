/*
 * petla.cpp
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    // iteracja ( powtarzanie czegoś )
    int i;
    
     //inkrementacja - zwiększenie ; zamiast i = i + 1, to i++
     // dekrementacja - zmiejszenie; zamiast i = i - 1, to i--
     // inkrementacja i+=2 - zwiększ wartość 'i' o 2
     
    for (i = 0; i <= 100; i++ )
    {
        
        // dzielenie modulo czyli z resztą - %
        // różne od ' != '
        if (i % 10 == 0)
        {
            cout << i << endl;
            ;
        }
        // cout << '*' << endl;
        
    }
    
    return 0;
}

