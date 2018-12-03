#include <iostream>
using namespace std;

int main()
{
   int size;
   do
   {
      cout << "Enter a number(1-19): \n";
      cin >> size;
   } while ( ( size < 1 ) || ( size > 19 ) || ( ( size % 2 ) != 1 ) );
   for ( int a = 1; a <= size - 2; a += 2 )
   {
      for ( int b = ( size - a ) / 2; b > 0; b-- )
         cout << " ";
      for ( int c = 1; c <= a; c++ )
         cout << "*";
      cout << "\n";
   }
   for ( int a = size; a >= 0; a -= 2 )
   {
      for ( int b = ( size - a ) / 2; b > 0; b-- )
         cout << " ";
      for ( int c = 1; c <= a; c++ )
         cout << "*";
      cout << "\n";
   }
   cout << endl;
}
