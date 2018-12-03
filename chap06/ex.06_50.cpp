#include <iostream>
using namespace std;
int tripleByValue( int );
void tripleByReference( int & );
int main()
{
   int count;
   cout << "Enter a value for count: ";
   cin >> count;
   cout << "tripleByValue() is: "<< tripleByValue(count) <<endl;
   tripleByReference( count );
   cout << "tripleByReference() is: " << count << endl;
}
int tripleByValue( int value )
{
   return value *= 3;
}
void tripleByReference( int &valueRef )
{
   valueRef *= 3;
}
