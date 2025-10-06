/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    int N; // Almacena el tamaño deseado del arreglo
    int* arregloDinamico = nullptr; // Puntero que apuntará al inicio del arreglo

    std::cout << "Ingresa el número de elementos del arreglo (N): ";
    if (!(std::cin >> N) || N <= 0) {
        std::cerr << "Error: Ingresa un tamaño positivo válido." << std::endl;
        return 1;
    }

    // 1. Asignación dinámica de memoria para N enteros
    try {
        arregloDinamico = new int[N];
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error de asignación de memoria: " << e.what() << std::endl;
        return 1; // Terminar el programa si falla la asignación
    }

    // 2. Llenar el arreglo e imprimir
    std::cout << "Valores asignados dinámicamente: ";
    for (int i = 0; i < N; ++i) {
        arregloDinamico[i] = i + 1; // Asignamos un valor
        std::cout << arregloDinamico[i] << (i < N - 1 ? ", " : "");
    }
    std::cout << std::endl;

    // 3. Liberación de memoria
    delete[] arregloDinamico;
    arregloDinamico = nullptr; // Buena práctica: establecer el puntero a nullptr
    
    std::cout << "Memoria liberada exitosamente." << std::endl;

    return 0;
}
