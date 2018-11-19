#include <iostream>
using namespace std;

int main()
{
    long double a,b,c,d;
    long double e=0;
    long double f=0;
    cout << "Enter miles driven (-1 to quit): " ;
    cin >> a;
    cout << "Enter gallons used: " ;
    cin >> b;
    while (a!=-1)
    {
        c = a/b;
        e=a+e;
        f=b+f;
        d = e/f;

        cout << "MPG this trip: " << c <<endl;
        cout << "Total MPG: "  << d <<endl;
        cout << "Enter miles driven (-1 to quit): " ;
        cin >> a;
        if (a==-1)
            break;
        cout << "Enter gallons used: " ;
        cin >> b;

    }
}
