/*
 * zadanie5.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)


{
	int n=0;
    int suma=0;
   
    cout<<"Podaj liczbe: ";
    cin>>a;
   
    while(1)
    
    {
   
        while(a>0)
        
        {
            suma+=a%10;
            a/=10;
        }
       
        cout<<"Suma cyfr jest równa: "<<suma<<endl;
       
        if(suma>0 && suma<10)
        
        {
            break;
        }
        
        else
        
        {
            a+=suma;
            suma=0;
        }
    }
   
    return 0;
}

	
	
