#include <iostream>
using namespace std;

int number (int);
int main()
{
    long double x=0;
    int a;
    cout << "Enter the number: ";
    cin >> a;
    for (double i=1;i<=a;i++)
     {int b=number (i);
     x+=b*(4/(2*i-1));}
     cout << "x=: " << x << endl;
}
int number (int c)
{
    int e=-1;
    for (int d=1;d<=c;++d)
     e=e*(-1);
    return e;
}
