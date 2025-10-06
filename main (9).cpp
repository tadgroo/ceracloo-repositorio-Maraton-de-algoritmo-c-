/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

// Definición de la estructura de un Nodo
struct Nodo {
    int dato;
    Nodo* siguiente; // Puntero al siguiente nodo en la lista

    // Constructor para inicializar el nodo
    Nodo(int val) : dato(val), siguiente(nullptr) {}
};

// Función para imprimir todos los elementos de la lista
void imprimirLista(Nodo* cabeza) {
    Nodo* actual = cabeza;
    std::cout << "Lista: ";
    while (actual != nullptr) {
        std::cout << actual->dato;
        if (actual->siguiente != nullptr) {
            std::cout << " -> ";
        }
        actual = actual->siguiente;
    }
    std::cout << std::endl;
}

// Función principal
int main() {
    std::cout << "--- Estructura de Datos: Lista Enlazada Simple ---" << std::endl;

    // 1. Crear el primer nodo (cabeza de la lista)
    Nodo* cabeza = new Nodo(10); 

    // 2. Crear el segundo nodo
    Nodo* segundo = new Nodo(20);

    // 3. Crear el tercer nodo
    Nodo* tercero = new Nodo(30);

    // 4. Enlazar los nodos
    cabeza->siguiente = segundo; // 10 -> 20
    segundo->siguiente = tercero; // 20 -> 30
    // El tercer nodo tiene siguiente = nullptr, indicando el fin de la lista

    // Imprimir la lista
    imprimirLista(cabeza);

    // Liberar la memoria (IMPORTANTE en C++ para evitar memory leaks)
    delete cabeza;
    delete segundo;
    delete tercero;
    
    // Establecer punteros a nullptr después de eliminar para evitar dangling pointers
    cabeza = nullptr;
    segundo = nullptr;
    tercero = nullptr;

    return 0;
}
