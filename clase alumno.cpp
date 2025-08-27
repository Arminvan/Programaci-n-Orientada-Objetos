#include <iostream>
#include <string>

using namespace std;

class alumno
{
    private:
    string nombre;
    float calificaion;

    public:
    //constructor para inicializar valores
    alumno(string n, float c){
        nombre = n;
        calificaion = c;
    }

    //metodo para ver si aprobo o no
    void mostrarResultado(){
        cout<<"Alumno: "<<nombre<<endl;
        cout<<"Calificación: "<<calificaion<<endl;
        if(calificaion > 6.0)
        {
            cout<<"El alumno esta aprobado"<<endl;
        }
        else{
            cout<<"El alumno ha reprobado"<<endl;
        }
    }
};

   int main(){
    string nombre;
    float calificacion;
    cout<<"Ingresa el nombre del alumno: "<<endl;
    cin>>nombre;
    cout<<"Ingresa la calificacion del alumno: "<<endl;
    cin>>calificacion;

    alumno a(nombre,calificacion);
    a.mostrarResultado();
    return 0;
   } 