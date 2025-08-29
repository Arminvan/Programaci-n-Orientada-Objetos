#include <iostream>

using namespace std;

class Circulo
{
    private:
        float radio;
        float area;
        float perimetro;

    public:
    // inicializar el constructor
        Circulo(float r)
        {
            radio = r;
        }

    float mostrararea()
    {
        return  3.1415 * radio * radio;
    }

    float mostrarperimetro()
    {
        return 2*3.1415*radio;
    }
};

    int main(){
        float radio;
        cout<<"Ingresa el radio del circulo: ";
        cin>>radio;

        Circulo c(radio);
        cout <<"El area del circulo es: "<< c.mostrararea()<<endl;
        cout<<"El perimetro del circulo es: "<<c.mostrarperimetro()<<endl;
    }