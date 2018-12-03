#include <iostream>
using namespace std;

int main()
{
   int a = 0;
   long int b;
   long int c;
   cout << "Side 1\tSide 2\tSide3" << endl;
   for ( long side1 = 1; side1 <= 500; side1++ )
   {
      for ( long side2 = side1; side2 <= 500; side2++ )
      {
         for ( long d = side2; d <= 500; d++ )
         {
            b = d * d;
            c = side1 * side1 + side2 * side2;
            if ( b == c )
            {
               cout << side1 << '\t' << side2 << '\t'
                  << d << '\n';
               a++;
            }
         }
      }
   }
   cout << "A total of " << a << " triples were found." << endl;
}
