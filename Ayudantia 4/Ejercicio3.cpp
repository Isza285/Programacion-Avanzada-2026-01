#include <iostream>
using namespace std;

class Empleado{

public:

    string nombre;

    virtual void calcularPago(){

        cout<<"Sueldo del empleado: ---";

    }

};

class EmpleadoTiempoCompleto: public Empleado{

public:

    int sueldoMensual;

    void calcularPago() override{

        cout<<"Sueldo de tiempo completo: "<<sueldoMensual<<endl;

    }

};

class EmpleadoPorHora: public Empleado{

public:

    int horasTrabajadas;
    int pagoPorHora;

    void calcularPago() override{

        cout<<"Sueldo total por horas: "<<horasTrabajadas*pagoPorHora<<endl;

    }

};

int main(){
    //Debemos asignar cada valor a cada empleado ya que no se hizo constructor para ninguno
    Empleado* trabajadores[2];
    //Asignando valores al empleado de tiempo completo
    EmpleadoTiempoCompleto* tiempoCompleto = new EmpleadoTiempoCompleto();
    tiempoCompleto->nombre = "Juan";
    tiempoCompleto->sueldoMensual = 2000000;
    //Asignando valores a la empleada por horas
    EmpleadoPorHora* porHora = new EmpleadoPorHora();
    porHora->nombre = "Andrea";
    porHora->horasTrabajadas = 19;
    porHora->pagoPorHora = 35000;
    //Asignando ambos empleados al arreglo.
    trabajadores[0] = tiempoCompleto;
    trabajadores[1] = porHora;

    for(int i = 0; i<2; i++){

        trabajadores[i]->calcularPago();

    }
    
    return 0;
}

