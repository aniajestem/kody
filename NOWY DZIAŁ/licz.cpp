/*
 * licz.cpp

 * 
 */

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>


using namespace std;

int sumuj(char plik[]) {
     ifstream wejscie(plik);
     if (!wejscie) {cout << "Bład otwarcia pliku!"; return 0;}
     float liczba = 0;
     float suma = 0;
     while(!wejscie.eof()) {
        wejscie >> liczba;
        suma += liczba;
    };
}


//int liczZnaki(char plik[]){
        //ifstream wejscie(plik);
        //if (!wejscie) { cout << "Błąd otawrcia pliku!"; return 0;}
        //char plik2[15];
        //strcpy(plik2, plik);
        //char *wsk;
        //wsk = strstr(plik2, ".txt");
        //strncpy(wsk, ".bak", 4);
        //ofstream wyjscie(plik2);
        //if (!wejscie) { cout << "Błąd otawrcia pliku!"; return 0;}
        //char z;
        //int ilesam;
        //ilesam = 0;
        
        //while(!wejscie.eof()) {
            //wejscie.get(z);
            //if (wejscie && z =='a'|| z =='e' || z =='i' || z =='o' || z =='u') {
                //ilesam++;
                    //wyjscie.put(z);
                //}
            //}
        
        
        //wejscie.close(); wyjscie.close();
        //cout << setw(10) << "Samogłosek:" << ilesam << endl;
        //return ilesam;
//}







int liczZnaki(char plik[]){
        ifstream wejscie(plik);
        if (!wejscie) { cout << "Błąd otawrcia pliku!"; return 0;}
        char plik2[15];
        strcpy(plik2, plik);
        char *wsk;
        wsk = strstr(plik2, ".txt");
        strncpy(wsk, ".bak", 4);
        ofstream wyjscie(plik2);
        if (!wejscie) { cout << "Błąd otawrcia pliku!"; return 0;}
        char z;
        int ilea, ileo, ileu, ilee, iley, ilei;
        ilea = ileo = ileu = ilee = iley = ilei= 0;
        
        while(!wejscie.eof()) {
            wejscie.get(z);
            if (wejscie && z =='a' || z == 'A') {
                ilea++;
                }
            if (wejscie && z =='o' || z == 'O') {
                ileo++;
                }
            if (wejscie && z =='u' || z=='U') {
                ileu++;
                }
            if (wejscie && z =='e' || z == 'E') {
                ilee++;
                }
            if (wejscie && z =='y' || z == 'Y') {
                iley++;
                }
            if (wejscie && z =='i' || z == 'I') {
                ilei++;
                    wyjscie.put(z);
                }
            }
        
        
         wejscie.close(); wyjscie.close();
        cout << setw(10) << " a " << ilea << endl;
        cout << setw(10) << " o " << ileo << endl;
        cout << setw(10) << " u " << ileu << endl;
        cout << setw(10) << " e " << ilee << endl;
        cout << setw(10) << " y " << iley << endl;
        cout << setw(10) << " i " << ilei << endl;
        return ilea, ileo, ileu, ilee, iley, ilei;
        
    }



int main(int argc, char **argv) 
{
    char nazwa[15];
    cout << "Podaj nazwę pliku: ";
    cin >> nazwa;
    liczZnaki(nazwa);
    sumuj(nazwa);
	return 0;
}
