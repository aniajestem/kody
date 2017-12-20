/*
 * sort_babel.cpp
 * 
 * Copyright 2017  <>
 */


#include <iostream>
using namespace std;

void wypelnij (int t[], int n, int m) {
    srand (time (NULL));
    for (int i = 0; i < n; i++)
    {
        t [i] = 1 + rand () % m; // losowanie liczb z zaklresu od <0;m>
        }
}
void drukuj (int t [], int n)
{
    srand (time (NULL));
    for (int i = 0; i < n; i++)
    {
        cout << t [i] << " " ;
    
        }
}

void zamien ( int &a, int &b) { // przekazywane nie przez kopie, ale przez wartość, żeby potem zamienic elementy, &- przekazywanie przez referencje, bez - przez kopie
    tmp = a;
    a=b;
    b = tmp;
    
}

void sort_babel ( int t [], int n)
{
    for ( int i = 0; i <n ; i++)
    {
        for (int j = i + 1; j < n - i ; j++)
        }
    
}

int main(int argc, char **argv)
{
	const int ile = 10;
    int tab [ile];
    wypelnij (tab, ile, 20);
    drukuj (tab, ile);
    sort_wyb (tab, ile);
    drukuj (tab,ile);
    
	return 0;
}

