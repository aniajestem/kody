#include <iostream>
#include <cstdlib>

#ifndef __CAR_H_
#define __CAR_H_

using namespace std;

class Car{
    private:
        string marka;
        string model;
        int rocznik;
        int przebieg;
    public:
        Car();
        Car(string, string, int, int);
        void dodaj();
        void dane();
};
#endif
