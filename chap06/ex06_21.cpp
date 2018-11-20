#include <iostream>
#include <cmath>
using namespace std;

int iseven (int number)
{
    int a;
    a=number%2;
    return a;
}
int main()
{
    int b,d;
    cout << "Enter the number: ";
    cin >> b;
    while (b!=-1)
    {
        d=iseven(b);
        if(d==0)
        cout << "\nTrue";
        else
        cout << "\nFalse";
        cout << "\nEnter the number: ";
        cin >> b;
    }
}
