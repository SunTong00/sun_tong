#include <iostream>
#include <cmath>
using namespace std;

int number(int);
int main()
{
    int x;
    cout << 2;
    cout << "\t" << 3;
    for(int b=3;b<=10000;b+=2)
        {x=number(b);
        if(x==1)
        cout << "\t" << b;}
}
int number(int c)
{
    int e=0;
    int f=0;
    int y=sqrt(c);
    for (int d=2;d<=y;d++)
        {e=c%d;
        if(e==0)
            {f=0;
            break;}
        else
            f=1;}
return f;
}
