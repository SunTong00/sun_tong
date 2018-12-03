#include <iostream>
using namespace std;

int main()
{
   for ( int a = 1; a <= 5; a++ )
   {
      for ( int b = 1; b <= 5 - a; b++ )
         cout << " ";
      for ( int c = 1; c <= 2 * a - 1; c++ )
         cout << "*";
      cout << "\n";
   }
   for ( int a = 4; a >= 1; a-- )
   {
      for ( int b = 1; b <= 5 - a; b++ )
         cout << " ";
      for ( int c = 1; c <= 2 *a - 1; c++ )
         cout << "*";
      cout << "\n";
   }
   cout << endl;
}
