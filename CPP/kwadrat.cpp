/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    //char imie; //deklaracja zmiennej znakowej
   
    int bok = 0;
    
    
    
	cout <<"Witaj w C++!" << endl;
	cout <<"Podaj bok kwadratu ";
    cin >> bok;
    cout << "Pole " << bok * bok << endl;
    cout << "Obwód " << 4 * bok << endl;
    
    
    
    
	return 0;
}

