#ifndef TCOMPLEX_H
#define TCOMPLEX_H
#include <iostream>

class TComplex
{
public:
    TComplex(double real, double imaginary);
    TComplex(double real);
    TComplex();
    void setReal(double real);
    void setImaginary(double imaginary);

    void operator= (int);

    bool operator!= (TComplex);
    bool operator> (TComplex);
    bool operator< (TComplex);
    bool operator== (TComplex);
    TComplex operator* (TComplex);
    TComplex operator* (double);
    TComplex operator- (TComplex);
    TComplex operator/ (TComplex);
    TComplex operator+ (TComplex);
    friend std::ostream& operator<<(std::ostream& os, const TComplex& value);
    friend std::istream& operator>>(std::istream& in, TComplex& value);
    friend TComplex sqrt(const TComplex&);
private:
    double real;
    double imaginary;
};

#endif // TCOMPLEX_H
