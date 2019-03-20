/*
 * stos.cpp
 * metoda która wstawia warotść na stos to push
 */


#include <iostream>


using namespace std;

int rozmiar = 5;
int dane[3];
int sp = 0;


void empty(){
    if (sp ==0){
     cout << "Stos jest pusty"  << endl;
    }else{
        count << "Stos nie jest pusty ";
        }
    
    
    }
void pop(){
    if (sp-1 < 0){
        cout << "Stos pusty!";
    } else {
        cout<< "POP: " << dane[sp -1];
        sp--;
        }
}
void push(){
    if (sp >3) {
        cout << "Stos pełny!"<< endl;
        
    } else {
        cout << "Podaj wartość:";
        cin >> dane[sp];
        sp ++;
        
     }
    
    
}

int main(int argc, char **argv)
{   
	push();
    cout << sp<< endl;
    push();
    cout << sp<< endl;
    push();
    cout << sp<< endl;
    push();
    
	return 0;
}

