#include <iostream>
using namespace std;

int main ()
{
    float c1, c2, p1, p2, lab, pro;
    float promedio;

    cout << "ingrese sus notas:";
    cin >> c1;
    cin >> c2;
    cin >> p1;
    cin >> p2;
    cin >> lab;
    cin >> pro;
    
    promedio = ((c1*0.1) + (c2*0.1) + (p1*0.15) + (p2*0.20) + (lab*0.2) + (pro*0.25));
    
    cout <<"su promedio es " <<promedio << endl;
    
    if (promedio >=0)
    {
        cout << "usted paso la materia";
    }

    else cout << "usted reprobo";


 return 0;
}