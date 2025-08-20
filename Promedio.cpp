#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"¿Cuantas notas vas a ingresar?";
    cin>> n;

    float notas[100]; //Arreglo para almacenar hasta 100 notas
    float suma = 0;

    for (int i = 0; i < n; i++)
    {
        cout<<"Nota"<<i + 1 <<":";
        cin>>notas[i];
        suma += notas[i]; //acumulamos 
    }
    
    float promedio = suma / n;

    cout<<"El promedio de las notas es: "<<promedio<<endl;
    return 0;
    
}