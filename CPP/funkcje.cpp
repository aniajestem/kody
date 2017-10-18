/*
 * funkcje.cpp
 * 
 */


#include <iostream>

using namespace std;

 // void- jeżeli funkcja ma nie zwracać wyniku
void dodaj (int a, int b) //(int) jeżeli liczby są całkowite ; całość to deklaracja funkcji
{
    cout << " Suma: " << a+b << endl;
}

int odejmij (int x, int y)
{
    return x-y;
}

int pomnoz (int k, int l)
{
    return k*l ;
}

int podziel (int w, int u)
{
    if (u==0)
    {
        cout << "Nie dzieli się przez 0";
        return 0;
    }
    
    return w/u ;
}

    if (u==0)
    {
        cout << 0;
    }
int main(int argc, char **argv)


{
    int a, b;
    a = b = 0;
    
    cout << "podaj dwie liczby: " << endl;
    cin >> a >> b;
    
    // po nazwie funkcji zawsze występują nawiasy
    dodaj (a, b); // wywołanie funkcji tzn. się jej używa
    // dodaj (100,200); - wywołanie funkcji
    
        cout << "Różnica: " << odejmij (a,b) << endl;
        
        cout << "Iloczyn: " << pomnoz (a,b) << endl;
        
        cout << "Iloraz: " << podziel (a,b) << endl;
        
    








return 0;
}

