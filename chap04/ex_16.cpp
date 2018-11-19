#include <iostream>
using namespace std;

int main()
{
  double a,b,c;
  cout << "Enter hours worked (-1 to end): ";
  cin >> a;
  cout << "Enter hourly rate of the employee ($0.00): ";
  cin >> b;
  while (a!=-1)
  {
      if(a<=40)
        c=a*b;
      else
        c=(40*b)+((1.5*b)*(a-40));
      cout << "Salary is " << c <<endl;
      cout << "Enter hours worked (-1 to end): ";
      cin >> a;
      if(a==-1)
        break;
      cout << "Enter hourly rate of the employee ($0.00): " << b <<endl;
  }
}
