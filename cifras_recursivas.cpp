// Autor: Axel Molineros
// Fecha: 2024-20-06
// 3)  Diseñe la función recursiva que cuente el total de cifras que tiene un número entero.

#include <iostream>
using namespace std;

// Programa que cuenta el total de cifras que tiene un número entero.
// La función es recursiva y cuenta las cifras dividiendo el número por 10 en cada llamada recursiva.
// "num" es el número entero cuyo total de cifras se va a contar.
// "n" El valor inicial para la recursión (el valor es 1).

int TotalCifrasRec(int num, int n)

{
        // Condición base: si n es mayor o igual que num, se detiene la recursión.
        if( n <= num)
        // Llamada recursiva multiplicando n por 10 y sumando 1 al contar la cifra actual.
        return 1 + TotalCifrasRec(num, n*10);
    else 
        return 0; 
}
    int main() {

    // Imprime las llamadas del total de cada cifra
    cout << "Total de cifras de 5893: " << TotalCifrasRec(5893, 1) << endl;
    cout << "Total de cifras de 750: " << TotalCifrasRec(750, 1) << endl;
    cout << "Total de cifras de 1535768: " << TotalCifrasRec(1535768, 1) << endl;
    cout << "Total de cifras de 23: " << TotalCifrasRec(23, 1) << endl;

    return 0;
}