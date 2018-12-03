#include <iostream>
using namespace std;

int main()
{
   int a = 1;
   for ( int b = 3; b <= 15; b += 2 )
     a *= b;
   cout << "the result is: "<< a;
}
