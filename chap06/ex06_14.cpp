#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,a,b,c,d;
    cin >> x;
    cout << "X= " << x;
    a=floor(x+0.5);
    b=floor(x*10+0.5)/10;
    c=floor(x*100+0.5)/100;
    d=floor(x*1000+0.5)/1000;
    cout << "\nroundToInteger number=  " << a;
    cout << "\nroundToTenths number= " << b;
    cout << "\nroundToHundredths number= " << c;
    cout << "\nroundToThousandths number= " << d;

}
