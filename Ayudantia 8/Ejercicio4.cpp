#include <iostream>
#include <map>
#include <vector>
using namespace std;

class SistemaAcademico {
public:

    map<int, vector<string>> alumnos; 
    
    void agregarCurso(int rut, string curso) {

        alumnos[rut].push_back(curso);

    }
    
    void mostrarCursosAlumno(int rut) {

        cout<<"Cursos del alumno rut: " << rut <<endl;

        vector<string> cursoCopia = alumnos[rut]; // para facilitar recorrer los cursos

        for (int i= 0; i<cursoCopia.size(); i++){
    
            cout<< cursoCopia[i]<<endl;

        }

    }
    
    void mostrarTodos() {

        for (auto par : alumnos) {

            cout << "Alumno rut: " << par.first << " inscrito en los cursos: "<<endl;

            vector<string> cursoCopia = par.second; //lo mismo que lo anterior, para imprimir los cursos de manera mas sencilla.

            for (int i= 0; i<cursoCopia.size(); i++){
    
                cout<< cursoCopia[i]<<endl;

            }

        }

    }

};

int main(){//Añadir estudiantes y utilizar los metodos
    return 0;
}