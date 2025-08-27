#include <iostream>

    using namespace std;
    
    int sumar(int *a, int *b)
    {
        return *a+*b;
    }

    int main(){
        int x,y;
        cout<<"ingresa el primer numero: ";
        cin>>x;
        cout<<"ingresa el segundo numero: ";
        cin>>y;

        int *px = &x; //puntero apunta a x
        int *py = &y; //puntero apunta a y

        int resultado = sumar(px, py);

        cout<<"La suma es: "<<resultado<<endl;
        return 0;
}