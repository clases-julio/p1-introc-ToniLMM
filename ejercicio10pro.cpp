/*---------------------------------------------------
File: ejercicio10.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: This program shows how to print a rhombus depending on the number
of rows that the user puts in the input (from top to bottom), it should be an odd number 
between 1 and 19
---------------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, j, k, n;

    cout << "How many rows you want (number between 1 and 19 and odd)? ";
    cin >> n;

    while(n < 1 || n > 19) {
        cout << "Error, the number must be between 1 and 19: ";
        cin >> n;
    }
    while(n % 2 == 0) { 
        cout << "Error, the number must be odd: ";
        cin >> n;
    }

    n = n + 1;
    n = n / 2;
    for(i = 1; n - 1 >= i; i++) {
        for(j = n; j>= i; j--) {
            cout << " ";
        }
        for(k = 1; 2 * i - 1 >= k; k++){
            cout << "*";
                
        }
        cout << endl;
        }
    for(i = 1; n >= i; i++) {
        for(j = 1; j <= i; j++) {
            cout << " ";
        }
        for(k = 2 * n -1; 2 * i - 1 <= k; k--) {
            cout << "*";
        }
        cout << endl;
        }
    }
