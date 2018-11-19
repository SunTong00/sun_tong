#include <iostream>
using namespace std;

int main()
{
  double a,b,number,largest;
  double counter=0;
  cout << "Enter a number: ";
  cin >> a;
  number=a;
  largest=a;
  while (counter<=9)
   {

    b=number-largest;
  if (b>=0)
    largest=number;
  else
    largest=largest;
  cout << "Enter the next number: ";
  cin >> number;
  counter+=1;
   }
   cout << "The largest number is: " << largest;
}
