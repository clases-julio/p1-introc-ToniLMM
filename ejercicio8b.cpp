/*---------------------------------------------------
File: ejercicio8b.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: 
---------------------------------------------------*/
#include <iostream>
#include <iomanip>
int main()
{
   const double nE = 2.71828182845904525356;
    double e1 = 1.0, e2 = 1.0;
    double margen = 0.00000000001;
    double diferencia1 = nE - e1;
    double diferencia2 = nE - e2;
    double factorial = 1.0;
    int k = 1;
    int n = 1;
    while (margen < diferencia1 || margen < diferencia2)

    {
        e2 = e1;
        for (int j = n; j <= k; j++)

            factorial = factorial * j;
        k++;
        n++;
        e1 += (1 / factorial);
        diferencia1 = nE - e1;
        diferencia2 = nE - e2;

    }
    std::cout << std::setprecision(20) << std::fixed;
    std::cout << "\nValor de e = " << e1 << std::endl;
    return 0;

}
