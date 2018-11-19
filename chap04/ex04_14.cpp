#include <iostream>

using namespace std;

int main()
{
   int a;
   double b;
   double c;
   double d;
   double e;

    cout << "Enter account number (or -1 to quit):";
    cin >> a;

  while ( a != -1 )
   {
       cout << "Enter beginning balance:";
       cin >> b;
       cout << "Enter total charges:";
       cin >> c;
       cout << "Enter total credits:";
       cin >> d;
       cout << "Enter credit limit:";
       cin >> e;

      b = b + c - d;
      cout << "New balance is " << b;


      if ( b > e )
         cout << "\nAccount:      " << a
              << "\nCredit limit: " << e
              << "\nBalance:      " << b
              << "\nCredit Limit Exceeded.";

      cout << "\n\nEnter account number (or -1 to quit): ";
      cin >> a;
   }

}



