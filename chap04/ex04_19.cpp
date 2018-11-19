#include <iostream>
using namespace std;

int main()
{
  double a,b,number,largest,c;
  double counter=0;
  cout << "Enter a number: ";
  cin >> a;
  number=a;
  largest=a;
  while (counter<=9)
   {
    b=number-largest;
  if (b>=0)
  {
    c=largest;
    largest=number;
  }
  else
  {
      if(c<=number)
      {
    c=number;
      }
    largest=largest;
  }
  cout << "Enter the next number: ";
  cin >> number;
  counter+=1;
   }
   cout << "The largest number is: " << largest <<endl;
   cout << "The second largest number is: " << c;
}
