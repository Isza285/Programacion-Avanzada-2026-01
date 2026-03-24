#include <iostream>
using namespace std;

class Estudiante{

public:

    string nombre;
    int edad;
    float promedio;
   
    Estudiante(string n, int e, float p){
       
        nombre = n;
        edad = e;
        promedio = p;
       
    }
   
    int getEdad(){return edad;}
    float getPromedio(){return promedio;}
   
};

int main(){
   
    Estudiante alumno("Juan", 23, 5.9);
   
    cout<<"Nombre: "<<alumno.nombre<<endl;
    cout<<"Edad: "<<alumno.getEdad()<<endl;
    cout<<"Promedio: "<<alumno.getPromedio()<<endl;
   
    return 0;
}