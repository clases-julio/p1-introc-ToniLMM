/*---------------------------------------------------
File: ejercicio7.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: This program receives an integer number of 5 digits and it prints
every digit of the number separated with 3 spaces between them
---------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
int num1;

cout << "Write an integer number of 5 digits: ";
cin >> num1;

//detecta error si el usuario pone un numero mayor o menor a 5 cifras
while(num1 >= 100000 || num1 <= 9999) {
    cout << "Write an integer number of 5 digits please: ";
    cin >> num1;
}

cout << num1 / 10000 << "   " << num1 % 10000 / 1000 <<"   "
<< num1 % 1000 / 100 << "   " << num1 % 100 / 10 << "   "
<< num1 % 10 << endl;

return 0;
}