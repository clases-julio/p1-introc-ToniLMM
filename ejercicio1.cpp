/*---------------------------------------------------
File: ejercicio1.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: this program shows how to do operations with the numbers
provided by the user
---------------------------------------------------*/

#include <iostream>
int main() {
//asigna las variables
float num1;
float num2;
float sum;
float sub;
float mult;
float div;

//pide al usuario los 2 numeros
std::cout << "Write the first integer: ";
std::cin >> num1;
std::cout << "Write the second one: ";
std::cin >> num2;

//calcula la suma
sum = num1 + num2;
std::cout << "The total of " << num1 << "+" << num2 << " is " << sum << std::endl;

//calcula la multiplicacion
mult = num1 * num2;
std::cout << "The total of " << num1 << "*" << num2 << " is " << mult << std::endl;

//calcula la resta
sub = num1 - num2;
std::cout << "The total of " << num1 << "-" << num2 << " is " << sub << std::endl;

//calcula la division
div = num1 / num2;
std::cout << "The total of " << num1 << "/" << num2 << " is " << div << std::endl;

return 0;
}