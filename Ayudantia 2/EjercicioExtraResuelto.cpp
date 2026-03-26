#include <iostream>
using namespace std;

class Empleado{

public:
    //Atributos
    string nombre;
    int sueldo;
    //Constructor hecho con lista de inicialización
    Empleado(string n, int s): nombre(n), sueldo(s) {}
    //Métodos get
    string getNombre(){return nombre;}
    int getSueldo(){return sueldo;}
    //Método mostrarInfo
    void mostrarInformacion(){

        cout<<"Nombre empleado: "<<nombre<<endl;
        cout<<"Sueldo empleado: "<<sueldo<<endl;

    }

};

class Senior{

public:
    //Atributos
    int bono;
    Empleado senior;
    //Constructor hecho con lista de inicialización
    Senior(string n, int s, int b): senior(n,s), bono(b){}
    /*
    Como se solicitaba en el enunciado, el constructor inicializa el objeto "senior"
    que ese de clase Empleado, por lo que el constructor inmediatamente le añade
    su nombre y sueldo, para finalmente añadir un bono que es exclusivo de la clase Senior  
    */

    //Método mostrarInfo
    void mostrarInformacion(){

        cout<<"Nombre senior: "<<senior.getNombre()<<endl;
        cout<<"Sueldo senior: "<<senior.getSueldo()<<endl;
        cout<<"Bono: "<<bono<<endl;

    }

};

class Junior{

public:

    int duracionContrato;
    Empleado junior;

    Junior(string n, int s, int d): junior(n,s), duracionContrato(d) {}
    /*
    En este caso se repite lo mismo que para la clase Senior, la variable n y s
    se le asignan al objeto "junior" y en ves de tener un bono como el senior
    aca se tiene un atributo de "duracionContrato"
    */

    //Método mostrarInfo

    void mostrarInformacion(){

        cout<<"Nombre junior: "<<junior.getNombre()<<endl;
        cout<<"Sueldo junior: "<<junior.getSueldo()<<endl;
        cout<<"Duracion contrato: "<<duracionContrato<<" meses"<<endl;

    }

};

int main(){

    Senior miSenior("Nicolas", 2000000, 200000);
    Junior miJunior("Felipe", 1200000, 3);
    /*
    Recordar que los constructores creados para Senior y Junior, ambos
    reciben el nombre y sueldo del empleado desde un comienzo. No es
    necesario crear un objeto de clase Empleado anteriormente para
    asignarselos a Senior o Junior
    */

    miSenior.mostrarInformacion();

    miJunior.mostrarInformacion();

    return 0;
}