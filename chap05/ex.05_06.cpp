#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int c=0;
    for (int d=1;d>=0;d++)
    {
        cout << "\nEnter a number: ";
        cin >> a;
        if (a==9999)
            break;
        c+=a;
        b=c/d;
    }
    cout << "\nthe result is: " << b;
}
