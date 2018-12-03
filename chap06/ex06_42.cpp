#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double distance( double, double, double, double );
int main()
{
   double x1;
   double y1;
   double x2;
   double y2;
   cout << "Enter the point: ";
   cin >> x1 >> y1;
   cin >> x2 >> y2;
   cout << fixed << "Distance between ("  << x1<< ", " << y1 << ") and (" << x2 << ", " << y2 << ") is "<< distance( x1, y1, x2, y2 ) << endl;
}
double distance( double a1, double b1, double a2, double b2 )
{
   return sqrt((a1 - a2)*(a1-a2) + ( b1 - b2)*(b1-b2));
}
