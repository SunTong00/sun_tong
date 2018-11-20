#include <iostream>
#include <cmath>
using namespace std;

int integerPower (int base,int exponent)
{
    int e;
    for (int a=1;exponent>=1;--exponent)
        {a*=base;
        e=a;}
        return e;
}
int main ()
{
    int b,c;
    cout << "Enter the base number: ";
    cin >> b;
    cout << "Enter the exponent number: ";
    cin >> c;
    cout << "result is: " << integerPower (b,c);
}
