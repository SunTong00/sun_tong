#include <iostream>
using namespace std;

int main()
{
    double a,b,c,d,e,f;
    while ((a==0)&&(b==0)&&(c==0))
    {cout << "Enter three numbers: ";
    cin >> a;
    cin >> b;
    cin >> c;}
    d=((a*a)+(b*b))-(c*c);
    e=((a*a)+(c*c))-(b*b);
    f=((b*b)+(c*c))-(a*a);
    if (d==0)
        cout << "right!" <<endl;
    else if (e==0)
        cout << "right!" <<endl;
    else if (f==0)
        cout << "right!" <<endl;
    else
        cout << "wrong!" <<endl;
}
