#include "src/ComplexNumber.hpp"
using namespace std;


int main()
{   ComplexNumber c1 = ComplexNumber(2.3,0); //esempio con due numeri complessi
    ComplexNumber c2 = ComplexNumber(1,-4.1);

    cout<<"il primo numero complesso è " <<c1<<endl;
    cout<<"il secondo numero complesso è " <<c2<<endl;

    cout <<"la somma dei due numeri complessi è: " << c1 + c2 << endl;

    cout <<"il coniugato del primo numero complesso è"<<conjugate(c1)<<endl;
    cout <<"il coniugato del secondo numero complesso è"<<conjugate(c2)<<endl;

    ComplexNumber c3 = ComplexNumber(2.3,0);
    ComplexNumber c4 = ComplexNumber(2.3,0);

    if (c3 == c4)
        cout <<c3 <<" e "<<c4<<" sono uguali"<<endl;
    else
        cout <<c3 <<" e "<<c4<<" sono diversi"<<endl;

    if (c1 == c2)
        cout <<c1<<" e "<<c2<<" sono uguali"<<endl;
    else
        cout <<c1 <<" e "<<c2<<" sono diversi"<<endl;

   return 0;
}
