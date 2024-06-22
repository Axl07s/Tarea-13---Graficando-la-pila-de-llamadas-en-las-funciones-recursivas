// Autor: Axel Molineros
// Fecha: 2024-20-06
// 2) Diseña la función recursiva que imprima la una tabla de multiplicar.
// La función debe recibir 2 parámetros: el primero representa la tabla, y el segundo representa el límite inferior de esa tabla.

#include <iostream>
using namespace std;

// Imprime la tabla de multiplicar de un número desde un límite inferior hasta 12.
// La función es recursiva y se detiene cuando el índice 'i' es mayor que 12.
// La función "TablaMultiplicar" imprime las llamadas de la función "i".
// i es el límite inferior desde donde se empieza a imprimir la tabla.

void TablaMultiplicar(int tabla, int i) {
    // Condición base: si el índice es mayor que 12, se detiene la recursión.
    if (i <= 12) {
        // Imprime la multiplicación actual
        cout << tabla << " X " << i << " = " << (tabla * i) << endl;
        // Llama recursivamente a la función con el índice incrementado
        TablaMultiplicar(tabla, i + 1);
   }
}

int main() {
    // Ejemplos de llamadas a la función con diferentes parámetros
    
    // Imprime la tabla del 8 desde 3 hasta 12
    TablaMultiplicar(8, 3);
    cout << endl;
    
    // Imprime la tabla del 9 desde 6 hasta 12
    TablaMultiplicar(9, 6);
    cout << endl;
    
    // Imprime la tabla del 3 desde 1 hasta 12
    TablaMultiplicar(3, 1);
    cout << endl;
    
    // Imprime la tabla del 7 desde 5 hasta 12
    TablaMultiplicar(7, 5);
    
    return 0;
}