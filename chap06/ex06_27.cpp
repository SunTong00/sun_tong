#include <iostream>
using namespace std;

double minimum(double,double,double);
int main()
{
    double a,b,c,d;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    d=minimum(a,b,c);
    cout << "\nThe Minimum number is: " << d;
}
double minimum(double a,double b, double c)
{
    double e;
    e=(a<=b?a:b);
    e=(e<=c?e:c);
    return e;
}
