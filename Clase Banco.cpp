#include <iostream>

using namespace std;

class cuentaBancaria
{
    private:
        int numerocuenta;
        double saldo;

    public:
        //Inicializamos el constructor
        cuentaBancaria(int n,double s)
        {
            numerocuenta = n;
            saldo = s;
        }

    void depositar(double monto)
    {
        if(monto > 0)
        {
            saldo += monto;
            cout<<"Deposito exitoso. Nuevo saldo "<<saldo<<endl;
        }
        else
        {
            cout<<"Monto invalido para deposito. " <<endl;
        }
    }

    void retirar(double monto)
    {
        if(monto > 0 && monto <= saldo)
        {
            saldo -= monto;
            cout<<"Retiro de monto exitoso. Nuevo saldo. "<<saldo<<endl;
        }
        else
        {
            cout<<"Monto invalido o saldo insuficiente. "<<endl;
        }
    }

    void mostrarSaldo()
    {
        cout<<"Su saldo actual es: "<<saldo<<endl;
    }
};

class Cliente
{
    private:
        string nombre;
        cuentaBancaria cuenta; // Se crea la relación de un cliente tiene una cuenta bancaria
    
    public:
        // Inicializamos el constructor
        Cliente (string n,int numCuenta, double saldoInicial) : cuenta(numCuenta, saldoInicial)
        {
            nombre = n;
        }

    void mostrarinformacion()
    {
        cout<<"Cliente: "<<nombre<<endl;
        cuenta.mostrarSaldo();
    }

    void depositar(double monto)
    {
        cuenta.depositar(monto);
    }

    void retirar(double monto)
    {
        cuenta.retirar(monto);
    }
};

    int main()
    {
        string nombre;
        int numeroCuenta;
        double saldoInicial;

        cout<<"Ingresa el nombre del cliente: ";
        getline(cin, nombre);
        cout<<"Ingresa el numero de cuenta: ";
        cin>>numeroCuenta;
        cout<<"Ingresa el saldo inicial: ";
        cin>>saldoInicial;

        Cliente c(nombre, numeroCuenta, saldoInicial);
        c.mostrarinformacion();


        c.depositar(500);
        c.retirar(200);

        return 0;
    }