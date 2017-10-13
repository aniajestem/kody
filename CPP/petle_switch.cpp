/*
 * petle_switch.cpp

 *  pobiera numer miesiąca i wyświetla jego nazwe
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int m = 0;
    
    
    //while (true)
    //{
    //cout << "Podaj miesiąc: " << endl;
    //cin >> m;
    //if (m < 13 && m>0)
        //break;
    //};
    
    
    // pętla zaporowa
    
    while (m>12 || m<1)  // ||-lub
    {
    cout << "Podaj miesiąc: " << endl;
    cin >> m;
    };
    
    //if (m==1)
    //cout << "Styczeń" << m << endl;
    
    //else if (m==2)
    //cout << "Luty" << m << endl;
    
    //else if (m==3)
    //cout << "Marzec" << m << endl;
    
    
    switch (m) // sprawdz czy w pudełku m
    {
        case 1:     // ma wartość jeden
            cout << " Styczeń ";
        break;
        
         case 2:     // ma wartość jeden
            cout << " Luty ";
        break;  

        case 3:     // ma wartość jeden
            cout << " Marzec ";
        break;
        
        case 4:     // ma wartość jeden
            cout << " Kwiecień ";
        break;
    }
    
    
	return 0;
}

