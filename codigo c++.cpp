/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    int n;
    long long factorial = 1; // Usamos long long para manejar valores grandes

    std::cout << "Ingresa un número entero no negativo para calcular su factorial: ";
    if (!(std::cin >> n)) {
        std::cerr << "Entrada inválida. Por favor, ingresa un número." << std::endl;
        return 1;
    }

    if (n < 0) {
        std::cout << "Error: El factorial no está definido para números negativos." << std::endl;
        return 1;
    } 
    
    // El caso n=0 ya está cubierto, pues factorial es 1.
    // Solo necesitamos el bucle para n > 0.
    for (int i = 1; i <= n; ++i) {
        factorial *= i; // factorial = factorial * i;
    }

    std::cout << "El factorial de " << n << " es: " << factorial << std::endl;

    return 0;
}