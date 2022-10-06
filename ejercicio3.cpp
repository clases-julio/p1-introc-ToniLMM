/*---------------------------------------------------
File: ejercicio3.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: In this program the user writes 2 integer numbers and the program
prints the bigger number or if they are the same
---------------------------------------------------*/
#include <iostream>
int main() {
int num1;
int num2;

std::cout << "Write the first integer: ";
std::cin >> num1;
std::cout << "Write the second one: ";
std::cin >> num2;

if (num1 > num2)
{
    std::cout << num1 << " es más grande\n";
}
else
{
    if (num1 < num2)
    {
    std::cout << num2 << " es más grande\n";
    }
    else
    {
        std::cout << "Estos números son iguales\n";
    }
}
return 0;
}