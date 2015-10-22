#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <math.h>

using namespace std;



class calculator
{
private:

public:
    //foundation methods
    template<typename T>
    static T summa(const T a,
                   const T b);
    template<typename T>
    static T differens(const T a,
                       const T b);
    template<typename T>
    static T multiplication(const T a,
                            const T b);

    template<typename T>
    static T segmentation(const T a,
                          const T b);

    double ixtent(const double foundation,
                  const double deegreePointer);
    //expressions methods
        //trigonometric funcsions
    static double sinus(const double radians);
    static double cosinus(const double radians);
    static double tangens(const double radians);
    static double cotangens(const double radians);
    static double arcSinus(const double arg);
    static double arcCosinus(const double arg);
    static double arcTangens(const double arg);
    static double arcCotangens(const double arg);

    static long long int factorial(const long long int arg);
    static double naturalLogorifm(const double arg);
    static double decimalLogorifm(const double arg);

    static double exponent();
    template<typename T>
    static double stdForm(const T arg);
    template<typename T>
    static long long int mode(const T arg);
};



#endif // CALCULATOR_H
