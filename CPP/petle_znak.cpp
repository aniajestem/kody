/*
 * petle_switch.cpp

 *  
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    char zn = 't';
    
    
    while (zn == 't' || zn == 'T' || zn == 'n' || zn == 'N' )
    {
    cout << "Podaj znak: " << endl;
    cin >> zn;
    };
    
    //while (true)
    //{
        //cout << "Podaj znak: " ;
        //cin >> zn
        //switch (zn) 
        //{
            //case 't' :
            //case 'T' :
            //case 'n' :
            //case "N' :
                //cout << "Poprawny" ;
                //break;
                //default:
                    //cout << "Inny";
                    //break;
        //}
    //}
    
	return 0;
}

