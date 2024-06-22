//Fecha: 2024-18-06
//Autor: Axel Molineros
//Diseñe la función recursiva que realice la sumatoria de : 1 -2 + 3 - 4 + 5 - 6 + 7 .... n. Donde es el límite de la serie 100.
// 1) Actividad realizada en clase

#include <iostream>
using namespace std;
int Suma(int n)
{
    int Suma = 0;
    int i = 1;
    while (i <= n)
    {
        Suma = Suma + i;
        i++;
    }
    return Suma;
}

int Sumarecursiva(int i, int n)
{
    if (i<=n)
      return Sumarecursiva(i+1, n) + i;
    else
      return 0;  
}
int main()
{
    cout<<endl<<"La suma de los 5 primeros numeros: "<<Suma(6);
    cout<<endl<<"La suma de los 5 primeros numeros: "<<Suma(5);
}