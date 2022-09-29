/*---------------------------------------------------
File: ejercicio4.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: 
---------------------------------------------------*/
#include <iostream>
int main() {
int num1;
int num2;
int num3;
int sum;
int prom;
int mult;
int max;
int min;
std::cout << "Introduzca tres enteros distintos: ";
std::cin >> num1 >> num2 >> num3;

sum = num1 + num2 + num3;
std::cout << "La suma es " << sum << std::endl;

prom = (num1 + num2 + num3) / 3;
std::cout << "El promedio es " << prom << std::endl;

mult = num1 * num2 * num3;
std::cout << "El producto es " << mult << std::endl;

if(num1>=num2 && num1>=num3){
    max = num1;
    if(num2>=num3) 
        min = num3;
    else min = num2;
}
else if(num2>=num3){
    max = num2;
    if(num3>=num1)
        min = num1;
    else min = num3;
}
else if(num3>=num2){
    max = num3;
    if(num2>=num1)
        min = num1;
    else min = num2;      
}

std::cout << "El mayor es " << max << std::endl;
std::cout << "El menor es " << min << std::endl;

return 0;
}