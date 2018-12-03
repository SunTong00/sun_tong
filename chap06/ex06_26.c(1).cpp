#include <iostream>
using namespace std;

double celsius(double);
int main()
{
  for(double a=32;a<=212;++a)
    celsius(a);
}
double celsius(double b)
{
    double c;
    c=(b-32)/1.8;
    cout << "\n" << c;
    return 0;
}
