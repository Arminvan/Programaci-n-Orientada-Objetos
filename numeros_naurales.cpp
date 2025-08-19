#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingresa un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += i; // acumulamos la suma
    }

    cout << "La suma de los numeros del 1 al " << n << " es: " << suma << endl;

    return 0;
}
