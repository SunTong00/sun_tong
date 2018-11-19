#include <iostream>
using namespace std;

int main()
{
   int number = 0;
   int a,b,c,d;
   int e = 0;
   while ( e != 5 )
   {
      cout << "Enter a 5-digit number: ";
      cin >> number;
      if ( number < 100000 )
      {
         if ( number > 9999 )
            e = 5;
         else
            cout << "Number must be 5 digits" << endl;
      }
      else
         cout << "Number must be 5 digits" << endl;
   }


   a = number / 10000;
   b = number % 10000 / 1000;
   c = number % 10000 % 1000 % 100 / 10;
   d = number % 10000 % 1000 % 100 % 10;


   if ( a == d )
   {
      if ( b == c )
         cout << number << " is a right number!" << endl;
      else
         cout << number << " is not a right number." << endl;
   }
   else
      cout << number << " is not a right number." << endl;
}

