#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,d,e,f,g;
    a=fabs(7.5);
    b=floor(7.5);
    c=fabs(0.0);
    d=ceil(0.0);
    e=fabs(-6.4);
    f=ceil(-6.4);
    g=ceil(-fabs(-8+floor(-5.5)));
    cout << "x=fabs(7.5)= " << a
         << "\nx=floor(7.5)= " << b
         << "\nx=fabs(0.0)= " << c
         << "\nx=ceil(0.0)= " << d
         << "\nx=fabs(-6.4)= " << e
         << "\nx=ceil(-fabs(-8+floor(-5.5)))= " << f;
}
