/*---------------------------------------------------
File: ejercicio8a.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: 
---------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
int numero;
int factorial;
int i;

factorial = 1;
i = 1;

cout <<"Write a non negative natural number: ";
cin >> numero;

while(i < numero){
    i++;
    factorial *= i; // = factorial = factorial * i
}

cout <<"The factorial of " << numero << " is " << factorial << endl;
return 0;
}


