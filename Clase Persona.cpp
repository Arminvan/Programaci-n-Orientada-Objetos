#include <iostream>

using namespace std;

class Persona
{
    private:
        string nombre;
        int edad;

    public :
    // inicializar el constructor
    Persona(string n, int e)
    {
        nombre = n;
        edad = e;
    }

    void informacion()
    {
        cout<<"Su nombre es: "<<nombre<<endl;
    }

    void mayoredad()
    {
        if(edad >= 18)
        {
            cout<<"La persona es mayor de edad";
        }
        else
        {
            cout<<"La persona es menor de edad";
        }
    }
};

    int main()
{
    string nombre;
    int edad;
    cout<<"Ingresa tu nombre: "<<endl;
    cin>>nombre;
    cout<<"Ingresa tu edad: "<<endl;
    cin>>edad;

    Persona p(nombre,edad);
    p.informacion();
    p.mayoredad();

    return 0;
}