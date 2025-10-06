/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath> // Para usar la constante M_PI de la librería cmath (o definir 3.14159)
#include <iomanip>

// Definición de la función para calcular el área del círculo
// El área es: Pi * radio * radio
double calcularAreaCirculo(double radio) {
    // M_PI es la constante para Pi, definida en cmath
    const double PI = 3.14159265358979323846; 
    return PI * radio * radio;
}

int main() {
    double radio;
    double area;

    std::cout << "Ingresa el radio del círculo: ";
    if (!(std::cin >> radio) || radio < 0) {
        std::cerr << "Error: Ingresa un radio positivo válido." << std::endl;
        return 1;
    }

    // Llamada a la función
    area = calcularAreaCirculo(radio);

    // Mostrar el resultado
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "El área del círculo con radio " << radio 
              << " es: " << area << std::endl;

    return 0;
}

