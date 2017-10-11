/*
 * petla.cpp
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    // iteracja ( powtarzanie czegoś )
  
    int suma = 0 ;  // suma kolejnych liczb
    int liczba = 0 ;  // liczbna wprowadzana
   
    
     //inkrementacja - zwiększenie ; zamiast i = i + 1, to i++
     // dekrementacja - zmiejszenie; zamiast i = i - 1, to i--
     // inkrementacja i+=2 - zwiększ wartość 'i' o 2
     
    for (;;) // pętla nieskończona
    
        {
            cout << "podaj liczbę: " ;
            cin >> liczba;
            // suma = suma + liczba;
            suma += liczba;
            if( suma > 100) break;
        }
        
        cout << " Suma: " << suma << endl;
    
    
    return 0;
}

