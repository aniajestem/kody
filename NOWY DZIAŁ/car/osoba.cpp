/*
 * osoba.cpp
 * 
 * 
 */


#include <iostream>
#include <cstdlib>
#include "osoba.h"

using namespace std;

Osoba:: Osoba() {
    imie=nazwisko=plec="";
    wiek=0;
}

Osoba::Osoba(string im, string nz, string pl, int w) {
    imie = im;
    nazwisko = nz;
    plec= pl;
    wiek = w;
}
