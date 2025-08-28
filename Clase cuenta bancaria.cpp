#include <iostream>

using namespace std;

class Cuenta {
    private:
    double saldo;

    public:
    //constructor: inicializa el saldo
    Cuenta(double s)
    {
        if(s >=0)
        {
            saldo = s;
        }
        else
        {
            saldo = 0;
            cout<<"Saldo inicial invalido. se establece en 0.\n";
        }
    }

    //metodos
    void depositar(double cantidad)
    {
        if(cantidad >0)
        {
            saldo += cantidad;
        }
        else{
            cout<<"No se puede depositar una cantidad negativa. \n";
        }
    }

    void retirar(double cantidad)
    {
        if(cantidad > saldo)
        {
            cout<<"Fondos insuficientes. \n";
        }
        else if (cantidad <= 0)
        {
            cout<<"Cantidad no valida";
        }
        else
        {
            saldo -= cantidad;
        }
    }

    void mostrarsaldo()
    {
        cout<<"Saldo actual: $"<<saldo<<endl;
    }
};

int main(){
    double saldoinicial;
    cout<<"Ingrese el saldo inicial: ";
    cin>>saldoinicial;
    
    Cuenta cuenta1(saldoinicial);

    cuenta1.depositar(500);
    cuenta1.mostrarsaldo();

    cuenta1.retirar(200);
    cuenta1.mostrarsaldo();

    cuenta1.retirar(1000); //Se intenta retirar una cantidad mayor al saldo
    cuenta1.mostrarsaldo();

    return 0;
}