#include <iostream>
using namespace std;

int main()
{
   int number = 1;
   int a;
   int b = 1;
   int x;
   double e = 1.0;
   double f = 1.0;
   cout << "Enter the number: ";
   cin >> x;
   cout << "Enter the length of e: ";
   cin >> a;
   while ( number < a )
   {
      f *= x;
      b *= number;
      e += f / b;
      number++;
   }
   cout << "e to the " << x << " is " << e << endl;
}
