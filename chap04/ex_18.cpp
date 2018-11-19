#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a;
    cout << "N"
         << "\t10*N"
         << "\t100*N"
         << "\t1000*N" <<endl;

         while (a<=5)
         {
             b=10*a;
             c=100*a;
             d=1000*a;
             cout << a
                  << "\t" <<b
                  << "\t" <<c
                  << "\t" <<d <<endl;
           a+=1;
         }
}

