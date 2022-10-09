/*---------------------------------------------------
File: ejercicio9.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: This program calculates the number pi from an infinite series of operations.
It shows a table of the first 1000 iterations.
---------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
  double numerador = 4;
  double denominador = 1;
  double pi;
  int x = 0;
  int op = 1;
  int iteraciones = 1000;
  int num = 0;
  float pin = 3.14159;
  while(x < iteraciones) {
    num++;
    x++;
    pi += op * (numerador / denominador);
    denominador += 2;
    op *= -1;
    

    cout << num << "\t" << pi << "\t" << pin << endl;
  }

  return 0;
}


  
