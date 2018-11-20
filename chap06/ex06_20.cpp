#include <iostream>
#include <cmath>
using namespace std;

int multiole (int a,int b)
{
    int c,f;
    c=b%a;
    if(c==0)
        f=1;
    else
        f=0;
        return f;
}
int main()
{
    int d,e,x;
    cout << "\nEnter the first number: ";
    cin >> d;
    cout << "\nEnter the second number: ";
    cin >> e;
    x=multiole(d,e);
    if(x=1)
        cout << "\ntrue";
    else
        cout << "\nfalse";
}
