/*
 * formatowanie.cpp
 * 
 * 
 */


# include <iostream>
# include <iomanip>
# include <cstdio>
# include <math.h>

using namespace std;

int main(int argc, char **argv)
{
    int lint = 100;
    float lrze = 12.789;
    
    //ios_base: fmtflags
    //fx |= cout.hex;
    //fx |= cout.showbase;
    
    //cout.flags(fx);
    cout << oct << showbase;
    cout << lint << endl;
    

	return 0;
}

