/*
 * trojkat.cpp
 * 
 * Copyright 2017  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.se for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
 /*
  * * trojkat.cpp
  * program pobiera 3 boki trojkata
  * sprawdza czy da sie z nich zbudowac trojkat
  * oblicza obwod i pole (ze wzoru Herona)
  * drukuje na ekranie odpowiedni komunikat
  */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)

{ //float p;
  //float pole;
 //sqrt (); // pierwiastek

 int a, b, c;
 int obwod = 0;
 float p = 0;
 
    a = b = c = 0;
    cout << "podaj trzy liczby: ";
    cin >> a >> b >> c;
    
    if (a + b > c && a + c > b && b + c > a)
    
    cout << " Można zbudować trojkąt ";
    
    obwod = a + b + c;
    cout << "obwód: " << obwod << endl;
    p = 0.5 * obwod;
    cout << "p = " << p << endl;
    cout << "pole: " << sqrt  (p * (p-a) * (p-b) * (p-c)) endl;




	
	return 0;
}

