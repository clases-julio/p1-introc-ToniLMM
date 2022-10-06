/*---------------------------------------------------
File: ejercicio7.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: 
---------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
int num1;

cout << "Write an integer number of 5 digits: ";
cin >> num1;

cout << num1 / 10000 << "   " << num1 % 10000 / 1000 <<"   "
<< num1 % 1000 / 100 << "   " << num1 % 100 / 10 << "   "
<< num1 % 10 << endl;

return 0;
}