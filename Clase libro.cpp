#include <iostream>

using namespace std;

class Libro 
{
    private:
        string titulo;
        string autor;
        int numeroPagina;   
        
        public:
        //Inicializamos el constructor
        Libro(string t, string a, int np)
        {
            titulo = t;
            autor = a;
            numeroPagina = np;
        }

        void mostrarInformacion()
        {
            cout<<"El titulo del libro es: "<<titulo<<endl;
            cout<<"El autor del libro es: "<<autor<<endl;
            cout<<"Las paginas del libro son: "<<numeroPagina<<endl;
        }

        void cuentapaginas()
        {
            if(numeroPagina > 300)
            {
                cout<<"El libro es muy largo. "<<endl;
            }
            else
            {
                cout<<"El libro es corto. "<<endl;
            }
        }
};

    int main()
    {
        string titulo;
        string autor;
        int numeroPagina; 
        cout<<"Ingresa el titulo del libro"<<endl;
        getline(cin, titulo);
        cout<<"Ingresa el autor del libro"<<endl;
        getline(cin, autor);
        cout<<"Ingresa el total de paginas del libro"<<endl;
        cin>>numeroPagina;

        Libro l(titulo, autor, numeroPagina);
        l.mostrarInformacion();
        l.cuentapaginas();

        return 0;
    }