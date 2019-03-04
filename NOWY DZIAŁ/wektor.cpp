/*
 * wektor.cpp
 *
 * 
 */


#include <iostream>
#include <fstream>

using namespace std;

struct wektor {
  punkt pp;
  punkt pk;
};

struct punkt {
    int x;
    int y;

};


punkt wylicz_srodek(wektor){
    punkt ps;
    
    return ps;
    }
    
wektor getWektor(){
    wektor wl
    cout << "Podaj x,y punktu pierwszego:";
    cin >> w1.pp.x;
    cin >> w1.pp.y;
    cout << "Podaj x,y drugiego punktu:";
    cin >> w1.pk.x;
    cin >> w1.pk.y;
    
    
    
    }

int main(int argc, char **argv)
{
    wektor w;
    w = getWektor();
    cout << w.pp.x << " " << w.pp.y << endl;

	return 0;
}

