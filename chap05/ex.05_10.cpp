#include <iostream>
using namespace std;

int main()
{
   for (int a=1;a<=5;++a)
   {
   unsigned int b=1;
   for (int number=a;number>=1;--number)
   b*=number;
   cout << "\nresult is: " << b;}
}
