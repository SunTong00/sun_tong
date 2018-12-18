#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    array<bool,6>alphabet;
    cout << alphabet[6];

    array<float,4>grades;
    cin >> grades[4];

    array<int,5>values={8,8,8,8,8};

    array<double,100>temperatures;
    int c;
    for(int a=0;a<=99;a++)
      {double b=0;
        b+=temperatures[a];
        c=b;}
    cout << c <<endl;

    array<double,11>a;
    array<double,34>b;
    for(size_t i=0;i<a.size();++i)
        b[i]=a[i];

    array<double,99>w;
    double d,e;
    for(size_t j=0;j<w.size();++j)
       {double m=w[0];
        d=(m-w[j]<=0?m:w[j]);
        e=(m-w[j]>=0?m:w[j]);}
    cout << "MAX is: " << e <<endl
         << "MIN is: " << d <<endl;
}
