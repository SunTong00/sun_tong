#include <iostream>
using namespace std;

int number(int);
int main()
{
   int c;
   cout << "Enter a number";
   cin >> c;
   number(c);
}
int integerPower (int exponent)
{
    int e=1;
    for (int f=1;exponent>=1;--exponent)
        {f*=10;
        e=f;}
        return e;
}
int number(int a)
{
    int b=0;
    for(int n=1;b<=a;++n)
    {
        int x,y;
        y=n-1;
        x=integerPower(y);
        b=(a/x)%10;
        if(b==0)
            break;
        cout << b;
    }
return 0;
}
