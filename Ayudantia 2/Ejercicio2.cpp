#include <iostream>
using namespace std;

class Perro{

public:

    int edad;
    string nombre;
    string nombreDueno;

    Perro(int e, string n, string nd){

        edad = e;
        nombre = n;
        nombreDueno = nd;

    }
    //Constructor por defecto
    Perro(){
        edad = 0;
        nombre = "";
        nombreDueno = "";

    }

    //Métodos get
    int getEdad(){return edad;}
    string getNombre(){return nombre;}
    string getNombreDueno(){return nombreDueno;}

    //Métodos set
    void setEdad(int e){
        edad = e;
    }
    void setNombre(string n){
        nombre = n;
    }
    void setNombreDueno(string nd){
        nombreDueno = nd;
    }

    //Método obtener informacion
    void mostrarInformacion(){
        cout<<"Edad: "<<edad<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Nombre dueño: "<<nombreDueno<<endl; 
    }

};

int main(){

    Perro mascota(2, "Lukas", "Cesar");

    mascota.mostrarInformacion();

    return 0;
}