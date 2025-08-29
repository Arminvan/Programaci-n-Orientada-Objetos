#include <iostream>

using namespace std;

class Producto
{
    private:
        string nombre;
        float precio;
        float cantidad;

    public:
    //Inicializamos el constructor
    Producto (string n, float p, float c){
        nombre = n;
        precio = p;
        cantidad = c;
    }

    float total()
    {
        return  precio * cantidad;
    }

    void mostrar()
    {
        cout<<"Los productos comprados son:\n"<<nombre<<endl;
    }
};

    int main()
    {
        string nombre;
        float precio;
        float cantidad;

        cout<<"Ingresa el nombre del producto"<<endl;
        cin>>nombre;
        cout<<"Ingresa el precio del producto"<<endl;
        cin>>precio;
         cout<<"Ingresa la cantidad de los productos"<<endl;
        cin>>cantidad;

        Producto p(nombre, precio, cantidad);
        p.mostrar();
        cout << "El total a pagar es: " << p.total() << endl;
        return 0;
    }