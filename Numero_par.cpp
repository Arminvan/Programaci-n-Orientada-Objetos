#include <iostream>

int main() {
    using namespace std;
    int numero = 0;
    cout << "Ingresa un numero: \n";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero es par: \n" << numero;
    } else {
        cout << "El numero no es par: \n" << numero;
    }

    return 0;
}
