#include<iostream>

int main(){
    using namespace std;
    int numero = 0;
    int resultado;
    cout<<"Ingresa un numero\n";
    cin>>numero;
    for(int contador = 0; contador<11;contador++){
        resultado = numero * contador;
        cout<< numero<<"*"<<contador<<"="<<resultado<<"\n";
    }
}