/*
 * petla.cpp
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    // iteracja ( powtarzanie czegoś )
    int i; // zmienna iteracyjna
    int suma = 0 ;  // suma kolejnych liczb
    int liczba = 0 ;  // liczbna wprowadzana
    int ile_razy = 0 ;
    
    cout << " Ile liczb podasz? ";
    cin >> ile_razy;
    
     //inkrementacja - zwiększenie ; zamiast i = i + 1, to i++
     // dekrementacja - zmiejszenie; zamiast i = i - 1, to i--
     // inkrementacja i+=2 - zwiększ wartość 'i' o 2
     
    for (i = 0; i < ile_razy; i++ )
    
        {
            
            cout << "podaj liczbę: " ;
            cin >> liczba;
            // suma = suma + liczba;
            suma += liczba;
        }
        
        cout << " Suma: " << suma << endl;
    
    
    return 0;
}

