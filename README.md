# P1-IntroCPP

##### Fecha: 28/09/22
##### Autor: Marí Marí, Toni Lázaro
##### Objetivo: El objetivo de este fichero es dar a conocer los fundamentos básicos de la programación en c++
##### Particularidades: En el ejercicio 10 pro cuando pones un numero mayor a 21 reconoce el error, si seguidamente pones un numero par reconoce tambien el error, pero al poner otra vez un numero mayor a 21 no reconoce el error y hace el rombo de dichas dimensiones

## 0.Introducción
Los ejercicios de esta práctica estan orientados a obtener los conocimientos basicos de la programación en c++

## 1.Resumen de los ejercicios

##### Ejercicio 1

Escribe un programa que pida al usuario que escriba dos números, que obtenga los números del usuario e imprima la suma, producto, diferencia y cociente de los números.

Observaciones: el programa da error cuando divide entre 0.

```c++
int main() {
//asigna las variables
int num1;
int num2;
int sum;
int sub;
int mult;
int div;

//pide al usuario los 2 numeros
std::cout << "Write the first integer: ";
std::cin >> num1;
std::cout << "Write the second one: ";
std::cin >> num2;

//calcula la suma
sum = num1 + num2;
std::cout << "The total of " << num1 << "+" << num2 << " is " << sum << std::endl;

//calcula la multiplicación
mult = num1 * num2;
std::cout << "The total of " << num1 << "*" << num2 << " is " << mult << std::endl;

//calcula la resta
sub = num1 - num2;
std::cout << "The total of " << num1 << "-" << num2 << " is " << sub << std::endl;

//calcula la division
div = num1 / num2;
std::cout << "The total of " << num1 << "/" << num2 << " is " << div << std::endl;
``` 

##### Ejercicio 2

Escribe un programa que imprima los números del 1 al 4 en la misma lı́nea, con cada par de números adyacentes separado por un espacio; esto es: 1 2 3 4. Haz esto de varias formas:
a. Utilizando una instrucción con un operador de inserción de flujo (<<).

```c++
int main() {
std::cout << "1 2 3 4\n";
```  

b. Utilizando una instrucción con cuatro operadores de inserción de flujo.

```c++
int main() {
std::cout << "1 " << "2 " << "3 " << "4\n";
```  

c. Utilizando cuatro instrucciones.

```c++
int main() {
std::cout << "1 ";
std::cout << "2 ";
std::cout << "3 ";
std::cout << "4 ";
```  

##### Ejercicio 3

Escribe un programa que pida al usuario que escriba dos enteros, que obtenga los números del usuario e imprima el número más grande, seguido de la expresión es más grande. Y, si los números son iguales, que imprima el mensaje Estos números son iguales.


```c++
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
``` 

##### Ejercicio 4

Escribe un programa que reciba tres enteros del teclado e imprima la suma, promedio, producto, menor y mayor de esos números. El diálogo de la pantalla debe aparecer de la siguiente manera:
Introduzca tres enteros distintos: 13 27 14
La suma es 54
El promedio es 18
El producto es 4914
El menor es 13
El mayor es 27

```c++
``` 

##### Ejercicio 5

Escribe un programa que lea el radio de un cı́rculo como un número entero y que imprima su diámetro, circunferencia y área. Usa el valor constante 3,14159 para π. Realiza todos los cálculos en instrucciones de salida.


```c++
``` 

##### Ejercicio 6

Escribe una aplicación que muestre un patrón de tablero de ajedrez como el que se
muestra a continuación. Hazlo primero empleando ocho instrucciones de salida (cout), y
después hazlo intentando utilizar el menor número de instrucciones posible.
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *


```c++
``` 

##### Ejercicio 7

Escribe un programa que reciba como entrada un número entero de cinco dı́gitos, que
separe ese número en sus dı́gitos individuales y los imprima, cada uno separado de los demás
por tres espacios. Por ejemplo, si el usuario escribe el número 31250, el programa debe
imprimir:3 1 2 5 0.


```c++
``` 

##### Ejercicio 8

El factorial de un entero n no negativo se escribe como n! (n factorial) y se define de la siguiente manera: n! = n(n–1)(n–2)...1 (para valores de n mayores o iguales a 1) y n! = 1 (para n = 0 o n = 1). Por ejemplo, 5! = 54321, que es 120. Usa instrucciones while en cada uno de los siguientes casos:
a. Escribe una aplicación que lea un entero no negativo, que calcule e imprima su factorial.
b. Escribe un programa que estime el valor de la constante matemática e, utilizando la fórmula: e = 1 + 1!1 + 2!1 + 3!1 + .... Pide al usuario la precisión deseada de e (es decir, el número de términos en la suma).
c. Escribe una aplicación que calcule el valor de ex , utilizando la fórmula: ex = 1 + 1!x + 3 x2 + x3! + ... Pide al usuario la precisión deseada de e (es decir, el número de términos 2! en la suma).


```c++
``` 

##### Ejercicio 9

Calcula el valor de π a partir de la serie infinita: π = 4 − 43 + 54 − 47 + 94 − 11 una tabla que muestre el valor aproximado de π, después de cada uno de los primeros 1000 términos de esta serie.


```c++
``` 

##### Ejercicio 10

Escribe un programa que imprima la siguiente figura de rombo. Puedes utilizar instruc-
ciones de salida que impriman un solo asterisco (*) o un solo espacio en blanco. Maximiza el
uso de la repetición (con instrucciones for anidadas), y minimiza el número de instrucciones
de salida.
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *


```c++
``` 

##### Ejercicio 10pro

Bonus: haz una mejora del programa (ejercicio10pro.cpp) para que lea un número impar en el rango de 1 a 19, correspondiente al número de filas que configuran el rombo, y adespués muestre un rombo del tamaño apropiado.

```c++
``` 


