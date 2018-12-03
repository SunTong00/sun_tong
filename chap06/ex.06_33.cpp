#include <iostream>
#include <cstdlib>
using namespace std;

int flip();
int main()
{
    int headnumber=0;
    int tailnumber=0;
    for(int a=1;a<=100;a++)
        {if(flip()==0)
            {tailnumber++;
             cout << "\ntail";}
        else
            {headnumber++;
            cout << "\nhead";}}
   cout << "the number of tail: " << tailnumber
        << "the number of head: " << headnumber;

}
int flip()
{
    return rand()%2;
}
