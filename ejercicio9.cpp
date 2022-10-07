/*---------------------------------------------------
File: ejercicio9.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: 
---------------------------------------------------*/

#include <iostream>

#include <math.h>

using namespace std;

int main()

 

{

    double s =0;

 int n;

 int i;

 double a;

cout<<"introdisca el valor de "<<endl;

  cin>> n;

    for (i=1;i<=n;i++)

    {

        a=(-4)*pow(-1,i)/(2*i-1);

 

        s= s + a;

        }

        cout <<"el  valor de  pi es :"<<s<<endl;

 

    system("pause");

    return 0;

}