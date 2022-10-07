/*---------------------------------------------------
File: ejercicio8c.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: This program shows how to calculate e raised to x with different
numbers of precision given by the user
---------------------------------------------------*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float exponencial;
    int i=0, x, n, j;
    double factorial = 1;

    cout << "Write the value of x: ";
    cin >> x;

    cout << "Write the number of terms of the sum: ";
    cin >> n;

    while(i <= n){
        j=1;
        factorial = 1;
        while(j <= i){
            factorial = factorial*j;
            j = j+1;
        }
        exponencial = exponencial + pow(x, i) / factorial;
        i = i+1;

    }

    cout << "The value of e raised to x is: " << exponencial << endl;

    return 0;

}