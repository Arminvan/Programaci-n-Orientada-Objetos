#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Clase Estudiante
class Estudiante {
private:
    string nombre;
    int edad;
    vector<float> notas;

public:
    Estudiante(string n, int e) : nombre(n), edad(e) {}

    void agregarNota(float nota) {
        notas.push_back(nota);
    }

    float calcularPromedio() const {
        if (notas.empty()) return 0.0;
        float suma = 0;
        for (float n : notas) {
            suma += n;
        }
        return suma / notas.size();
    }

    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Notas: ";
        for (float n : notas) {
            cout << n << " ";
        }
        cout << "\nPromedio: " << calcularPromedio() << endl;
        cout << "-----------------------------\n";
    }

    string getNombre() const { return nombre; }
    float getPromedio() const { return calcularPromedio(); }
};

// Clase Sistema de Gestión
class Sistema {
private:
    vector<Estudiante> estudiantes;

public:
    void registrarEstudiante() {
        string nombre;
        int edad, numNotas;
        cout << "Ingrese nombre del estudiante: ";
        cin.ignore();
        getline(cin, nombre);
        cout << "Ingrese edad: ";
        cin >> edad;

        Estudiante e(nombre, edad);

        cout << "Cuantas notas desea ingresar? ";
        cin >> numNotas;

        for (int i = 0; i < numNotas; i++) {
            float nota;
            cout << "Ingrese nota " << i+1 << ": ";
            cin >> nota;
            e.agregarNota(nota);
        }

        estudiantes.push_back(e);
        cout << "✅ Estudiante registrado con exito!\n\n";
    }

    void mostrarTodos() {
        cout << "\n📋 Lista de estudiantes:\n";
        for (const auto& e : estudiantes) {
            e.mostrarInformacion();
        }
    }

    void mejorEstudiante() {
        if (estudiantes.empty()) {
            cout << "No hay estudiantes registrados.\n";
            return;
        }
        Estudiante mejor = estudiantes[0];
        for (const auto& e : estudiantes) {
            if (e.getPromedio() > mejor.getPromedio()) {
                mejor = e;
            }
        }
        cout << "\n🏆 Mejor estudiante:\n";
        mejor.mostrarInformacion();
    }

    void estadisticasGrupo() {
        if (estudiantes.empty()) {
            cout << "No hay estudiantes registrados.\n";
            return;
        }
        float suma = 0;
        int aprobados = 0, reprobados = 0;
        for (const auto& e : estudiantes) {
            float prom = e.getPromedio();
            suma += prom;
            if (prom >= 6) aprobados++;
            else reprobados++;
        }
        cout << "\n📊 Estadisticas del grupo:\n";
        cout << "Promedio general: " << suma / estudiantes.size() << endl;
        cout << "Aprobados: " << aprobados << endl;
        cout << "Reprobados: " << reprobados << endl;
    }
};

// Función principal con menú
int main() {
    Sistema sistema;
    int opcion;

    do {
        cout << "\n===== 📚 Sistema de Gestion de Estudiantes =====\n";
        cout << "1. Registrar estudiante\n";
        cout << "2. Mostrar todos los estudiantes\n";
        cout << "3. Mejor estudiante\n";
        cout << "4. Estadisticas del grupo\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: sistema.registrarEstudiante(); break;
            case 2: sistema.mostrarTodos(); break;
            case 3: sistema.mejorEstudiante(); break;
            case 4: sistema.estadisticasGrupo(); break;
            case 0: cout << "👋 Saliendo del sistema...\n"; break;
            default: cout << "❌ Opcion invalida.\n"; break;
        }
    } while (opcion != 0);

    return 0;
}
