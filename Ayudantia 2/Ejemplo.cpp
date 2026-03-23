#include <iostream>
using namespace std;

class Direccion{//Definiendo la clase
public:
    //Atributos
    string calle;
    int numero;
    string ciudad;
    int codigoPostal;
    //Constructor (Asignación en el cuerpo {})
    Direccion(string c, int n, string ci, int co){
        calle = c;
        numero = n;
        ciudad = ci;
        codigoPostal = co;
    }
    //Métodos
    string getCalle(){return calle;}
    int getNumero(){return numero;}
    string getCiudad(){return ciudad;}
    int getCodigoPostal(){return codigoPostal;}

};

class Persona{
public:
    string nombre;
    int edad;
    Direccion direccion;
    //Constructor (Lista de inicialización (:))
    Persona(string n, int e, Direccion d): nombre(n), edad(e), direccion(d){}

    void mostrarInformacion(){
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"Calle: "<<direccion.getCalle()<<endl;
        cout<<"Numero: "<<direccion.getNumero()<<endl;
        cout<<"Ciudad: "<<direccion.getCiudad()<<endl;
        cout<<"Codigo postal: "<<direccion.getCodigoPostal()<<endl;
    }

};

int main(){
    return 0;
}