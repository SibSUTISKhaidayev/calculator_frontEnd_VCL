#include "calculator.h"


template<typename T>
T calculator::summa(const T a, const T b)
{
    return a + b;
}

template<typename T>
T calculator::differens(T a, T b)
{
    return a - b;
}

template<typename T>
T calculator::multiplication(const T a, const T b)
{
    return a * b;
}

template<typename T>
T calculator::segmentation(const T a, const T b)
{
    return (b != 0) ? (a / b) : INFINITY;
}

double calculator::ixtent(const double foundation, const double deegreePointer)
{
    return pow(foundation, deegreePointer);
}

double calculator::sinus(const double radians)
{
    return sin(radians);
}

double calculator::cosinus(const double radians)
{
    return cos(radians);
}

double calculator::tangens(const double radians)
{
    return tan(radians);
}

double calculator::cotangens(const double radians)
{
    return 1/tan(radians);
}



double calculator::arcSinus(const double arg)
{
    return asin(arg);
}

double calculator::arcCosinus(const double arg)
{
    return acos(arg);
}

double calculator::arcTangens(const double arg)
{
    return atan(arg);
}

double calculator::arcCotangens(const double arg)
{
    a = atan(arg);
    a = M_PI_2 - a;


    return
}

