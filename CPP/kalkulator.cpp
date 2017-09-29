/*
 * kalkulator.cxx
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)

{
    char znak; // +, -, *, /
    int a, b; 
    
    cout << " podaj znak: " << endl;
    cin >> znak;

    cout << " podaj liczby: ";
    cin >> a >> b;
    
{
    if (znak == '+')
    cout << " Suma: " << a + b;
}
    
    {
    if (znak == '-')
    cout << " Różnica: " << a - b;
}
    
    {
    if (znak == '*')
    cout << " Iloczyn: " << a * b;
}

{
    if (znak == '/')
    cout << " Różnica: " << a / b;
}
    
    
    return 0;
}

