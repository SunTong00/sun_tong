#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

class Matrix
{
    public:
        friend std::ostream &operator<<( std::ostream &, const Matrix & );
        friend std::istream &operator>>( std::istream &, Matrix & );
    private:
        std::string number1;
        std::string number2;
        std::string number3;
        std::string number4;
};

#endif // MATRIX_H
