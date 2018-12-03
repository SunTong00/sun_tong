#include <iostream>
using namespace std;

double celsius(double);
int main()
{
    double a;
    cout << "Enter the number";
    cin >> a;
    celsius(a);
}
double celsius(double b)
{
    double c;
    c=(b-32)/1.8;
    cout << c;
    return 0;
}
