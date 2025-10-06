/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <algorithm> // Para usar la función std::reverse (opcional, pero útil)

int main() {
    std::string original;
    std::cout << "Ingresa una cadena de texto: ";
    // std::getline permite leer toda la línea, incluyendo espacios
    std::getline(std::cin, original); 

    // Opción 1: Usando un Bucle (más básico)
    /*
    std::string invertida_bucle = "";
    // Iteramos desde el último índice hasta 0
    for (int i = original.length() - 1; i >= 0; --i) {
        invertida_bucle += original[i];
    }
    std::cout << "Cadena invertida (Bucle): " << invertida_bucle << std::endl;
    */

    // Opción 2: Usando la función std::reverse (más idiomático en C++)
    std::string invertida = original; // Creamos una copia
    // std::reverse invierte los elementos en el rango dado (desde el inicio hasta el final)
    std::reverse(invertida.begin(), invertida.end()); 

    std::cout << "Cadena original: " << original << std::endl;
    std::cout << "Cadena invertida: " << invertida << std::endl;

    return 0;
}
