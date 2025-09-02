#include <iostream>
#include <vector>

using namespace std;

class Empleado 
{
    private:
        string nombre;
        double salario;

    public:
        Empleado(string n, double s)
        {
            nombre = n;
            salario = s;
        }

    string getNombre()
    {
        return nombre;
    }

    double getSalario()
    {
        return salario;
    }

    void mostrarInformacion()
    {
        cout<<"Empleado: "<<nombre<<" | Salario: $"<<salario<<endl;
    }
};

class Empresa
{
    private:
        string nombre;
        vector<Empleado> empleados;

    public:
        Empresa(string n)
        {
            nombre = n;
        }

    void agregarEmpleado(string n, double s)
    {
        empleados.push_back(Empleado(n,s));
    }

    void mostrarEmpleado()
    {
        cout<<"\nEmpresa: "<<nombre<<endl;
        cout<<"Lista de empleados:\n";
        for(Empleado &e : empleados)
        {
            e.mostrarInformacion();
        }
    }

    void salarioPromedio()
    {
        if(empleados.empty())
        {
            cout<<"No hay empleados registrados.\n";
            return;
        }
        double suma = 0;
        for(Empleado &e : empleados)
        {
            suma += e.getSalario();
        }
        cout<<"Salario promedio: $"<<suma / empleados.size()<<endl;
    }
};

    int main()
    {
        string nombreEmpresa;
        cout<<"Ingresa el nombre de la empresa: "<<endl;
        getline(cin, nombreEmpresa);

        Empresa empresa(nombreEmpresa);

        int numEmpleados;
        cout<<"¿Cuantos empleados desea registrar? ";
        cin>>numEmpleados;

        for(int i = 0; i < numEmpleados; i++)
        {
            string nombreEmpleado;
            double salario;
            cout<<"\n Ingrese nombre del empleado "<<i + 1<<":";
            cin.ignore();
            getline(cin, nombreEmpleado);
            cout<<"Ingrese salario: ";
            cin>>salario;
            empresa.agregarEmpleado(nombreEmpleado, salario);
        }

        empresa.mostrarEmpleado();
        empresa.salarioPromedio();
        return 0;
    }
    