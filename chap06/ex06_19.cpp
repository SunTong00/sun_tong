#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse (double a,double b)
{
    double c;
    c=sqrt ((a*a)+(b*b));
    return c;
}
int main()
{
    double d,e,f,g,x,y;
    cout << "\nEnter the first side of the first triangle: ";
    cin >> d;
    cout << "\nEnter the second side of the first triangle: ";
    cin >> e;
    cout << "\nEnter the first side of the second triangle: ";
    cin >> f;
    cout << "\nEnter the second side of the second triangle: ";
    cin >> g;
    cout << "\nEnter the first side of the third triangle: ";
    cin >> x;
    cout << "\nEnter the second side of the third triangle: ";
    cin >> y;
    cout << "\nthe third side of the first triangle is: " << hypotenuse(d,e)
         << "\nthe third side of the second triangle is: " << hypotenuse(f,g)
         << "\nthe third side of the third triangle is: " << hypotenuse(x,y);
}
