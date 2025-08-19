#include <iostream>

int main(){
    using namespace std;
    int n;
    cout<<"Ingresa numeros para determinar el mayor y menor";
    cin>>n;
    int arr[10]; //se declara el tamaño de numeros a ingresar
    for (int i = 0; i < n; i++)
    {
        cout<<"Numero" <<i+1<<":";
        cin>>arr[i];
    }
    int maximo = arr[0];
    int minimo = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > maximo)
        maximo = arr[i];

        if(arr[i] < minimo)
        minimo = arr[i];
    }
    cout<<"El valor maximo es: "<<maximo<<endl;
    cout<<"El valor minimo es: "<<minimo<<endl;
    return 0;
}