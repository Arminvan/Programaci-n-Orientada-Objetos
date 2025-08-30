#include <iostream>

using namespace std;

class Auto 
{
    private:
        string marca;
        string modelo;
        int anio;

    public:
        //Inicializamos el constructor
        Auto(string ma, string mo ,int an)
        {
            marca = ma;
            modelo = mo;
            anio = an;
        }

        void mostrardatos()
        {
            cout<<"La marca del auto ingresado es: "<<marca<<endl;
            cout<<"El modelo del auto ingresado es: "<<modelo<<endl;
            cout<<"El anio del auto ingresado es: "<<anio<<endl;
        }

        void clasico()
        {
            int antiguedad = 2025 - anio; // solo lo hago para el año actual
            if(antiguedad > 25)
            {
                cout<<"El auto ingresado ya es un clasico!!!";
            }
            else
            {
                cout<<"El auto aun no se considera como clasico";
            }
        }
};

    int main()
    {
        string marca;
        string modelo;
        int anio;

        cout<<"Ingresa la marca del auto"<<endl;
        getline(cin,marca);
        cout<<"Ingresa el modelo del auto"<<endl;
        getline(cin,modelo);
        cout<<"Ingresa el anio del auto"<<endl;
        cin>>anio;

        Auto au(marca,modelo,anio);
        au.mostrardatos();
        au.clasico();
        return 0;
    }