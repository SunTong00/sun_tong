#include <iostream>
using namespace std;

double fahrenheit(double);
int main()
{
    double a;
    cin >> a;
    fahrenheit(a);
}
double fahrenheit(double b)
{
    double c;
    c=b*1.8+32;
    cout << c;
    return 0;
}
