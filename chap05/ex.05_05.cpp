#include <iostream>
using namespace std;

int main()
{
    int a,e;
    int b=0;
    cout << "Enter the number: ";
    cin >> e;
    for (int f=1;f<=e;f++)
    {
        cin >> a;
        b+=a;
    }
    cout << "\nthe result is: " << b;
}
