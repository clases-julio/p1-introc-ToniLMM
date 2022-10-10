/*---------------------------------------------------
File: ejercicio8b.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: this program shows how to estimate the value of the constant
"e" using a special formula where the user has to enter the desired
precision
---------------------------------------------------*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float exponencial;
    int i=0, n, numerador=1, denominador=1;
    float e;
    double factorial = 1;

    cout << "Write the number of terms of the sum: ";
    cin >> n;

    while(i < n){
        i++;
        factorial *= i;
    }
    
    e = (numerador / denominador);
    cout << "The value of e is: " << e << endl;

    return 0;

}