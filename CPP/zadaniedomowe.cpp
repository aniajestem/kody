/*
 * zadaniedomowe.cpp
 * 

 */


#include <iostream>


int main(int argc, char **argv)
int m;
int n;

cout << "podaj m (10-99)" << endl;
cin >>> m;
cout << "podaj n (10-99) (n > m)" << endl;
cin >> n;

while (m>n || m<10 ||m > 99 || n<10 || n>99)

{
    cout << "podaj m (10-99)" << endl;
    cin >>> m;
    cout << "podaj n (10-99) (n > m)" << endl;
    cin >> n;
}
 {   
  while )m<=n)
        {
        if (m% 3 == 0)
            {
                 cout <<m < endl;
            }
            
            else if ((m+1) % 3 == 0)
            
            {
                cout < m+1 << endl;
            }
            {
            else if ((m+2) % 3 == 0)
            {
                cout < m+2 << endl;
        }
        
        m=m+3;
    }
	return 0;
}

