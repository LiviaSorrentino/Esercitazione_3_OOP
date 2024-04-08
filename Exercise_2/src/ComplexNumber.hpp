#include <iostream>
#include <cmath>
using namespace std;

struct ComplexNumber
{
    double real;
    double im;
    ComplexNumber() = default;

    ComplexNumber(double a, double b)
    {
        real = a;
        im= b;
    }


};

ostream& operator << (ostream& os, const ComplexNumber& c )
{
    if (c.im>= 0)
        os<< c.real<<"+"<<c.im<<"i";
    else
        os<<c.real<<"-"<<abs(c.im)<<"i";
    return os;
}

ComplexNumber operator+(const ComplexNumber& c1,const ComplexNumber& c2)
{
    double rsum = c1.real + c2.real;
    double imsum = c1.im + c2.im;
    return ComplexNumber(rsum,imsum);
}


bool operator==(const ComplexNumber& c1,const ComplexNumber& c2)
{
    double toll = 2.2e-12;
    double distr = abs(c1.real-c2.real);
    double disti = abs(c1.im-c2.im);
    if (distr<toll && disti<toll)
        return true;
    else
        return false;

}

ComplexNumber conjugate(const ComplexNumber& c)
{   if (c.im==0)
        return(ComplexNumber(c.real,c.im));
    else
    return(ComplexNumber(c.real,-c.im));
}
