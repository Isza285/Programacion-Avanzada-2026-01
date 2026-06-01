#include <iostream>
#include <vector>

using namespace std;

class Vehiculo {
public:
    string marca;
    int precio;

    Vehiculo(string m, int p) : marca(m), precio(p) {}

    virtual void mostrarDetalles(){

        cout<<"Vehiculo: " << marca << " Precio: " << precio<<endl;

    }


};

class Automovil : public Vehiculo {
public:
    string color;

    Automovil(string m, int p, string c) : Vehiculo(m, p), color(c) {}

    void mostrarDetalles() override{

        cout << "Auto "<<color << " marca: " << marca << " Precio: " << precio<< endl;

    }

};

class Moto : public Vehiculo {
public:
    int cilindrada;

    Moto(string m, int p, int c) : Vehiculo(m, p), cilindrada(c) {}

    void mostrarDetalles() override{

        cout<< "Moto marca: "<< marca <<" "<< cilindrada << "cc Precio: "<<precio<< endl;

    }

};

class Camion : public Vehiculo{
public:
    int capacidadCarga;

    Camion(string m, int p, int cc) : Vehiculo(m, p), capacidadCarga(cc) {}

    void mostrarDetalles() override {

        cout <<"Camion marca " << marca << " Carga: " << capacidadCarga << "kg Precio: "<<precio <<endl;

    }
};

// Recuerden que se pide una función, no un metodo, ambos son conceptos diferentes.
void imprimirInventario(vector<Vehiculo*> inv) {

    for(int i =0;i< inv.size();i++){
        // Como es un vector de punteros, usamos la flecha (->)
        inv[i]->mostrarDetalles();

    }

}

int main() {
    
    vector<Vehiculo*> inventario;

    // Usamos un for para ingresar 5 motos y 5 camiones de forma rápida
    for(int i = 0; i < 5; i++) {
        // Recordar el new al momento de declarar objetos que son punteros
        inventario.push_back(new Moto("Honda", 2500000, 250));
        inventario.push_back(new Camion("Scania", 55000000, 15000));

    }

    cout << "Inventario: " << endl;
    
    imprimirInventario(inventario);

    return 0;
}