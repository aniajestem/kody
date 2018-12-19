/*
 * BMI.cpp
 * 
 * Copyright 2018  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{   float waga, wzrost, bmi;
    waga = wzrost = 0;
    cout << "podaj wagę" << endl;
    cin >> waga;
    cout << "podaj wzrost"<< endl;
    cin >> wzrost;
    bmi = (waga/ (wzrost*wzrost));
    cout  << "Bmi:" << bmi;
    if (bmi >=30)
    {
        cout << "otyłość";
        }
    if (bmi >=25)
    {
       cout << "nadwaga";
       }
    if (bmi < 18,5)
    {
        cout << "niedowaga";
        }
    if (bmi > 18,5 && bmi < 24,9)
    {
        cout << "norma"
        }
	
	return 0;
}

