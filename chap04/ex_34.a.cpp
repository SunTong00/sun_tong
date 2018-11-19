#include <iostream>
using namespace std;

int main()
{
   unsigned int a;
   unsigned int b=1;
   cout << "Enter a number: ";
   cin >> a;
   for (int number=a;number>=1;--number)
   b*=number;
   cout << "\nresult is: " << b;
}
