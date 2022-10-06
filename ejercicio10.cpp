/*---------------------------------------------------
File: ejercicio10.cpp
Author: Toni Mari
Date: 28/09/2022
Goal: 
---------------------------------------------------*/
#include <iostream>
using namespace std;
int main (){
    int n = 0, ast = 0, esp = 0;
    cout << "How many characters will have in the middle of the rhombus: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(esp = i; esp <= n-1; esp++){
            cout << " ";

        }
        for (ast = 1; ast <= (2*i)-1; ast++){
            cout <<"*";
        }
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--){  
        for(esp = i; esp <= n-1; esp++){
             cout << " ";
        }
        for(ast = 1; ast <= (2*i)-1; ast++){
            cout << "*";
        }
        cout << endl;
    }
}