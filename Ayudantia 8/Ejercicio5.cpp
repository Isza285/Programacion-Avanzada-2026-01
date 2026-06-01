#include <iostream>
#include <vector>

using namespace std;

class Empleado {
public: 
    string nombre;
    int salarioBase;

    Empleado(string n, int s): nombre(n), salarioBase(s) {}

    virtual int calcularSalario() {

        return salarioBase;

    }

    virtual void mostrarDetalles(){


        cout << "Nombre: " << nombre << " Salario: "<<calcularSalario()<< endl;

    }

};

class Gerente : public Empleado {
public:
    int bono;

    // Se llama al constructor del padre (Empleado) y el bono se asigna normal
    Gerente(string n, int s, int b) : Empleado(n, s), bono(b) {}

    int calcularSalario() override {

        return salarioBase + bono;

    }

    void mostrarDetalles() override{

        cout << "Gerente: " << nombre<< "Salario final: " << calcularSalario()<< endl;

    }

};

class Ingeniero : public Empleado {
public:

    string especialidad;

    Ingeniero(string n, int s, string esp) : Empleado(n, s), especialidad(esp){}

    void mostrarDetalles() override{

        cout <<"Ingeniero en " << especialidad << ": " << nombre << " Salario final: "<<calcularSalario() <<endl;
    }

};


int main() {
    
    vector<Empleado*> empresa;

    empresa.push_back(new Gerente("Claudio", 1000000, 500000));
    empresa.push_back(new Ingeniero("Diego", 1200000, "Industrias"));
    //Recordar el new al momento de declarar objetos que son punteros.

    for(int i = 0; i < empresa.size(); i++){
        // Como es un vector de punteros, usamos la flecha (->) en vez del punto
        empresa[i]->mostrarDetalles();

    }

    return 0;
}