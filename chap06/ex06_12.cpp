#include <iostream>
#include <cmath>
using namespace std;

double calculateCharges (double hours)
{
    double charge;
    if(hours<=3)
        charge=2;
    else
        charge=2+(hours-3)*0.5;
    return (charge>10?10:charge);
}
int main()
{
   double a,b,c,d,e;
   cout << "\nEnter the first car's hours: ";
   cin >> a;
   cout << "\nEnter the second car's hours: ";
   cin >> b;
   cout << "\nEnter the third car's hours: ";
   cin >> c;
   d=a+b+c;
   e=calculateCharges(a)+calculateCharges(b)+calculateCharges(c);
   cout << "\nCar" << "\tHours" << "\tCharges"
        << "\n1" << "\t" << a << "\t" <<calculateCharges(a)
        << "\n2" << "\t" << b << "\t" <<calculateCharges(b)
        << "\n3" << "\t" << c << "\t" <<calculateCharges(c)
        << "\nTOTAL" << "\t" << d << "\t" << e;
}
