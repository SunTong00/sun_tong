#include <iostream>
using namespace std;

int main()
{
    double r,d,c,s;
    cout << "Enter the radius: ";
    cin >> r;
    d=2*r;
    c=2*r*3.14159;
    s=3.14159*r*r;
    cout << "diameter is: " << d
         << "\nperimeter is: "<< c
         << "\narea is: " << s;
}
