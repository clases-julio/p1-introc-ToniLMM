/*---------------------------------------------------
File: ejercicio1.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: this program shows how to do operations with the numbers
provided by the user
---------------------------------------------------*/

#include <iostream>
int main() {
int num1;
int num2;
int sum;
int sub;
int mult;
int div;
std::cout << "Write the first integer: ";
std::cin >> num1;
std::cout << "Write the second one: ";
std::cin >> num2;

sum = num1 + num2;
std::cout << "The total of " << num1 << "+" << num2 << " is " << sum << std::endl;

mult = num1 * num2;
std::cout << "The total of " << num1 << "*" << num2 << " is " << mult << std::endl;

sub = num1 - num2;
std::cout << "The total of " << num1 << "-" << num2 << " is " << sub << std::endl;

div = num1 / num2;
std::cout << "The total of " << num1 << "/" << num2 << " is " << div << std::endl;

return 0;
}