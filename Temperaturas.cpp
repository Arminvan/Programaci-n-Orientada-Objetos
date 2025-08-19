#include <iostream>

int main() {
    using namespace std;
    int seleccion;
    int temperatura;
    int conversion;
    cout<<"Presiona 1 para convertir °C a °F, \n 2 para convertir °F a °C \n";
    cin>>seleccion;
    if (seleccion == 1)
    {
        cout<<"Ingresa los grados a convertir\n";
        cin>>temperatura;
        conversion = (temperatura * 9/5)+32;
        cout<<"La temperatura en grados Fahrenheit es \n"<<conversion;
    } else if (seleccion == 2)
    {
        cout<<"Ingresa los grados a convertir\n";
        cin>>temperatura;
        conversion = (temperatura -32)*5/9;
        cout<<"La temperatura en grados Fahrenheit es \n"<<conversion;
    }
    else
    {
        cout<<"La opcion elegida no existe";
    }
    return 0;
}