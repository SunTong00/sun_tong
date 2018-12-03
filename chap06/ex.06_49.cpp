#include <iostream>
using namespace std;

double circleArea(double);
int main()
{
    double r;
    cin >> r;
    cout << "the area is: " << circleArea(r) <<endl;
}
double circleArea(double a)
{
    double b;
    b=3.14*a*a;
    return b;
}
