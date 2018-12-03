#include <iostream>
using namespace std;

int main()
{
   char c;
   char EOF;
   if ( ( c = cin.get() ) != EOF )
   {
      main();
      cout << c << " ";
   }
}
