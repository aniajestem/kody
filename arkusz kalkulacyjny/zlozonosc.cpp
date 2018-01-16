/*
 * zadanie1.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a = 0;
    cout << "Podaj a: " << endl;
    cin >> a;
    
    int i = 1;
    while (i < a)
    {
        cout << i << ",";
        i += 2;
    }
    return 0;
}
