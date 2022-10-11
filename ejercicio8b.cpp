/*---------------------------------------------------
File: ejercicio8b.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: this program shows how to estimate the value of the constant
"e" using a special formula where the user has to enter the desired
precision
---------------------------------------------------*/
#include <iostream> 
using namespace std;

float getFact(int num) { 
        float fact = 1;

        while (num >= 1) {
                fact = fact * num;
                num -= 1;
        }
        return fact;
} 

int main() {       
        int num;
        float e = 1;
        float fact;
        float div = 0;
        int i = 1;
        
        do {
                cout << "Introduce the precision for e: ";
                cin >> num;
        } while (num < 1);
        
        while (i <= num) { 
                fact = getFact(i);
                div = 1/fact;
                e += div;
                i += 1;
        } 
        cout << "The estimated value for e is: " << e << endl;
    return 0;
}