#include <iostream>
using namespace std;

int main()
{
    int a,b,d;
    cout << "\nEnter a number: ";
    cin >> a;
    cout << "\nEnter a number: ";
    cin >>b;
    int e=b;
    for (int c=1;c<=(a-1);++c)
    {
        cout << "\nEnter a number: ";
        cin >>b;
        d=e-b;
        if(d<=0)
            e=e;
        else
            e=b;


    }
    cout << "\nThe minimum is: " << e;
}
