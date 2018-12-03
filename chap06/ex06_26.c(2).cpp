#include <iostream>
using namespace std;

double fahrenheit(double);
int main()
{
    for(double a=0;a<=100;++a)
    fahrenheit(a);
}
double fahrenheit(double b)
{
    double c;
    c=b*1.8+32;
    cout << "\n" << c;
    return 0;
}
