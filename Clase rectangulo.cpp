#include<iostream>

using namespace std;

class rectangulo 
{
    private:
    float ancho;
    float alto;

    public:
    //constructor para inicializar valores
    rectangulo (float a, float h){
        ancho = a;
        alto = h;
    }

    //metodo para calcular el área
    float area(){
        return ancho * alto;
    }
    //metodo para caulcular el perímetro
    float perimetro (){
        return 2*(ancho + alto);
    }
};

    int main(){
        float a; float h;
        cout<<"Ingresa el ancho: "<<endl;
        cin>>a;
        cout<<"Ingresa el alto: "<<endl;
        cin>>h;
        rectangulo r(a, h);

        cout<<"Area: "<<r.area()<<endl;
        cout<<"Perimetro: "<<r.perimetro()<<endl;
        return 0;
    }
