// Autor: Axel Molineros
// Fecha: 2024-20-06
// 4) Diseña la función recursiva que imprima la una tabla de multiplicar, de manera descendente desde el 10 al 1

#include <iostream>
using namespace std;


// Imprime la tabla de multiplicar de las llamadas en orden descendente desde 10 hasta 1.
// La función es recursiva y se detiene cuando el índice 'i' es menor que 1.
// Las llamadas que la tabla de multiplicación imprimira de manera descendente.
// i El valor inicial desde donde se empieza a imprimir la tabla (debería ser 10).

void TablaMultiplicarDesc(int tabla, int i) {
    // Condición base: si el índice es menor que 1, se detiene la recursión.
    if (i >= 1) {
        // Imprime la multiplicación actual
        cout << tabla << " X " << i << " = " << (tabla * i) << endl;
        // Llama recursivamente a la función con el índice decrementado
        TablaMultiplicarDesc(tabla, i - 1);
    }
}

int main() {
    
    // Imprime la tabla del 2 desde 10 hasta el 1
    cout << "Tabla del 2:" << endl;
    TablaMultiplicarDesc(2, 10);
    cout << endl;
    
    // Imprime la tabla del 7 desde 10 hasta el 1
    cout << "Tabla del 7:" << endl;
    TablaMultiplicarDesc(7, 10);
    cout << endl;
    
    // Imprime la tabla del 3 desde 10 hasta el 1
    cout << "Tabla del 3:" << endl;
    TablaMultiplicarDesc(3, 10);
    cout << endl;
    
    // Imprime la tabla de 11 desde 10 hasta el 1
    cout << "Tabla del 11:" << endl;
    TablaMultiplicarDesc(11, 10);
    cout << endl;

    return 0;
}
