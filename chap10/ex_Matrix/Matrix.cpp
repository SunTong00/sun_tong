#include <iomanip>
#include "Matrix.h"
using namespace std;

ostream &operator<<( ostream &output, const Matrix &Mnumber )
{
    output << Mnumber.number1 << "\t" << Mnumber.number2
           << "\n" << Mnumber.number3 << "\t" << Mnumber.number4;
    return output;
}

istream &operator>>( istream &input, Matrix &Mnumber )
{
    input >> setw(1)>> Mnumber.number1;

    input >> setw(1)>> Mnumber.number2;

    input >> setw(1)>> Mnumber.number3;

    input >> setw(1)>> Mnumber.number4;
    return input;
}
