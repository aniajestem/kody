/*
 * dec2be.cpp
 * 
 * 
 */

using namespace std;
#include <iostream>

int main(int argc, char **argv)
{   
    char znakA = 'A';
    char znakB = 'B';
    int l14= 14;
    int l15 = 15;
    cout << (int) znakA << (int) znakB << endl;
    cout << (char)l14 << <char) l15 << endl;
    
    
    int podstawa = 0;
    int reszty [16];
    
    int liczba = 0;
    // 120-64= 56
    // 56-32 = 24
    // 24-16 = 8
    // 8-8=0
    // binarnie -> 111100
    
    cout << "Podaj liczbę i podstawę ";
    cin >> liczba >> podstawa;
   
    int i = 0; // indeks tabeli
    // algorytm
    do { // petla wykona sie min. raz
        reszty[i] = liczba%podstawa;
        //cout << liczba % podstawa << " ";
            liczba = liczba / podstawa;
            i++;
        } while (liczba > 0);
        
        //~for(int j= i - 1; j >= 0; j --) { // -- to dekrementacja
            //~cout << reszty[j];
            //~}
            
       
        while (i-1 >= 0) { 
            i--;
            cout << reszty[i];
            
            
            }
        //cout << reszty << endl; // nazwa tabeli jest wskaźnikiem ( jak jest 0x to jest w systemie szesnastkowym będąca adresem komórki RAM)
	
	return 0;
}

