/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

// Definición de una Plantilla de Función (Función Genérica)
// La palabra clave 'typename T' indica que T es un parámetro de tipo,
// lo que permite que la función trabaje con cualquier tipo de dato (int, double, string, etc.)
template <typename T>
T sumar(T a, T b) {
    return a + b;
}

// Función principal
int main() {
    std::cout << "--- Plantillas (Templates): Funcion Generica ---" << std::endl;

    // Ejemplo 1: Suma de enteros (T se deduce como int)
    int num1 = 5;
    int num2 = 12;
    int sumaEnteros = sumar(num1, num2);
    std::cout << "Suma de enteros: " << num1 << " + " << num2 << " = " << sumaEnteros << std::endl;

    // Ejemplo 2: Suma de flotantes (T se deduce como double)
    double dbl1 = 3.5;
    double dbl2 = 2.75;
    double sumaDobles = sumar(dbl1, dbl2);
    std::cout << "Suma de flotantes: " << dbl1 << " + " << dbl2 << " = " << sumaDobles << std::endl;

    // Ejemplo 3: Concatenación de cadenas (T se deduce como std::string)
    std::string s1 = "Hola, ";
    std::string s2 = "Mundo!";
    std::string cadenaConcatenada = sumar(s1, s2);
    std::cout << "Concatenacion de cadenas: " << cadenaConcatenada << std::endl;

    return 0;
}

