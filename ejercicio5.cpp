/*---------------------------------------------------
File: ejercicio5.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: 
---------------------------------------------------*/
#include <iostream>
#include <math.h>
using namespace std;
int main() {
int radio;
float diam;
float circ;
float area;
float pi;

pi = 3.14159;

cout << "Write the radius of the circle: ";
cin >> radio;

diam =  radio * 2;
cout << "The diameter of the circle is " << diam << endl;

circ =  2 * pi * radio;
cout << "The circumference of the circle is " << circ << endl;

area =  pi * pow(radio, 2);
cout << "The area of the circle is " << area << endl;

return 0;
}