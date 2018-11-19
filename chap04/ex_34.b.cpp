#include <iostream>
using namespace std;

int main()
{
   unsigned int c;
   unsigned int b=1;
   unsigned int a=0;
   double f;
   cout << "Enter a number: ";
   cin >> c;
   for (double e=0;a<=(c-1);++a)
   {for (int number=1;a>=1;--a)
   {number*=a;
   b=number;}
   e+=(1/b);
   f=e;}
   cout << "\nresult is: " << f;
}
