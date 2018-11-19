#include <iostream>
using namespace std;
int main()
{
   double a;
   double b;
   cout << "Enter sales in dollars (-1 to end): ";
   cin >> a;

   while ( a != -1.0 )
   {
      b = 200.0 + 0.09 * a;
      cout << "Salary is: $" << b;
      cout << "\nEnter sales in dollars (-1 to end): ";
      cin >> a;
   }
}
