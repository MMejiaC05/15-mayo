#include <iostream>
using namespace std;

int main ()
{
    float a, b, g;
    cout <<"ingrese el angulo 1: ";
    cin >> a;
    cout <<"ingrese el angulo 2: ";
    cin >> b;
    if (a+b<180)
    {
    cout << "faltan: "<<180-a-b << "\n" ;
    }
    else
    {
        cout << "la suma debe ser menor a 180" << "\n";
    }    
return 0;
}


    
