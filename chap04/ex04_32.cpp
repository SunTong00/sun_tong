#include <iostream>
using namespace std;

int main()
{
    double a,b,c,d,e,f;
    cout << "Enter three numbers: ";
    cin >> a;
    cin >> b;
    cin >> c;
    d=(a+b)-c;
    e=(a+c)-b;
    f=(b+c)-a;
    if (d<=0)
        cout << "wrong!" <<endl;
    else if (e<=0)
        cout << "wrong!" <<endl;
    else if (f<=0)
        cout << "wrong!" <<endl;
    else
        cout << "right!" <<endl;
}
