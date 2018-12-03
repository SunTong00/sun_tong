#include <iostream>
using namespace std;

int isperfect(int);
int main()
{
    int d;
    for(int a=2;a<=1000;a++)
      {d=isperfect(a);
      if(d==a)
        {cout << a << "=1";
      for(int e=2;e<=(a/2);e++)
      {int x=a%e;
          if(x==0)
        cout << "+" << e ;}
        cout << "\n";}}


}
int isperfect(int number)
{
    int b=1;
    for(int c=2;c<=(number/2);c++)
        {int y=number%c;
        if(y==0)
        b+=c;}
    return b==number?number:b;
}
