#include <iostream>
using namespace std;

void square( int side)
{
   char fillCharacter;
   cout << "Enter the fillCharacter: ";
   cin >> fillCharacter;
   for ( int a = 1; a <= side; a++ )
   {
     for ( int b = 1; b <= side; b++ )
     cout << fillCharacter;

      cout << "\n";
   }
}

int main()
{
   int side;
   cout << "Enter side: ";
   cin >> side;
   square( side );
}
